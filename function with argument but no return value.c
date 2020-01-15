#include<stdio.h>
main()
{
    void sum(int, int);
    int a,b;
    printf("Enter 2 no:\n ");
    scanf("%d%d", &a&b);
    sum(a,b);
}
void sum(int a, int b)
{
    int c;
    c = a+b;
    printf("Sum =%d", c);

}
