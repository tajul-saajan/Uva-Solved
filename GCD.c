#include <stdio.h>
int main ()
{
    int ft_marks,st_marks,final_marks;
    double total_marks;
    printf("ENTER FIRST TERM MARK: ");
    scanf("%d",&ft_marks);
    printf("ENTER THE SECOND TERM MARKS: ");
    scanf("%d",&st_marks);
    printf("ENTER THE FINAL MARK: ");
    scanf("%d",final_marks);
    total_marks=0.25*(ft_marks+st_marks)+0.5*final_marks;
    return 0;
}
