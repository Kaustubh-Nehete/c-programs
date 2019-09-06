
#include<stdio.h>

int main()
{
int num,i;
printf("Enter a number for factorial: ");
scanf(" %d",&num);
for(i=1;i<num;i++)
{
num=num*(num-i);
}
printf("The factorial is: %d", num);

}