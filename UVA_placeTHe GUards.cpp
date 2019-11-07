#include<bits/stdc++.h>

using namespace std;


#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define pb push_back
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

vector<int> grph[205];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test,i,j,k,l;
    //READ;

    sc(test);
    while(test--)
    {
        int node,edge,guard=0;

        scc(node,edge);

        bool visited[node];

        CLR(visited);

        bool ok=true,mak=true;
        loop(i,edge)
        {
            int x,y;
            scc(x,y);
            grph[x].pb(y);
            grph[y].pb(x);
        }

        loop(i,node)
        {
            int sz=grph[i].size();
            if(visited[i]) continue;
            loop(j,sz)
            {

                if(visited[grph[i][j]])
                {
                    mak=false;
                    break;
                }
                //cout<<i<<' '<<grph[i][j]<<' ';
            }
            if(mak)
            {
                visited[i]=true;
                mak=true;
                loop(j,sz) visited[grph[i][j]]=true;
                guard++;
            }


        }


        loop(i,node)
        {
            if(!visited[i])
            {
                ok=false;
                break;
            }
        }
        if(ok) cout<<guard<<endl;
        else cout<<"-1\n";
        loop(i,node) grph[i].clear();
    }

    return 0;

}

