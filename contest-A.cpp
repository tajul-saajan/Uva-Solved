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
    string str1,str2;
    bool m;

    while(cin>>str1)
    {
        str2=str1;
        int len=str1.size();

        for(int i=0,j=len-1; i<len; i++,j--)
        {
            str2[i]=str1[j];
        }

        if(str1==str2) str2.insert(len/2,1,'y');
        else
        {

            for(int i=0; i<len; i++)
            {
                if(str1[i]!=str2[i])
                {
                    str2.insert(i,1,str1[i]);
                    break;
                }
            }
        }
        string s;
        len++;
        for(int i=0,j=len-1; i<=len/2; i++,j--)
        {
            if(str2[i]!=str2[j])
            {
                m=false;
                break;
            }
            m=true;
        }
        if(m)cout<<str2<<endl;
        else cout<<"NA\n";
        //cout<<str2<<endl<<str2[len];
        //else cout<<"NA\n";
        s.clear();
        str1.clear();
        str2.clear();
    }
    return 0;
}
