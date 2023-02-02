#include<stdio.h>
int main ()
{
	int n,num,sum=0,i;
	float avg;
	printf("\n Enter the number of elements:");
	scanf("%d",&n) ;
	for (i=1;i<=n;i++)
	{
		printf("\nEnter the elements:");
		scanf("%d",&num) ;
		sum+=num;
	}
	avg=sum/n;
	printf("\nSum of %d numbers= %d",n,sum) ;
	printf("\nAverage of %d numbers= %0.2f",n,avg) ;
	return 0;
}