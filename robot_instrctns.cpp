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
    int T, N, move[101], posInMove, position, check;

    char s[100];

    scanf("%d", &T);

    while (T--)
    {
        posInMove = position = 0;

        scanf("%d", &N);

        while (N--)
        {
            scanf("%s", s);

            if (s[0] == 'L')
            {
                position += move[posInMove] = -1;
            }
            else if (s[0] == 'R')
            {
                position += move[posInMove] = 1;
            }
            else
            {
                scanf("%*s %d", &check);

                position += move[posInMove] = move[check - 1];
            }

            ++posInMove;
        }

        printf("%d\n", position);
    }
}
