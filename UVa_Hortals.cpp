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
    int test,day,party;

    //READ;
    sc(test);

    while(test--)
    {
        sc(day);
        sc(party);
        int hpara[party];
        for(int i=0;i<party;i++) sc(hpara[i]);
        int tday[day];
        SET(tday);

        for(int i=0;i<party;i++)
        {
            for(int j=hpara[i];j<=day;j+=hpara[i])
            {
                if(j%7==6||j%7==0) continue;
                tday[j-1]=1;
            }
        }
        int sum=0;
        for(int i=0;i<day;i++) sum+=tday[i];
        printf("%d\n",sum);
    }
    return 0;
}
