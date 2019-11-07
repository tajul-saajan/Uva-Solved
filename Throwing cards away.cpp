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
    int ara[100];
    deque<int> deqae;
    int num,k,sizae;

    //READ;

    while(sc(num)!=EOF&&num)
    {
        for(int i=1; i<=num; i++) deqae.push_back(i);

        sizae=0;
        for(int i=1; i<num; i++)
        {
            k=deqae.front();
            deqae.pop_front();
            ara[sizae++]=k;
            k=deqae.front();
            deqae.pop_front();
            deqae.push_back(k);
        }
        printf("Discarded cards:");
        for(int i=0; i<sizae; i++)
        {
            if(i!=sizae-1) printf(" %d,",ara[i]);
            else printf(" %d",ara[i]);
        }
        printf("\nRemaining card: %d\n",deqae.front());
        deqae.clear();
    }
    return 0;
}
