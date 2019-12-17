#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter an integer:");
    scanf("%d", &n);
    for(i = 0;i<=n;i++){sum+=i;}
    printf("Sum on Nnatural number is=%d", sum);
    return 0;
}
