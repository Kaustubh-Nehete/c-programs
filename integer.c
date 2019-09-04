
#include<stdio.h>

int main()
{
	int a,b,c,d=2,e,f;
	a = 2.5 * 6 + 1;
	b = 10/2*10/5;
	c=3^2;
	printf("%d\n",a);
	printf("%d\n", b);
	printf("%d\n",c);
	printf("%d\n",d++);
	printf("%d\n",e );

	for(f=0;f<10;f++)
	{
		printf("%d\n",f+1);
	}

	int m=0, n=-1;
	if(~m && ~n)
	{
		printf("%d\n",n);
	}
	else
	{
		printf("+%d\n",~m);
	}

}
