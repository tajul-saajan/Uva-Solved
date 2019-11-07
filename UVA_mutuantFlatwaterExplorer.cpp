#include<bits/stdc++.h>

using namespace std;


#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define PB push_back
#define PIE acos(-1.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define ll long long

#define sc(a) scanf("%d",&a)
#define scc(a,b) scanf("%d%d",&a,&b)
#define KS printf("Case %d: ",kk++)
#define pf() printf()

#define loop(i,num) for(int i=0;i<num;i++)

#define MOD 1000000007
#define MX 100010





using namespace std;


struct pnt
{
    int x,y;
    char pos;
};

int main()
{

    int r,c;
    //READ;
    scc(c,r);

    int ara[r+1][c+1];
    CLR(ara);
    pnt o;

    while(cin>>o.x>>o.y>>o.pos)
    {

        //o.y=r-o.y;
        char str[105];
        cin>>str;
        bool ok=true;
        getchar();
        int l=strlen(str);

        for(int i=0; i<l; i++)
        {


            if(str[i]=='F')
            {
                if(o.pos=='E')o.x++;
                else if(o.pos=='W')o.x--;
                else if(o.pos=='N')o.y++;
                else if(o.pos=='S')o.y--;
            }
            else
            {
                if(str[i]=='L')
                {
                    if(o.pos=='E') o.pos='N';
                    else if(o.pos=='W')o.pos='S';
                    else if(o.pos=='N')o.pos='W';
                    else if(o.pos=='S')o.pos='E';
                }
                else
                {
                    if(o.pos=='E') o.pos='S';
                    else if(o.pos=='W')o.pos='N';
                    else if(o.pos=='N')o.pos='E';
                    else if(o.pos=='S')o.pos='W';
                }
            }
            if((o.x<0||o.y<0)||(o.x>c||o.y>r))
            {
                if(o.x<0)o.x=0;

                else if(o.y<0)o.y=0;

                else if(o.x>c)o.x=c;

                else o.y=r;

                if(ara[o.y][o.x]==0)
                {
                    ara[o.y][o.x]=1;
                    ok=false;
                    break;
                }
                //else continue;
            }

        }
        //o.y=r-o.y;

        if(ok)printf("%d %d %c\n",o.x,o.y,o.pos);
        else printf("%d %d %c LOST\n",o.x,o.y,o.pos);
    }
}
