
#include<stdio.h>

int calculatesum(int x, int y, int z);
int main(){
int a,b,c,sum;
a=10; b=20; c=30;
sum = calculatesum(a,b,c);
printf("The sum is %d", sum);	
}

int calculatesum(int x, int y, int z)
{
	int d;
	d = x+y+z;
	return(d);
}