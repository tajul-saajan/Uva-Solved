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

#define loop(i,num) for(i=0;i<num;i++)

#define MOD 1000000007
#define MX 100010

#define MAX 25
#define InsMAX 25



int main()
{
    int row,col,instr,i,j,k,z;
    //READ;

    while(cin>>row>>col>>instr)
    {
        if(!row&&!col&&!instr) break;

        int grph[row][col];

        int sticker=0;
        char c,dir;
        int r,p;

        char s[row][col];
        loop(i,row) cin>>s[i];
        bool ok=false;

        loop(i,row)
        {
            loop(j,col)
            {
                if(s[i][j]=='.') grph[i][j]=0;
                else if(s[i][j]=='*') grph[i][j]=1;
                else if(s[i][j]=='#') grph[i][j]=-1;
                else if(s[i][j]=='N'||s[i][j]=='S'||s[i][j]=='L'||s[i][j]=='O')
                {
                    dir=s[i][j];
                    if(dir=='O') dir='W';
                    if(dir=='L') dir='E';
                    r=i;
                    p=j;
                    ok=true;
                }
            }
        }
        if(!ok) break;


        loop(i,instr)
        {
            cin>>c;
            if(c=='E')
            {
                if(dir=='N') dir='W';
                else if(dir=='W') dir='S';
                else if(dir=='S') dir='E';
                else if(dir=='E') dir='N';
            }
            else if(c=='D')
            {
                if(dir=='W') dir='N';
                else if(dir=='S') dir='W';
                else if(dir=='E') dir='S';
                else if(dir=='N') dir='E';
            }
            else
            {
                if(dir=='W'&&p>0&&grph[r][p-1]!=-1) p--;
                else if(dir=='E'&&p<(col-1)&&grph[r][p+1]!=-1) p++;
                else if(dir=='S'&&r<(row-1)&&grph[r+1][p]!=-1) r++;
                else if(dir=='N'&&r>0&&grph[r-1][p]!=-1) r--;
            }


            if(grph[r][p]==1)
            {
                sticker++;
                grph[r][p]=0;
            }
        }

        cout<<sticker<<endl;
    }

    return 0;
}
