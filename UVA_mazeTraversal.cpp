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


int main()
{
    int t,n,m,in_i,in_j,ct;
    char input[65][65],ch,direc,op[100000];
    int mat[65][65];
    bool flag=false;

    map <char,char> right,left;
    left['N']='W';
    left['W']='S';
    left['S']='E';
    left['E']='N';
    right['N']='E';
    right['E']='S';
    right['S']='W';
    right['W']='N';

    map <char,int> x,y;
    x['N']=0 ;
    x['S']=0 ;
    x['E']=1 ;
    x['W']=-1;
    y['N']=-1 ;
    y['S']=1 ;
    y['E']=0 ;
    y['W']=0;

    //READ;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d\n",&n,&m);
        //memset(mat,0,sizeof mat);
        CLR(mat);

        for(int i=0; i<n; i++)  gets(input[i]);

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if (input[i][j] == ' ') mat[i+1][j+1] = 0;
                else if (input[i][j] == '*') mat[i+1][j+1] = 1;

        cin>>in_i>>in_j;

        direc='N';
        ct=0;

        while((ch=getchar())!=EOF)
        {
            if(ch=='Q')
            {
                op[ct++]='\0';
                break;
            }
            else if(ch=='R')
            {
                op[ct++]='R';
                continue;
            }
            else if(ch=='L')
            {
                op[ct++]='L';
                continue;
            }
            else if(ch=='F')
            {
                op[ct++]='F';
            }
            else continue;
        }

        for(int i=0; i<strlen(op); i++)
        {
            if(op[i]=='R')
            {
                direc=right[direc];
                continue;
            }
            else if(op[i]=='L')
            {
                direc=left[direc];
                continue;
            }
            else if(op[i]!='F') continue;

            if(mat[in_i+y[direc]][in_j+x[direc]]==1) continue;

            in_i+=(y[direc]);
            in_j+=(x[direc]);
        }
        if(flag) printf("\n");
        flag=true;
        printf("%d %d %c\n",in_i,in_j,direc);
    }
    return 0;
}


