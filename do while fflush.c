
#include<stdio.h>

int main()
{
	char another;
	int num;
	do
	{
		printf("Enter a number for squaring\n");
		scanf("%d",&num);
		printf("Square of the number is: %d\n", num*num);
		printf("Want to enter another number? y/n\n");
		fflush(stdin);
		scanf("%c",&another);
	}while(another == 'y');

return 0;
}
