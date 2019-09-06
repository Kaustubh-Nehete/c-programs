
#include<stdio.h>

int main()
{
int num,i,j=0,k=0,l=0;
printf("Enter 10 numbers: ");
for(i=1;i<=10;i++)
{
scanf("%d",&num);
if(num<0)
j++;
else if(num>0)
k++;
else if(num==0)
l++;
}
printf("Positive numbers: %d/n", k);
printf("Negative numbers: %d/n", j);
printf("Zeros: %d/n", l);
}