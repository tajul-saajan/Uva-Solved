#include <stdio.h>
int main()
{
    int m,n,i;
    for(n=1;n<=20;n=n+1) {
        for(i=1,m=0;m<=20,i<=10;i=i+1,m=m){
           printf("%d x %d = %d\n",n,i,m=m+n);
        }
    }
    return 0;
}
