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

#define loop(i,num) for(i=0;i<num;i++)

#define MOD 1000000007
#define MX 100010

#define MAX 25
#define InsMAX 25

string a [100 + 5];

int main ()
{
    int n;
    //READ;
    while ( scanf ("%d", &n) != EOF )
    {
        for ( int i = 0; i < n; i++ )
            cin >> a [i];

        sort (a, a + n);

        int maxLen = 0;

        for ( int i = 0; i < n; i++ )
        {
            int len = a [i].length ();
            if ( len > maxLen ) maxLen = len;
        }

        int totalColumn = 62 / (maxLen + 2);
        int justified = maxLen + 2;
        int row = ceil (n / (double)totalColumn);

        printf ("------------------------------------------------------------\n");

        for ( int i = 0; i < row; i++ )
        {
            for ( int j = i; j < n; j += row )
            {
                cout << a [j];
                if ( j + row < n )
                {
                    for ( int k = a [j].length (); k < justified; k++ )
                        printf (" ");
                }
            }
            printf ("\n");
        }
    }

    return 0;
}
