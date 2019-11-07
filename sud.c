#include <stdio.h>
int main ()
{
   int a,b,x;
   printf("ENTER A NUMBER: ");
   scanf("%lf",&a);
   printf("ENTER ANOTHER NUMBER: ");
   scanf("%lf",&b);
   for(b=x;a%x=0,b%x=0;x--) {
    printf("GCD =%d\n",x);
   }
   return 0;
}
