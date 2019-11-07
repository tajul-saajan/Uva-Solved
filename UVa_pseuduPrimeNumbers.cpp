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


int GCD( int a, int b)
{
    if ( b==0) return a;
    return GCD( b, a%b) ;
}
int main()
{
    int n;

    while(sc(n)==1)
    {
        int ara[n+1];
        CLR(ara);
        int g=0;
        int h=0;
        for(int i=2;i<=n;i++)
        {
            if(ara[i]==1) continue;
            for(int j=i;j<=n;j++)
            {
                if(ara[j]==1) continue;
                if(GCD(i,j)==1)
                {
                    ara[i]=1;
                    ara[j]=1;
                    for(int k=j;k<=n;k++)
                    {
                        if(ara[k]==1) continue;
                        if(GCD(j,k)==1)
                        {
                            ara[k]=1;
                            g++;
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0;i<=n;i++)
            if(ara[i]==0) h++;
        printf("%d %d\n",g,h);
    }
}

/*int main()
{
    int m,n;
    while(scc(m,n)==2)
    {
        printf("%d\n",GCD(m,n));
    }
}*/
