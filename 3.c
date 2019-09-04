
#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num%3==0 && num%7==0)
	printf("Three-Seven\n");
	else if(num%7==0)
	printf("Seven\n");
	else if(num%3==0)
	printf("Three\n");
}