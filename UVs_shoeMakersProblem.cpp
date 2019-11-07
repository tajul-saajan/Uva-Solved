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

#define MOD 1000000007
#define MX 100010






struct job
{
    int S,T, pos;
};


bool compareJobs(job a, job b)
{
    double r1 = (double)a.S/a.T;
    double r2 = (double)b.S/b.T;
    if (r1 != r2) return r1 > r2;

    return a.pos < b.pos;
}


int main()
{

    int N;
    //READ;
    ios_base::sync_with_stdio(0);
    cin.tie(0);



    scanf("%d",&N);

    for (int i=0; i<N; i++)
    {
        int n;
        scanf("%d", &n);
        vector<job> jobs;

        for (int i=0; i<n; i++)
        {
            job j;
            scanf("%d %d", &j.T, &j.S);
            j.pos = i+1;
            jobs.push_back(j);
        }
        sort(jobs.begin(), jobs.end(), compareJobs);

        for (int i=0; i<n; i++)
        {
            cout << jobs[i].pos;

            if (i != n-1) cout << " ";
        }
        cout << endl;

        if (i != N-1) cout << endl;

    }
    return 0;
}
