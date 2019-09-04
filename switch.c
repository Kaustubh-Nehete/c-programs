
#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Press--> \n1.Square\n2.Cube\n3.Exit\n");
	scanf("%d",&b);
	switch(b)
	{
	case 1 : printf("Its square is: %d\n",a*a);
	break;
	case 2 : printf("Its cube is: %d\n",a*a*a);
	break;
	case 3 : printf("Exited!\n");
	break;
	default : printf("Invalid choice !!\n"); 
	}

}