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

#define LEFT 1
#define RIGHT 2

int main(void)
{
    //READ;
    int cases;
    int L, M;
    int len;
    string side;
    queue<int> left, right;

    cin >> cases;

    while (cases--)
    {
        cin >> L >> M;

        L *= 100;

        while (!left.empty())
            left.pop();
        while (!right.empty())
            right.pop();


        while (M--)
        {
            cin >> len >> side;

            if (side == "left")
            {
                left.push(len);
            }
            else if (side == "right")
            {
                right.push(len);
            }
        }

        int state = LEFT;
        int result = 0;
        len = 0;

        while (!left.empty() || !right.empty())
        {
            result++;
            if (state == LEFT)
            {
                len = 0;
                while (!left.empty())
                {
                    if (len + left.front() > L)
                    {
                        break;
                    }
                    len += left.front();
                    left.pop();
                }
                state = RIGHT;
            }
            else
            {
                len = 0;
                while (!right.empty())
                {
                    if (len + right.front() > L)
                    {
                        break;
                    }
                    len += right.front();
                    right.pop();
                }
                state = LEFT;
            }
        }

        cout << result << endl;
    }

    return 0;
};

