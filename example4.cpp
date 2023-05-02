#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float mark, sum=0, avg;
    printf("Enter Marks obtained in 5 Subjects: ");
    for(i=0; i<5; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/5;
    printf("\nGrade = ");
    if(avg>=91 && avg<=100)
        printf("S");
    else if(avg>=81 && avg<91)
        printf("A");
    else if(avg>=71 && avg<81)
        printf("B");
    else if(avg>=61 && avg<71)
        printf("C");
    else if(avg>=51 && avg<61)
        printf("D");
    else if(avg>=41 && avg<51)
        printf("E");
    else if(avg>=33 && avg<41)
        printf("F");
    else if(avg>=21 && avg<33)
        printf("G");
    else if(avg>=0 && avg<21)
        printf("H");
    else
        printf("Invalid!");
    getch();
    return 0;
}
