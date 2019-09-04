#include<stdio.h>

void main()
{

struct node
{
int a;
char v[10];
};

struct node student;

printf("Enter number for student: ");

scanf("%d",&student.a);

printf("Enter char for student: ");

scanf("%s", student.v);

printf("The number is %d.\n",student.a);
printf("The char is %s.\n",student.v);

}
