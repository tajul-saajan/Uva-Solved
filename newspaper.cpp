#include<bits/stdc++.h>


using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define PB push_back
#define PI acos(-1.0)
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
    long int kase,c,val,line,i,j,k,len,n[200];
    double price;
    char text[10000],x[200];
    while(scanf("%ld\n",&kase)==1)
    {
        for(k=1; k<=kase; k++)
        {
            price=0;
            scanf("%ld\n",&val);
            for(j=1; j<=val; j++)
            {
                scanf("%c%ld\n",&x[j],&n[j]);
            }
            scanf("%ld\n",&line);
            for(j=1; j<=line; j++)
            {
                gets(text);
                len=strlen(text);
                for(i=1; i<=val; i++)
                {
                    for(c=0; c<len; c++)
                    {
                        if(x[i]==text[c])price+=n[i];
                    }
                }
            }
            printf("%.2lf$\n",price/100);
        }
    }
    return 0;
}
