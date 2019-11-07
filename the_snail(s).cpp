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
    double height,initail,sleep,fatig;
    bool success;

    while(cin>>height>>initail>>sleep>>fatig)
    {
        if(height==0) break;
        double climb=initail,go=0;
        int day=0;
        fatig=(initail*fatig/100);
        for(;;)
        {

            if(climb!=initail) day++;
            go+=climb;
            if (go>height)
            {
                success=true;
                break;
            }
            go-=sleep;
            if (go<0)
            {
                success=false;
                break;
            }
            climb-=fatig;
            if(climb<0) climb=0;
        }
        if(success==true) printf("success on day %d\n",day+1);
        else printf("failure on day %d\n",day+1);
    }
    return 0;
}
