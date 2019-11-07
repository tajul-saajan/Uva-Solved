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



string common;
string dir [100000 + 10];
int length;

char mapping (char c)
{
    if ( c == 'A' || c == 'B' || c == 'C' ) return '2';
    if ( c == 'D' || c == 'E' || c == 'F' ) return '3';
    if ( c == 'G' || c == 'H' || c == 'I' ) return '4';
    if ( c == 'J' || c == 'K' || c == 'L' ) return '5';
    if ( c == 'M' || c == 'N' || c == 'O' ) return '6';
    if ( c == 'P' || c == 'R' || c == 'S' ) return '7';
    if ( c == 'T' || c == 'U' || c == 'V' ) return '8';
    if ( c == 'W' || c == 'X' || c == 'Y' ) return '9';
    return ' ';
}

void formatIt (char *a)
{
    common.clear ();

    for ( int i = 0; a [i]; i++ )
    {
        if ( isdigit (a [i]) ) common += a [i];
        else if ( isalpha (a [i])) common += mapping (a [i]);
    }

    common.insert (3, "-");
}

int main ()
{
    int testCase;
    //READ;
    scanf ("%d", &testCase);
    bool blank = false;

    while ( testCase-- )
    {
        length = 0;
        int directory;
        scanf ("%d", &directory);
        getchar ();

        map <string, int> freq;

        while ( directory-- )
        {
            char number [1000];
            gets (number);
            formatIt (number);

            freq [common]++;

            if ( freq [common] == 2 ) dir [length++] = common;
        }

        sort (dir, dir + length);

        if ( blank ) cout << endl;
        blank = true;

        bool printed = false;

        for ( int i = 0; i < length; i++ )
        {
            cout << dir [i] << " " << freq [dir [i]] << endl;
            printed = true;
        }

        if ( !printed ) cout << "No duplicates." << endl;
    }

    return 0;
}
