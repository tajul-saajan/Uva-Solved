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
    char str[105];
    int res,test;

    scanf("%d",&test);
    getchar();

    for(int i=0;i<test;i++)
    {
        scanf("%[^\n]",str);
        getchar();
        res=0;

        for(int j=0;str[j];j++)
        {
            if(str[j]>='a'&&str[j]<='r')
            {
                if((str[j]-'a'+1)%3==0) res+=3;
                else res+=(str[j]-'a'+1)%3;
            }
            else if(str[j]=='s'||str[j]=='z') res+=4;
            else if(str[j]==' ') res++;
            else
            {
                if((str[j]-'t'+1)%3==0) res+=3;
                else res+=(str[j]-'t'+1)%3;
            }
        }
        printf("Case #%d: %d\n",i+1,res);
    }
    return 0;
}
