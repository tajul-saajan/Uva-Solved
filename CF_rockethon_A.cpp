/**********************************
  Name      : Tajul Islam Saajan
  Contest   : Codeforces Rockethon Contest
  Problem   : A
  Technique : Ad-hoc
  Date      :13.02.15
***********************************/



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


int getaWinner(int n1,int n2,int k1,int k2);

int main()
{
    int n1,n2,k1,k2;

    while(scanf("%d%d%d%d",&n1,&n2,&k1,&k2)!=EOF)
    {
        if(getaWinner(n1,n2,k1,k2)==1) printf("First\n");
        else printf("Second\n");
    }
    return 0;
}



int getaWinner(int n1,int n2,int k1,int k2)
{
    int i=max(n1,n2);
    while(1)
    {
        if(n1<0) return 2;
        else n1--;
        if(n2<0) return 1;
        else n2--;
    }
}
