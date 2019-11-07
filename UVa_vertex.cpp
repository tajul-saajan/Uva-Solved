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



int n;
vector< vector<int> > L;
bool visited[100];

void unreachable(int v)
{
    fill(visited,visited+n,false);

    queue<int> Q;
    Q.push(v);

    int aux;

    while(!Q.empty())
    {
        aux=Q.front();
        Q.pop();
        int z=L[aux].size();
        for(int i=0; i<z; i++)
        {
            if(visited[L[aux][i]]) continue;
            visited[L[aux][i]]=true;
            Q.push(L[aux][i]);
        }
    }

    int cont=0;

    for(int i=0; i<n; i++) if(!visited[i]) cont++;

    printf("%d",cont);

    for(int i=0; i<n; i++) if(!visited[i]) printf(" %d",i+1);
    printf("\n");
}

int main()
{
    int a,b,m;

    //READ;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;

        L.clear();
        L.resize(n);

        while(1)
        {
            scanf("%d",&a);
            if(a==0) break;

            while(1)
            {
                scanf("%d",&b);
                if(b==0) break;

                L[a-1].push_back(b-1);
            }
        }

        scanf("%d",&m);

        for(int i=0; i<m; i++)
        {
            scanf("%d",&a);
            unreachable(a-1);
        }
    }

    return 0;
}
