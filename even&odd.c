#include <stdio.h>
int main()
{
    int num;
    int d=num/2;
    printf("type a number: ");
    scanf("%d",&num);
        if(num==(d*2)+0) {
        printf("the number is even");
    }
    else {
        printf("the number is odd");
    }
    return 0;
}
