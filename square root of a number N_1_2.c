#include<stdio.h>
/*Design and develop a flowchart to find the square root of a given number
N. Implement a C program for the same and execute for all possible
inputs with appropriate messages. Note: Don’t use library function
sqrt(n).*/
int main()
{
    float i,n;
    printf("\nEnter a number");
    scanf("%f", &n);
    for(i=0.01;i*i<n;i=i+0.01);

        printf("\n%.2f",i);
}
