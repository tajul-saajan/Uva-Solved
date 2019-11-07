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
#define LL long long

#define S(a) scanf("%d",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define KS printf("Case %d: ",kk++)

#define MOD 1000000007
#define MX 100010


int main()
{
    string a,b;

    while(getline (cin,a))
    {
        getline (cin,b);
        int tamA=a.size();
        int tamB=b.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b)
        {
            cout << a << endl;
            continue;
        }
        string k="";
        for(int i=0, j=0; i<tamA && j<tamB;)
        {
            if(a[i]==b[j])
            {
                k+= a[i];
                i++;
                j++;
            }
            else
            {
                while (a[i] < b[j])
                {
                    ++i;
                    if (i == tamA) break;
                }
                while (b[j] < a[i])
                {
                    ++j;
                    if (j == tamB) break;
                }
            }
        }
        cout<<k<<endl;
    }

    return 0;
}

