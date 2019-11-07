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
    vector<int> median;
    int num,res;

    while(cin>>num)
    {
        median.push_back(num);
        int siz=median.size(),take;
        sort(median.begin(),median.end());
        if(siz%2!=0)
        {
            take=(siz/2);
            cout<<median[take]<<endl;
        }
        else
        {
            take=siz/2;
            res=(median[take-1]+median[take])/2;
            cout<<res<<endl;
        }

    }
    median.clear();
    return 0;
}
