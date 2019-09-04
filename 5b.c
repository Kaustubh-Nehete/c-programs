
#include<stdio.h>

int main()
{
	int num,a;
	printf("Enter a number: ");
	scanf("%d",&num);
	a = num/2;
	a = a * 2;
	if(a == num)
	printf("Even\n");
	else
	printf("Odd\n");
}