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

int ara[10000000];

bool cheakPrm(long long num);

int twinPrime(int num)
{
    int k=0;
    for(int i=3;i<=20000000;i++)
    {
        if(cheakPrm(i)==true)
        {
            if(ara[k]+2==ara[k+1]) return k;
        }
    }
}

bool cheakPrm(long long num)
{
    if(num%2==0) return false;

    else
    {
        int sqt=sqrt(num);
        for(int i=3;i<=sqt;i+=2)
        {
            if(num%i==0) return false;
        }
    }
    return true;
}


int main()
{
    int indaexa,resalt,k;

    //READ;

    twinPrime();

    while(scanf("%d",&indaexa)!=EOF)
    {
        resalt=0;
        for(k=0;;k++)
        {
            if(ara[k]+2==ara[k+1]) resalt++;
            if(resalt==indaexa) break;
        }
        printf("(%d, %d)\n",ara[k],ara[k+1]);
    }
    return 0;
}
