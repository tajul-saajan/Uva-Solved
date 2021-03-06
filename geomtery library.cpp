#include <bits/stdc++.h>
#define EPS 1e-9
#define pi acos(-1)
using namespace std;


struct point
{

    //***when points are double
    double x,y;
    point()
    {
        x=0;
        y=0;
    }
    //sort points first with respect to x then y
    bool operator < (const point& other)const
    {
        if(fabs(x-other.x)<EPS)
        {
            return y<other.y;
        }
        return x<other.x;
    }
    //***when points are integer
    /*int x,y;
    point()
    {
        x=0;
        y=0;
    }
    //sort points first with respect to x then y
    bool operator < (const point& other)const
    {
        if(abs(x-other.x)<EPS)
        {
            return y<other.y;
        }
        return x<other.x;
    }*/
};



bool aresame(point p1,point p2)
{
    return fabs(p1.x-p2.x)<EPS && fabs(p1.y-p2.y)<EPS;
}

double dist(point p1,point p2)
{
    return hypot(p1.x-p2.x,p1.y-p2.y);//hypot(x,y) returns sqrt(x*x+y*y);
}

struct vec
{
    double x,y;
};

point translate(point p,vec v)
{
    //move point p with respect to vector v
    point p1;
    p1.x=p.x+v.x;
    p1.y=p.y+v.y;
    return p1;
}

point rotate_point(point p,double theta)//rotation with respect to origin 0,0
{
    double rad=theta*pi/180.0;
    point after_rotation;
    after_rotation.x=p.x*cos(rad)-p.y*sin(rad);
    after_rotation.y=p.x*sin(rad)+p.y*cos(rad);
    return after_rotation;
}

point rotate_point(point pointToRotate,point centerPoint, double angleInDegrees)//rotation with respect to point p2
{
    double angleInRadians = angleInDegrees * (pi / 180);
    double cosTheta = cos(angleInRadians);
    double sinTheta = sin(angleInRadians);
    point after_rotation;
    after_rotation.x=(cosTheta * (pointToRotate.x - centerPoint.x) -
            sinTheta * (pointToRotate.y - centerPoint.y) + centerPoint.x);
    if(fabs(after_rotation.x)<EPS)
        after_rotation.x=0;
    after_rotation.y=(sinTheta * (pointToRotate.x - centerPoint.x) +
            cosTheta * (pointToRotate.y - centerPoint.y) + centerPoint.y);
    if(fabs(after_rotation.y)<EPS)
        after_rotation.y=0;
    return after_rotation;
}



struct line//line is represented in form ax+by+c=0
{
    //double a,b,c;
    int a,b,c;
    bool operator < ( const line& l ) const
    {
        return a < l.a || a == l.a && ( b < l.b || b == l.b && c < l.c );
    }
};
line canonical_form_of_line(line l)
{
    int a=l.a,b=l.b,c=l.c;
    if( a < 0 || a == 0 && b < 0 ) { a = -a; b = -b; c = -c; }
    int d = a ?__gcd( __gcd( abs( a ), abs( b ) ), c ) :
            ( b || c ? __gcd( abs( b ),c ) : 1 );
        l.a = a / d;
        l.b = b / d;
        l.c = c / d;
    return l;
}

line point_to_line(point p1,point p2)
{

    /*
    //always in the form ax+by+c=0
    line l;
    not in canonical form.a,b,c, is double
    if(p1.x==p2.x)
    {
        l.a=1.0;
        l.b=0.0;
        l.c=-p1.x;
    }
    else
    {
        l.a=-(double)(p1.y-p2.y)/(p1.x-p2.x);
        l.b=1.0;
        l.c=-(double)(l.a*p1.x)-(l.b*p1.y);
    }*/
    line l;
    l.a=p2.y - p1.y;
    l.b=p1.x - p2.x;
    l.c=p1.y * p2.x -p1.x * p2.y ;
    l=canonical_form_of_line(l);
    return l;
}

bool areparallel(line l1,line l2)
{
    return (fabs(l1.a-l2.a)<EPS && fabs(l1.b-l2.b)<EPS);
}

bool aresame(line l1,line l2)
{
    return (areparallel(l1,l2)&&(fabs(l1.c-l2.c)<EPS));
}

bool does_intersect(line l1,line l2,point *p)
{
    if(aresame(l1,l2))
        return false;
    if(areparallel(l1,l2))
        return false;
    p->x=(l2.b*l1.c-l1.b*l2.c)/(l2.a*l1.b-l1.a*l2.b);
    if(fabs(l1.b>EPS))//special case for vertical line to avoid division by zero
    {
        p->y=-(l1.a*p->x+l1.c)/l1.b;
    }
    else
    {
        p->y=-(l2.a*p->x+l2.c)/l2.b;
    }
    return true;
}





// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(point p, point q, point r)
{
    // See 10th slides from following link for derivation of the formula
    // http://www.dcs.gla.ac.uk/~pat/52233/slides/Geometry1x1.pdf
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // colinear

    return (val > 0)? 1: 2; // clock or counterclock wise
}


// point q lies on line segment 'pr'
bool onSegment(point p, point q, point r)
{
    if(orientation(p,q,r)!=0)//not colinear
        return false;
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;

    return false;
}
//returns true if line segment 'p1q1' and 'p2q2' intersect.
bool doIntersect(point p1, point q1, point p2, point q2)
{
    // Find the four orientations needed for general and
    // special cases
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    // General case
    if (o1 != o2 && o3 != o4)
        return true;

    // Special Cases
    // p1, q1 and p2 are colinear and p2 lies on segment p1q1
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;

    // p1, q1 and p2 are colinear and q2 lies on segment p1q1
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;

    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;

     // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false; // Doesn't fall in any of the above cases
}


double polar_angle_of_p2_from_reference_p1(point p1,point p2)
{
    double delta_x = p2.x - p1.x;
    double delta_y = p2.y - p1.y;
    double theta_radians;
    theta_radians = atan2(delta_y, delta_x);
    double theta_degree=theta_radians* 180 / pi;
    //return theta_radians;
    if(theta_degree<0)
        theta_degree=theta_degree+360;
    return theta_degree;
}

bool is_on_line(line l,point p)
{
    if(fabs(l.a*p.x+l.b*p.y+l.c)<EPS)
        return true;
    return false;
}

double degree_to_radian(double deg)
{
    return deg*(pi/180.0);
    return deg;
}
double radian_to_degree(double rad)
{
    return rad*(180.0/pi);
}
double distToline(point p,point A,point B,point *c)
{
    double scale=(double)((p.x-A.x)*(B.x-A.x)+(p.y-A.y)*(B.y-A.y))/((B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));
    c->x=A.x+scale*(B.x-A.x);
    c->y=A.y+scale*(B.y-A.y);
    return dist(p,*c);
}

double distToLinesegment(point p,point A,point B,point* c)
{
    if((B.x-A.x)*(p.x-A.x)+(B.y-A.y)*(p.y-A.y)<EPS)
    {
        c->x=A.x;
        c->y=A.y;
        return dist(p,A);
    }
    if((A.x-B.x)*(p.x-B.x)+(A.y-B.y)*(p.y-B.y)<EPS)
    {
        c->x=B.x;
        c->y=B.y;
        return dist(p,B);
    }
    return distToline(p,A,B,c);
}


int on_which_side(point p,line l)
{
    //assumes point is not on line
    if(fabs(l.a)<EPS)//vertical line
    {
        double y1=-(l.c)/l.b;
        if(y1<p.y)//point is above line
            return 0;
        else
            return 1;////point is below line
    }
    else
    {
        double x1;
         x1=-(l.b*p.y+l.c)/l.a;
         //If the point P lies to the right of the line, then p.x>x1
         if(p.x>x1)//point is on right side
            return 0;
         else//point is on left side
            return 1;
    }
}

double perimeter_of_polygon(vector<point> v)
{
    //assumes polygon starts and ends with same point
    int i,j=v.size();
    double len=0;
    for(i=0;i<j-1;i++)
    {
        len=len+dist(v[i],v[i+1]);
    }
    return len;
}

double area_of_a_polygon(vector<point> v)
{
    //assumes polygon starts and ends with same point
    int i,j=v.size();
    double result=0,x1,x2,y1,y2;
    for(i=0;i<j-1;i++)
    {
        x1=v[i].x;
        y1=v[i].y;
        x2=v[i+1].x;
        y2=v[i+1].y;
        result=result+(x1*y2-x2*y1);
    }
    return fabs(result)/2.0;
}
//returns true if all three consecutive vertices of P form the same turns (either all left or all right)
bool isconvex(vector<point>P)
{
    int sz=P.size(),i;
    if(sz<3)
        return false;//line or  is not a convex
    bool isLeft = orientation(P[0],P[1],P[2]);
    for(i=1;i<sz;i++)
    {
        if(orientation(P[i],P[(i+1)%sz],P[(i+2)%sz])!=isLeft)
            return false;
    }
    return true;
}
//returns true if point p is in either convex/concave P
bool inPolygon(point p,vector<point>P)
{
    //assumes first and last vertex are same,returns false if point is on the line of polygon
    if(P.size()==0)
        return false;
    int j=P.size()-1;
    double sum=0;
    for(int i=0;i<j;i++)
    {
        if(onSegment(P[i],p,P[i+1]))
            return false;
        point a=p,b=P[i],c=P[i+1];
        double ux=b.x-a.x,uy=b.y-a.y;
        double vx=c.x-a.x,vy=c.y-a.y;
        double angle=acos((ux*vx+uy*vy)/sqrt((ux*ux+uy*uy)*(vx*vx+vy*vy)));
        if(angle<0)
            sum=sum-angle;
        else
            sum=sum+angle;
    }
    return (fabs(sum-2*pi)<EPS||fabs(sum+2*pi)<EPS);
}

vector<point> lineintersctSeg(point a,point b,vector<point>P)
{
    line l=point_to_line(a,b);
    vector<point>v;
    int i,j;
    for(i=0,j=P.size();i<j;i++)
    {
        if(is_on_line(l,P[i])||on_which_side(v[i],l)==0)
            v.push_back(P[i]);
    }
    return v;
}

bool point_inside_circle(point center,double radius,point p)
{
    //if point is on the circle returns false
    if(dist(center,p)<radius)
    {
        return true;
    }
    return false;
}
