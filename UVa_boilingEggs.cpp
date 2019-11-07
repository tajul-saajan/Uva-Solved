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
    int c,n,p,q,b,i,j,a[30],sum;
    while(scanf("%d",&c)==1)
    {
        for(j=1; j<=c; j++)
        {
            b=0;
            sum=0;
            scanf("%d%d%d",&n,&p,&q);
            for(i=0; i<n; i++)
            {
                scanf("%d",&a[i]);
            }
            if(p>n)
            {
                p=n;
            }
            for(i=0; i<p; i++)
            {
                sum=sum+a[i];
            }
            for(i=sum; i>q; i=i-a[p-b])
            {
                b=b+1;
            }
            printf("Case %d: %d\n",j,p-b);
        }
    }
    return 0;
}
