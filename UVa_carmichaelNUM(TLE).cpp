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


bool moda(int a,int n)
{
    int rem=1;
    for(int i=0; i<=n; i++)
    {
        rem=((rem%n)*a%n)%n;
    }
    if(rem==a) return true;
    else return false;
}

bool prm(int num)
{
    if(num==2) return true;
    if(num%2==0||num==1) return false;
    int sq=sqrt(num);
    for(int i=3; i<=sq; i++)
    {
        if(num%i==0) return false;
    }
    return true;

}

int main()
{
    int num;
    bool c;
    while(sc(num)==1&&num)
    {
        c=false;


        else if(prm(num))
        {
            c=false;
        }

        else
        {
            for(int i=2; i<num; i++)
            {
                if(moda(i,num))
                {
                    c=true;
                    break;
                }

            }
        }
        if(c) printf("The number %d is a Carmichael number.\n",num);
        else printf("%d is normal.\n",num);
    }
    return 0;
}
