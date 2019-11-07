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


//vector<vector<int> > grph(1000);
 map <int,vector<int> > grph;
//vector<int> grph[50];
//int visited[1000];
//vector<int  > parent;
map <int ,int> level,visited;
//int level[1000];


void bfs(int src)
{
    //CLR(visited);
    //CLR(level);
    visited.clear();
    level.clear();

    visited[src]=1;
    queue<int> queae;
    queae.push(src);
    level[src]=0;

    while(!queae.empty())
    {
        int u=queae.front();
        queae.pop();
        //

        int l=grph[u].size();

        for(int i=0; i<l; i++)
        {
            int v=grph[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                //parent[v]=u;
                queae.push(v);
            }
            //if(v==s) return;
        }
    }
}

int main()
{
    int nodes,test=1;

    //READ;

    while(sc(nodes)==1&&nodes!=0)
    {
        for(int i=0;i<nodes;i++)
        {
            int x,y;
            scc(x,y);
            grph[x].push_back(y);
            grph[y].push_back(x);
        }
        int m,n;
        while(true)
        {
            scc(m,n);
            if(m==0&&n==0) break;
            bfs(m);
            int res=0;
            map <int ,int>::iterator it;
            for(it=level.begin();it!=level.end();it++)
            {
                if((*it).second>n) res++;
            }
            res+=(grph.size()-visited.size());
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",test++,res,m,n);
        }
        grph.clear();

    }
    return 0;
}
