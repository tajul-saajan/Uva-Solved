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


vector<vector<int> > g;
vector<bool> vis;
vector<int> rank;

bool bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s]=true;
    rank[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        int l=g[u].size();
        for(int i=0;i<l;i++)
        {
            int v=g[u][i];
            if(!vis[v])
            {
                vis[v]=true;
                rank[v]=1-rank[u];
                q.push(v);
            }
            else
            {
                if(rank[v]==rank[u]) return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    //READ;
    while(cin>>n and n)
    {
        for(int i=0;i<g.size();i++) g[i].clear();
        vis.clear();
        rank.clear();
        int e;
        cin>>e;
        g.resize(n);
        vis.resize(n,false);
        rank.resize(n,0);
        for(int i=0;i<e;i++)
        {
            int n1,n2;
            cin>>n1>>n2;
            g[n1].push_back(n2);
            g[n2].push_back(n1);
        }
        bool f=bfs(0);
        if(f) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
    }
}
