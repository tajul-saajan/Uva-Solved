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


struct compareInt
{
    //public:
    bool operator()(int &x1,int &x2)
    {
        if(x1==x2) return true;
         return (x1>x2);
    }
};

int main()
{
    int num;
    //READ;
    while(sc(num)==1&&num!=0)
    {
        priority_queue<int, vector<int> ,compareInt> ara;
        loop(i,num)
        {
            int x;
            sc(x);
            ara.push(x);
        }
        int res=0,sum=0;
        while(ara.size()>1)
        {
            sum+=ara.top();
            ara.pop();
            sum+=ara.top();
            ara.pop();
            res+=sum;
            ara.push(sum);
            sum=0;
        }
        printf("%d\n",res);

    }

    return 0;
}
