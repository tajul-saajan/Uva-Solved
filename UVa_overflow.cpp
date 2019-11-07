/**********************************
  Name      : Tajul Islam Saajan
  Contest   : Codeforces Div1 292
  Problem   : B
  Technique :
  Date      : 15.02.15
  Time      : 12:10 PM
***********************************/



#include<bits/stdc++.h>


using namespace std;

#define SET(a) memset(a,0,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define PB push_back
#define PIE acos(-1.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define ll long long
#define pii pair

#define sc(a) scanf("%d",&a)
#define scc(a,b) scanf("%d%d",&a,&b)
#define KS printf("Case %d: ",kk++)
#define pf() printf()

#define MOD 1000000007
#define MX 100010



int main()
{
    char s1[1000],s2[1000];
    long double a,b;
    char c;
    while(cin>>s1>>c>>s2)
    {

        a=atof(s1);
        b=atof(s2);

        cout<<s1<<" "<<c<<" "<<s2<<endl;
        //cout<<a+b<<endl<<a*b<<endl;

        if(a>2147483647)
            cout<<"first number too big"<<endl;
        if(b>2147483647)
            cout<<"second number too big"<<endl;
        if(c=='+' && (a+b)>2147483647)
            cout<<"result too big"<<endl;
        if(c=='*' && (a*b)>2147483647)
            cout<<"result too big"<<endl;
    }
    return 0;
}
