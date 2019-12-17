#include<stdio.h>
/*C program to read a year as an input and find whether it is leap year or not*/
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d", &year);
    if((year%4 == 0 && year%100!=0)||year%400 ==0)
    {
        printf("%d is a leap year", year);

    }
    else
    {
        printf("%d is not a leap year", year);
    }
}
