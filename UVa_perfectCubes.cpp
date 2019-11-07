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
   int a,b,c,d,n;
   for(n=6;n<=200;n++)
   {
       a = n*n*n;
        for(int i=2;i<n;i++)
       {
           b = i*i*i;
           for(int j=i;j<n;j++)
           {
               c = j*j*j;
               for(int k=j;k<n;k++)
               {
                   d = k*k*k;
                   if(a==(b+c+d))
                   {
                   printf("Cube = %d, Triple = (%d,%d,%d)\n",n,i,j,k);
                   }

               }
           }
       }
   }
    return 0;
}
