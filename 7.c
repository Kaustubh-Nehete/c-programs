
#include<stdio.h>

int main()
{
int a,b,c,d; 
printf("Enter the length of four sides: ");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("Length of sides: %d,%d,%d,%d\n",a,b,c,d);

if(a>(b+c+d) || b>(a+c+d) || c>(a+b+d) || d>(a+b+c))
printf("Polygon status: 0\n");
else
printf("Polygon status: 1\n");

if(a == b && a == c && a== d)
printf("Square status: 1\n");
else
printf("Square status: 0\n");
	
}