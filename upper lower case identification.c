
#include <stdio.h>
int main()
{
    int ch;
    printf("please enter a letter: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z') {
        printf("the number %c is lower case\n",ch);
    }
    if(ch>='A' && ch<='Z') {
        printf("the number %c is upper case\n",ch);
    }
    return 0;
}
