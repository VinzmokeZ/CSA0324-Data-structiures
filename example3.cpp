#include <stdio.h>
#include<conio.h>
int main()

{
    int  j, sum = 0;
    clrscr;

    printf("The first 10 natural number is :\n");
 
    for (j = 1; j <= 10; j++)
    {
        sum = sum + j;
        printf("%d ",j);    
    }
    printf("\nThe Sum is : %d\n", sum);
    getch()
}



