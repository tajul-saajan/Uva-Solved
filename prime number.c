#include <stdio.h>
int main()
{
    int num,r,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=0;i<num/2;i++) {
        if((num%i)==0) {
        printf("%d is not a prime number\n",num);
        }
        else {
        printf("%d is a prime number\n");
        }
    }
    return 0;

}
