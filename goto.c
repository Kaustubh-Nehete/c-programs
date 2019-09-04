#include<stdio.h>

int main()
{
	int i,j,k;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			for(k=1;k<=3;k++){
			if(i==3 && j==3 && k==3)
			break;
			else
			printf("%d %d %d\n",i,j,k);
			}
		}
	}
	printf("Out of loops!\n");

	int m=0,n=-1,b=-2,o=1,p=2,a=7;
	printf("%d\n",~m);
	printf("%d\n",~n);
	printf("%d\n",~b);
	printf("%d\n",~o);
	printf("%d\n",~p);
	printf("%d\n",~a);
}