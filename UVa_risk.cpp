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


vector<vector<int> > grph(21);
int visited[21];
//vector<int  > parent;
int level[21];


void bfs(int src,int s)
{
    CLR(visited);
    CLR(level);
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
            if(!visited[v]&&v)
            {
                visited[v]=1;
                level[v]=level[u]+1;
                //parent[v]=u;
                queae.push(v);
            }
            if(v==s) return;
        }
    }
}

int main()
{
    int test=1;
    int num,i=1;

    //READ;
    while(sc(num)!=EOF)
    {
        for(int j=0; j<num; j++)
        {
            int x;
            sc(x);
            grph[i].push_back(x);
            grph[x].push_back(i);
        }
        if(i==19)
        {
            int x,y,cas;
            sc(cas);
            printf("Test Set #%d\n",test++);
            for(int j=0; j<cas; j++)
            {
                scc(x,y);
                bfs(x,y);
                printf("%2d to %2d: %d\n",x,y,level[y]);
            }
            for(int j=0; j<21; j++) grph[j].clear();

            printf("\n");
            i=0;

        }
        i++;
    }
    return 0;
}
