#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define LL long long
#define MX 100000
#define MOD 1000000007


main()
{
    int k,x,y,i,cnt;
    while(cin>>k)
    {
        cnt=0;
        for(i=k+1;i<=2*k;i++)
            if((i*k)%(i-k)==0)
                cnt++;
        cout<<cnt<<endl;

        for(i=k+1;i<=2*k;i++)
            if((i*k)%(i-k)==0)
                cout<<"1/"<<k<<" = 1/"<<(i*k)/(i-k)<<" + 1/"<<i<<endl;

    }
}
