#include<stdio.h>

int main()
{

int i,n,j,a[]={10,20,36,72,45,37};
int *x, *y, *ptr;
int *z;

x=&a[4];
y=(a + 4);

ptr=a;

printf("%p\n",x);
printf("%p\n",y);

if(x==y)
{
	printf("Same numbers %d %d.\n",*x,*y);
}
else
printf("Different numbers %d %d.\n",*x,*y);


printf("%d %d %d\n",*a,*(&a[0]),*(int *)(&a));

printf("%d\n", printf("%d",100));

printf("%d\n", -4[ptr]);

/*
printf("Enter numbers in array.\n");

for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}


printf("The numbers are:\n");

for(j=0;j<10;j++)
{
printf("%d\n",a[j]);
}

printf("Enter nth element to be fetched !!");
scanf("%d",&n);
printf("The %dth element is: %d ",n,a[n-1]);
*/


}
