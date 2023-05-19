#include<stdio.h>

main() 
{
    char str[100],*ptr;
    int i;
    
    printf("Enter String=>");
    gets(str);
    ptr=str;
    while(*ptr!='\0') 
	{
        i++;
        ptr++;
    }
    printf("\nLength of String=>%d",i);
}
