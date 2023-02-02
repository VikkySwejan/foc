#include <stdio.h>
int main ()
{
	int FO=0,F1=1,Fib,i,n;
	printf("\nEnter a number:") ;
	scanf("%d", &n) ;
	printf("%d %d ",FO,F1);
	for(i=2;i<n;++i)
	{
	Fib=FO+F1;
	printf("%d ",Fib);
	FO=F1;
	}
	return 0;
}