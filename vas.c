#include <stdio.h>
int main()
{
    int ara[]={1,4,6,8,9,14,15,20,25,33,83,87,97,99,100};
    int low_index=0,high_index=15,mid_index,num=97;
    while (low_index<=high_index) {
        mid_index=(high_index+low_index)/2;
        if (num==ara[mid_index]) {
            break;
        }
        if (num<ara[mid_index]) {
            high_index=mid_index-1;
        }
        else{
            low_index=mid_index+1;
        }
    }
    if (low_index>high_index) {
        printf("%d is found in the array.It is the %d th element of the array.\n",ara[mid_index],mid_index);
    }
    return 0;
}
