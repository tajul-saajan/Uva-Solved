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
    int s,kase=1;;
    int created[12],needed[12];
    //READ;


    while(sc(s)==1&&s>=0)
    {
        for(int i=0;i<12;i++) sc(created[i]);
        for(int i=0;i<12;i++) sc(needed[i]);

        int sum=s;

        printf("Case %d:\n",kase++);
        for(int i=0;i<12;i++)
        {
            if(sum>=needed[i])
            {
                printf("No problem! :D\n");
                sum-=needed[i];
                sum+=created[i];
            }
            else
            {
                printf("No problem. :(\n");
                sum+=created[i];
            }
        }
    }
    return 0;
}
