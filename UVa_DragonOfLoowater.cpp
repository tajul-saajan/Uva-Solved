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

#define MOD 1000000007
#define MX 100010


int main()
{
    int n,m;
    //READ;

    while(true)
    {
        scanf("%d %d",&n,&m);
        if(n == 0) break;
        int head[m],knight[m];
        for(int i = 0; i < n; ++i) sc(head[i]);
        for(int i = 0; i < m; ++i) sc(knight[i]);

        int ans = 0;
        bool ok = true;

        sort(head,head+ n);
        sort(knight,knight+ m);

        for(int i = 0,j = 0; i < n && ok; ++i)
        {
            while(j < m && knight[j] < head[i]) ++j;

            if(j == m) ok = false;
            else ans += knight[j++];
        }

        if(!ok) puts("Loowater is doomed!");
        else printf("%d\n",ans);
    }

    return 0;
}
