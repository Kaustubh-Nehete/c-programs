
#include<stdio.h>

int main()
{
	int num,a,b=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(a=0;a<num;a+=2){
	b+=2;
	}
	if(b-num)
	printf("Odd\n");
	else
	printf("Even\n");
}