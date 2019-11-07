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


vector<int > grph[30];
int visited[30];

void DFS(int src)
{
    visited[src]=1;
    int l=grph[src].size();
    for(int i=0;i<l;i++)
    {
        int v=grph[src][i];
        if(!visited[v]) DFS(v);
    }
    return ;
}


int main()
{
    int test;
    //READ;
    cin>>test;
    scanf("\n");
    char str[3];

    while(test--)
    {
        gets(str);
        int cnt=0;
        CLR(visited);

        int l=str[0]-'A';

        for(int i=0;i<=l;i++) grph[i].clear();

        while(gets(str) && str[0])
        {
            int x=str[0]-'A';
            int y=str[1]-'A';
            grph[x].push_back(y);
            grph[y].push_back(x);
        }

        for(int i=0;i<=l;i++)
            if(!visited[i]) DFS(i),cnt++;

        printf("%d\n",cnt);
        if(test) printf("\n");
    }

    return 0;
}
