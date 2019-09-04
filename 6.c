#include<stdio.h>

int main(){
	int prin,noy,rate,si;
	printf("Enter principle amount: ");
	scanf("%d",&prin);
	printf("Enter rate of interest: ");
	scanf("%d",&rate);
	printf("Enter number of years: ");
	scanf("%d",&noy);
	si = prin*noy*rate / 100;
	printf("The simple interest is: %d\n",si);
}