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
#define ll long long

#define sc(a) scanf("%d",&a)
#define scc(a,b) scanf("%d%d",&a,&b)
#define KS printf("Case %d: ",kk++)
#define pf() printf()

#define MOD 1000000007
#define MX 100010

int main()
{
    char ques[100],sign;
    int a,b,res,r,c,ca=0;
 //   freopen("in.txt","r",stdin);
    while(gets(ques))
    {
        if(sscanf(ques,"%d%c%d=%d",&a,&sign,&b,&res)!=4)
            continue;
        switch(sign)
        {
        case '+':
            r=a+b;
            break;
        case '-':
            r=a-b;
            break;
        }
        if(r==res)ca++;
    }
    printf("%d\n",ca);
    return 0;
}
