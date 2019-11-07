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


char checkWinner(int a,int b,int c);

int main()
{
    int a,b,c;
    //READ;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        printf("%c\n",checkWinner(a,b,c));
    }
    return 0;
}


char checkWinner(int a,int b,int c)
{
    if(a==b&&b==c&&c==a) return '*';
    if(a==1)
    {
        if(b==1&&c==0) return 'C';
        else if(c==1&&b==0) return 'B';
        else if(c==0&&b==0) return 'A';
    }
    else if(a==0)
    {
        if(b==0&&c==1) return 'C';
        else if(c==0&&b==1) return 'B';
        else if(c==1&&b==1) return 'A';
    }
}
