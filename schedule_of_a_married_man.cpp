#include<bits/stdc++.h>

using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define PB push_back
#define PI acos(-1.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define LL long long

#define S(a) scanf("%d",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define KS printf("Case %d: ",kk++)

#define MOD 1000000007
#define MX 100010


int main()
{
    int tc,kk=1,n,m,a,b,c,d,e,f,g,h;
    cin>>tc;
    while(tc--)
    {
        scanf("%d:%d %d:%d",&a,&b,&c,&d);
        a=a*60+b, c=c*60+d;
        scanf("%d:%d %d:%d",&e,&f,&g,&h);
        e=e*60+f, g=g*60+h;


        printf("Case %d: ",kk++);
        if(e>c || a>g)
        cout<<"Hits Meeting";
        else cout<<"Mrs Meeting";
        printf("\n");
    }
    return 0;
}
