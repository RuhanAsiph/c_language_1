#include<stdio.h>
/*Design and develop an algorithm to find the reverse of an integer
number NUM and check whether it is PALINDROME or NOT. Implement
a C program for the developed algorithm that takes an integer number
as input and output the reverse of the same with suitable messages. Ex:
Num: 2014, Reverse: 4102, Not a Palindrome.*/
int main()
{
    int n, reverse = 0, temp;

    printf("Enter the number to check:");
    scanf("%d",&n);

    temp = n;

    while(temp !=0)
    {
        reverse = reverse * 10;
        reverse = reverse + temp % 10;
        temp = temp/10;
    }
    if(n == reverse)
    {
        printf("The number is a palindrome: %d", n);
    }
    else
    {
        printf("The number given by you %d is not a palindromeas its reverse is %d", n,reverse);
    }



}
