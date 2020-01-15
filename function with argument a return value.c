#include<stdio.h>
main()
{
    int sum(int,int);
    int a,b,c;
    printf("Enter 2 no \n");
    scanf("%d%d", &a&b);
    c = sum(a,b);
    printf("%d", c);
}
int sum(int a, int b)
{
    int c;
    c = a+b;
    return c;
}
