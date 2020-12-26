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
    char str[100000];
    bool take;

    while(cin>>str)
    {
        int len=strlen(str),temp,took=len-1,indaex,maximum=-22,i,tendex;
        char res;
        len=str[took]-'0';
        take=false;
        for( i=0; i<took; i++)
        {
            temp=str[i]-'0';
            if(temp%2==0)
            {
                take=true;
                if(temp>maximum && temp<len)
                {
                    indaex=i;
                    break;
                }
                else tendex=i;
            }

        }

        if(take==false) cout<<"-1\n";
        else if(take==true&&i==took)
        {
            res=str[tendex];
            str[tendex]=str[took];
            str[took]=res;
            cout<<str<<endl;
        }
        else
        {
            res=str[indaex];
            str[indaex]=str[took];
            str[took]=res;
            cout<<str<<endl;
        }
    }
    return 0;
}
