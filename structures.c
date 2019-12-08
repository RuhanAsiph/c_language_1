#include<stdio.h>
struct student
{
char name[50];
int roll;
float marks;
}s;

int main(){
printf("Enter information:\n");
printf("Enter name:\n");
scanf("%s", s.name);

printf("Enter roll number:\n");
scanf("%d", &s.roll);

printf("Enter marks:\n");
scanf("%f", &s.marks);

printf("Displaying information: \n");
printf("Name:\n");
puts(s.name);
printf("Roll number: %d\n", s.roll);
printf("Marks: %f\n", s.marks);
return 0;
}
