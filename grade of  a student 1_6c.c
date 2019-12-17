#include<stdio.h>
/*Grade ofa student*/
int main()
{
    int num;
    printf("Enter your marks ");
    scanf("%d", &num);
    printf(" You entered %d Marks \n", num);
    if(num<0 || num>100) printf("invalid");
    else if (num<= 39) printf(" You have got F grade \n");
    else if (num <= 49) printf(" You have got E grade \n");
    else if (num <= 59) printf(" You have got D grade \n");
    else if (num <= 69) printf(" You have got C grade \n");
    else if (num <= 79) printf(" You have got B grade \n");
    else if (num <= 89) printf(" You have got A grade \n");
    else printf("outstanding");

return 0;
}
