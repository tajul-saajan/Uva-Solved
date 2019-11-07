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

int num[2000000], num2[2000000],test,lengtha,resalt[2000000];

int main()
{

    //READ;
    sc(test);

    for(int z=1;z<=test;z++)
    {
//        printf("\n");
        sc(lengtha);

        for(int i=0;i<lengtha;i++) scanf("%d%d",&num[i],&num2[i]);

        int sum=0,carry=0;
        for(int i=lengtha-1;i>=0;i--)
        {
            sum=num[i]+num2[i]+carry;
            carry=sum/10;
            sum=sum%10;
            resalt[i]=sum;
        }

        for(int i=0;i<lengtha;i++) printf("%d",resalt[i]);
        printf("\n");
        if(z!=test) printf("\n");


    }

    return 0;
}
