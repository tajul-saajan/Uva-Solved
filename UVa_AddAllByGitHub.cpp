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



int main()
{
    int n;
    //READ;
    while (scanf("%d", &n), n)
    {
        priority_queue<int, vector<int>, greater<int> > q;

        while (n--)
        {
            int x;
            scanf("%d", &x);
            q.push(x);
        }

        int total = 0, cost = 0;
        while (q.size() > 1)
        {
            total = q.top();
            q.pop();
            total += q.top();
            q.pop();
            cost += total;
            q.push(total);
        }

        printf("%d\n", cost);
    }

    return 0;
}
