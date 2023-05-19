#include<stdio.h>

main()

{
	int a[100]={50,31,22,12,8,6};
	int *p1;
	
	p1=&a;
	
	int i;
	for(i=0;i<=5;i++)
	{
		printf("%u=>%d\n",p1+i,*(p1+i));
	}
}
