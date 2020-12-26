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

#define MOD 1000000007
#define MX 100010





int main()
{
    char s[200010],t[200010];

    printf("%d %d\n",'a','A');
    READ;
    while(cin>>s>>t)
    {
        int len=strlen(t);
        int ara[len],whoops=0,yay=0,j;
        SET(ara);
        int le=strlen(s);
        for(int i=0; i<le; i++)
        {
            int flag=0;
            for( j=0; j<len; j++)
            {
                if(s[i]==t[j]&&ara[j]!=1)
                {
                    ara[j]=1;
                    flag=1;
                    break;
                }
            }
            //if(j==len) break;

            if(abs(s[i]-t[i])==32&&flag==0) ara[i]=2;

        }

        for(int i=0; i<len; i++)
        {
            if(ara[i]==2) whoops+=1;
            else if(ara[i]==1) yay+=1;
        }
        //whoops=whoops-(len-le);
        cout<<yay<<" "<<whoops<<endl;
    }
    return 0;
}
