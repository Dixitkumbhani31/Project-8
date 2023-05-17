#include<stdio.h>

swap(int *n1,int *n2)
{
	int *t;
	t=*n1;
	*n1=*n2;
	*n2=t;
	
	printf("A=>%d\nB=>%d",*n1,*n2);
}

main()
{
	int a=10;
	int b=50;
	
	swap(&a,&b);
}
