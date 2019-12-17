#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
    }s;
int main()
{
    printf("Enter information:\n");
    printf("Ente name:");
    scanf("%s",s.name);

    printf("Enter roll number:");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying information:");
    printf("Name:");
    puts(s.name);
    printf("Roll number: %d", s.roll);
    printf("Marks: %f", s.marks);

    return 0;

}
