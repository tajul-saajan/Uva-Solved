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




string str [15] ;
int countX[15] ;
int n ;

int main()
{
    //READ;
    int i , j , k , ans ,len ,maxi;
    while ( cin>>n )
    {
        if( n == 0 )
            break ;
        maxi = 0;
        getchar();

        for ( i = 0 ; i < n ; i++)
        {

            countX[i] = 0 ;
            getline ( cin , str[i]);
            //cout << str[i] <<" ";
            len = str[i].length();
            for ( j = 0 ; j < len ; j++)
                if ( str[i][j] == 'X' )
                    countX[i]++;
            if ( countX[i] > maxi)
                maxi =countX[i];
            //cout << countX[i] << endl;
        }
        ans = 0 ;
        for ( i = 0 ; i < n ; i++)
            ans += maxi - countX[i] ;
        printf("%d\n",ans);
    }
    return 0 ;
}

