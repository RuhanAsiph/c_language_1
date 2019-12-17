#include<stdio.h>
/*Horner’s method to evaluate the given polynomial f(x) = a4x4 + a3x3 + a2x2 + a1x + a0 for a given value of x*/
main()
{
    float x, a[10], sum;
    int deg,i;

    printf("Enter the degree of the polynomial\n");
    scanf("%d", &deg);
    printf("Enter the value of x\n");
    scanf("%f", &x);
    printf("Enter %d coefficients\n", deg+1);
    for(i = deg;i>=0;i--)   scanf("%f", &a[i]);

    sum=a[deg];
    for(i = deg-1;i>=0;i--) sum=sum*x +a[i];

    printf("The value of the polynomial f(%.2f)=%f\n", x,sum);

}
