
#include<stdio.h>

int main()
{
	int marks;
	printf("Enter marks out of 100: ");
	scanf("%d",&marks);
	if(marks>=75)
	printf("Grade A\n");
	else if(marks>=55)
	printf("Grade B\n");
	else if(marks>=35)
	printf("Grade c\n");
	else
	printf("Fail\n");
}