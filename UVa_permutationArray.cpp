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


#define N 1000


int pos[N];
char arr[N][N];


int main()
{
    int n;
    //READ;
    int i;
    int tmp;
    int cnt;
    bool state = true;
    scanf("%d\n", &n);

    while (n--)
    {
        if (!state)  printf("\n");
        state = false;

        cnt = 0;

        while (true)
        {
            scanf("%d", &tmp);
            pos[tmp-1] = cnt++;

            if (getchar() == '\n')
                break;
        }

        for ( i = 0; i < cnt; i++)
            scanf("%s", arr[i]);

        for ( i = 0; i < cnt; i++)
            printf("%s\n", arr[pos[i]]);


    }
    return 0;
}
