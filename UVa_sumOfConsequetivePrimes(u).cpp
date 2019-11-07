#include<bits/stdc++.h>


using namespace std;


#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,1,sizeof(a))
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

bool prime[10005];

void sieve()
{

    CLR(prime);
    prime[0] =false;
    prime[1] =false;
    int m=sqrt(10000) ;
    for (int i=2; i<=m; i++)
    {
        if (prime[i])
            for (int k=i*i; k<=10000; k+=i) prime[k] =false;
    }
}

int main()
{
    int n;
    sieve();
    //READ;

    while(sc(n)==1&&n)
    {
        int cnt=0,sum=0;
        for(int i=n; i>=1; i--)
        {
            sum=0;
            if(prime[i]==true)
            {
                for(int j=i; j>=1; j--)
                {
                    if(prime[j]==true)
                    {
                        if(sum+j>n)break;

                        else if(sum+j==n)
                        {
                            cnt++;
                            break;
                        }
                        else sum+=j;
                    }
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}


