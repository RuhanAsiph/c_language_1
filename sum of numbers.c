#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,sum=0;
    printf("Please enter an integer: \n");
    scanf("%d", &n);
    while(n>0){
        r=n%10;
        sum = sum +r;
        n=n/10;
    }
    printf("Sum of digits = %d", sum);
    getch();
    return 0;
}
