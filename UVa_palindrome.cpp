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
    int i;
    string s,b,d;
    char c[10000];
    memset(c,0,sizeof(c));
    c['A']='A';
    c['E']='3';
    c['H']='H';
    c['I']='I';
    c['J']='L';
    c['L']='J';
    c['M']='M';
    c['O']='O';
    c['S']='2';
    c['T']='T';
    c['U']='U';
    c['V']='V';
    c['W']='W';
    c['X']='X';
    c['Y']='Y';
    c['Z']='5';
    c['1']='1';
    c['2']='S';
    c['3']='E';
    c['5']='Z';
    c['8']='8';

    //READ;
    while(cin>>s)
    {
        b=d="";
        for(i=s.length()-1; i>=0; i--)
        {
            b+=s[i];
            //if(c[s[i]]!=0)
            d+=c[s[i]];
            //else d+=s[i];
        }
        //cout<<s<<" "<<b<<" "<<d<<endl;
        if(s!=b && s!=d) cout<<s<<" -- is not a palindrome."<<endl<<endl;
        else if(s==b && s!=d) cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        else if(s!=b && s==d) cout<<s<<" -- is a mirrored string."<<endl<<endl;
        else cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
    }
    return 0;
}
