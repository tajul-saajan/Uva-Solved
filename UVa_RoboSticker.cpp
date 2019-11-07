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


char ss[105][105], face;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, sl, tc, kk=1, stx, sty, nx, ny;
    string s;
    READ;

    while(cin>>n>>m>>sl && n)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                cin>>ss[i][j];
                if(ss[i][j]=='N' || ss[i][j]=='S' || ss[i][j]=='L' || ss[i][j]=='O') stx=i, sty=j, face=ss[i][j];
            }
        cin>>s;

        //cout<<stx<<" "<<sty<<" "<<face<<endl;
        int cnt=0;
        for(int i=0;i<sl;i++)
        {
            if(s[i]=='D')
            {
                if(face=='N') face='L';
                else if(face=='L') face='S';
                else if(face=='S') face='O';
                else if(face=='O') face='N';
            }
            else if(s[i]=='E')
            {
                if(face=='L') face='N';
                else if(face=='S') face='L';
                else if(face=='O') face='S';
                else if(face=='N') face='O';
            }
            else
            {
                nx=stx, ny=sty;
                if(face=='N') nx=stx-1;
                else if(face=='L') ny=sty+1;
                else if(face=='S') nx=stx+1;
                else if(face=='O') ny=sty-1;
                //cout<<nx<<" "<<ny<<endl;
                if(nx>=0 && ny>=0 && nx<n && ny<m)
                {

                    if(ss[nx][ny]!='#')
                    {
                        if(ss[nx][ny]=='*')
                        {
                            cnt++;
                            ss[nx][ny]='.';
                        }
                        stx=nx, sty=ny;
                    }
                }
            }
        }
        cout<<cnt<<'\n';
    }
return 0;
}
