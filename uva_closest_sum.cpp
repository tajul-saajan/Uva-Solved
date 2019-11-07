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
#define LL long long

#define S(a) scanf("%d",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define KS printf("Case %d: ",kk++)

#define MOD 1000000007
#define MX 100010


int main()
{
    int num,ara[1005],test,query[1005],diff,tempi,res,cases=1;

    while(cin>>num)
    {
        if(num==0) break;
        for(int i=0; i<num; i++) cin>>ara[i];
        cin>>test;
        sort(ara,ara+num);
        for(int j=0; j<test; j++)cin>>query[j];

        printf("Case %d:\n",cases++);
        for(int j=0; j<test; j++)
        {

            diff=100000000;
            for(int i=0; i<num; i++)
            {
                for(int k=0; k<num; k++)
                {
                    if(i==k) continue;
                    tempi=ara[i]+ara[k];
                    if(abs(tempi-query[j])<diff)
                    {
                        diff=abs(tempi-query[j]);
                        res=tempi;
                    }
                }
            }
            printf("Closest sum to %d is %d.\n",query[j],res);
        }
    }
    return 0;
}
