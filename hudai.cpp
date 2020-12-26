#include<bits/stdc++.h>

int main()
{
    int num;
    scanf("%d",&num);
    char ara[110];
    int i,j;
    for(i=num,j=0;i;i=i/2)
    {
        ara[j++]=(i%2)+'0';
    }
    for(i=j-1;i>=0;i--) printf("%c",ara[i]);
    printf("\n");
}
