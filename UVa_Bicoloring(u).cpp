#include<bits/stdc++.h>


using namespace std;

#define SET(a) memset(a,0,sizeof(a))
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

#define MOD 1000000007
#define MX 100010





int main()
{
    int test,n,e;

    //READ;

    while(sc(n)==1)
    {
        if(n==0) break;
        sc(e);
        int ara[n][n];
        SET(ara);
        for(int i=1; i<=e; i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            ara[x][y]=1;
            ara[y][x]=1;
        }

        bool bicolor=true;

        for(int i=0; i<=e; i++)
        {
            for(int j=0; j<=e; j++)
            {
                if(ara[i][j]==1)
                {
                    for(int k=0; k<=e; k++)
                    {
                        if(j==k) continue;
                        if(ara[i][k]==1&&ara[k][j]==1)
                        {
                            bicolor=false;
                            break;
                        }
                    }
                }
                if(!bicolor) break;
            }
            if(!bicolor) break;
        }
        if(bicolor) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");

    }
    return 0;
}
