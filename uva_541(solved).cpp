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
    int num;
    while(scanf("%d",&num)==1&&num)
    {
        int ara[num][num],rowa,columna,takea=0;
        for(int i=0; i<num; i++)
        {
            for(int j=0; j<num; j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }
        int sum;
        for(int i=0; i<num; i++) //column
        {
            sum=0;
            for(int j=0; j<num; j++) //row
            {
                sum+=ara[i][j];
            }
            if(sum%2!=0)
            {
                takea++;
                if(takea<2) rowa=i+1;
                else takea=22;
            }
        }
        sum=0;
        if(takea!=22)
        {
            takea=0;
            for(int i=0; i<num; i++) //column
            {
                sum=0;
                for(int j=0; j<num; j++) //row
                {
                    sum+=ara[j][i];
                }
                if(sum%2!=0)
                {
                    takea++;
                    if(takea<2) columna=i+1;
                    else takea=22;
                }
            }
            if(takea==0) printf("OK\n");
            else if(takea==1) printf("Change bit (%d,%d)\n",rowa,columna);
        }
        if(takea==22) printf("Corrupt\n");
    }
    return 0;
}
