
#include<stdio.h>

int main()
{
int num,i;
printf("Enter a number: ");
scanf(" %d",&num);
printf("The next 5 numbers are: ");
for(i=1;i<=5;i++)
printf("%d/n",num+i);

}