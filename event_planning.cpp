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
    int parti,hotel,week,budget,price;
    int seat;

    while(cin>>parti>>budget>>hotel>>week)
    {
        unsigned long long cost=50000000;
        for(int i=0;i<hotel;i++)
        {
            cin>>price;
            int count=0;
            for(int j=0;j<week;j++)
            {
                cin>>seat;
                if(seat>=parti) count++;
            }
            if(count)
            {
                int temp=parti*price;
                if(temp<cost) cost=temp;
            }
        }
        if(cost<=budget) cout<<cost<<endl;
        else cout<<"stay home\n";
    }
    return 0;
}
