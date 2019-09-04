
#include<stdio.h>

int main()
{
	int num,i=0,s,k,digit;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Enter a digit for occurrance: ");
	scanf("%d",&digit);
	s=k=num;
	while(s!=0)
	{
	k=s%10;
	if(k==digit)
	i++;
	s=s/10;
	}

	printf("The occurrance is: %d\n",i);


	return 0;
}