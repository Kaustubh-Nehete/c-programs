
#include<stdio.h>

int main()
{
	int another = 1;
	int num;
	for(;another == 1;)
	{
		printf("Enter a number for squaring\n");
		scanf("%d",&num);
		printf("Square of the number is: %d\n", num*num);
		printf("Want to enter another number? 1/n\n");
		scanf("%d",&another);
	}

return 0;
}