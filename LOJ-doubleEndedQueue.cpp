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






int main ()
{
    int test;
    READ;
    sc(test);
    string t;
    int z=1;
    while(test--)
    {
        char cmmnd[20];
        stack<string> str,frwd;
        str.push("http://www.lightoj.com/");
        printf("Case %d:\n",z++);
        while(true)
        {

            cin>>cmmnd;
            if(!strcmp(cmmnd,"VISIT"))
            {
                cin>>t;
                getchar();
                cout<<t<<endl;
                str.push(t);

                //t=i;
            }
            else if(!strcmp(cmmnd,"FORWARD"))
            {
                if(!frwd.empty())
                {
                    t=frwd.top();
                    str.push(t);
                    frwd.pop();
                    cout<<frwd.top()<<endl;
                }

                else printf("Ignored\n");

                //t=i;
            }
            else if(!strcmp(cmmnd,"BACK"))
            {
                if(!str.empty())
                {

                    t=str.top();
                    frwd.push(t);
                    str.pop();
                    cout<<str.top()<<endl;

                }
                else printf("Ignored\n");

                //t=i;
            }
            else if(!strcmp(cmmnd,"QUIT")) break;
        }
    }
    return 0;
}
