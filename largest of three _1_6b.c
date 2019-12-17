#include<stdio.h>
/*Largest of Three Numbers 6b*/
int main()
{
int a,b,c;
printf("Enter age of three persons\n");
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c)
    printf("Eldest person is %d\n",a);
else if(b>=a&&b>=c)
    printf("Eldest person is %d",b);
else
    printf("Eldest person is %d",c);
return 0;




}
