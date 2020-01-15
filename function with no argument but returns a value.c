#include<stdio.h>
{
    int sum();
    int c;
    c = sum();
    printf("sum=%d",c);

}
int sum()
{
    int a,b,c;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a&b);
    c = a +b;
    return c;
}
