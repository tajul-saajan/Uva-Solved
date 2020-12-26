#include <iostream>
#include<cstdio>

using namespace std;

#define maxi 100000
#define mini -1000

int ara[maxi];
int tree[maxi*3];

void createSegmentTree(int low,int high,int node)
{
    if(low==high)
    {
        tree[node]=ara[low];
        return;
    }
    int mid=(high+low)/2;
    int lefft=2*node+1;
    int righht=2*node+2;
    createSegmentTree(low,mid,lefft);
    createSegmentTree(mid+1,high,righht);

    tree[node]=tree[lefft]+tree[righht];
}

int query(int low,int high,int qlow,int qhigh,int node)
{
    if(qlow>high||qhigh<low) return 0;///no overlap
    else if(low>=qlow&&high<=qhigh) return tree[node];///total overlap

    int lefft=2*node+1;
    int righht=2*node+2;
    int mid=(low+high)/2;
    int sumLefft=query(low,mid,qlow,qhigh,lefft);
    int sumRight=query(mid+1,high,qlow,qhigh,righht);
    return sumLefft+sumRight;
}

int getval;
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i)
    {
        getval=tree[node];
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2+1;
    int Right = node * 2 + 2;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

void updatePlus(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i)
    {
        tree[node] += newvalue;
        return;
    }
    int Left = node * 2+1;
    int Right = node * 2 + 2;
    int mid = (b + e) / 2;
    updatePlus(Left, b, mid, i, newvalue);
    updatePlus(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt","r",stdin);

    int num,test,kk=1,q;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&num,&q);
        for(int i=0; i<num; i++) scanf("%d",&ara[i]);
        createSegmentTree(0,num-1,0);
        printf("Case %d:\n",kk++);
        for(int u=0; u<q; u++)
        {
            int pp;
            scanf("%d",&pp);
            if(pp==1)
            {
                int v;
                scanf("%d",&v);
                update(0,0,num-1,v,0);
                printf("%d\n",getval);

            }
            else if(pp==2)
            {
                int i,v;
                scanf("%d%d",&i,&v);
                updatePlus(0,0,num-1,i,v);
            }
            else if(pp==3)
            {
                int i,j;
                scanf("%d%d",&i,&j);
                int sum=query(0,num-1,i,j,0);
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
