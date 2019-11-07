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


int main()
{
    int num,t=1;

    while(sc(num)==1&&num)
    {
        int res=0;
        for(int i=num;i>=1;i--)
        {
            int s=0;
            for(int z=1;z<=i/2;z++)
            {
                if(i%z==0)
                {
                    s+=z;
//                    if(z!=s/z) s+=(s/z);
                }
            }
            s+=i;
            if(num==s)
            {
                res=i;
                break;
            }
        }
        if(res!=0) printf("Case %d: %d\n",t++,res);
        else printf("Case %d: -1\n",t++);
    }
}
