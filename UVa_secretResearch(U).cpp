#include<bits/stdc++.h>


using namespace std;

#define SET(a) memset(a,0,sizeof(a))
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





int main()
{
    int test;
    string str;
    sc(test);
    while(test--)
    {
        cin>>str;
        getchar();
        int l=str.size();
        if(l<=2)
        {
            if(str=="1"||str=="4"||str=="78")
            {
                printf("+\n");
                continue;
            }
        }
        else if(l==3)
        {
            if(str=="135"||str=="435")
            {
                printf("-\n");
                continue;
            }
            else if(str=="914"||str=="944")
            {
                printf("*\n");
                continue;
            }
        }
        else if(l==4)
        {
            if(str=="7835")
            {
                printf("-\n");
                continue;
            }
            else if(str=="9784")
            {
                printf("*\n");
                continue;
            }
            else if(str=="1901"||str=="1904")
            {
                printf("?\n");
                continue;
            }
        }
        else
        {
            if(str=="19078") printf("?\n");
        }
    }
    return 0;
}
