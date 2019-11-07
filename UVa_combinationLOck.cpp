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





using namespace std;


int main()
{
    int init,f,s,t;
    //READ;
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    while(cin>>init>>f>>s>>t)
    {
        if(!init&&!f&&!s&&!t) break;
        int sum=0;
        if(init>f) sum+=(init-f);
        else sum+=(40+init-f);
        init=f;
        if(init<s) sum+=(s-init);
        else sum+=(40-init+s);
        init=s;
        if(init>t) sum+=(init-t);
        else sum+=(40+init-t);

        sum=sum*9+360+720;

        printf("%d\n",sum);
    }
}
