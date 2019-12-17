#include<stdio.h>
union student
{
    char name[32];
    int roll;
    int age;
    float marks;
}s;
int main(){printf("Size of union = %d", sizeof(s));
    return 0;
    }
