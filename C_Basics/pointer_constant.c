#include<stdio.h>
int main()
{
 	int x=5;
	int y=10;
	int *const ptr=&x;
//	int *
//	ptr=&y;
//	printf("%p\n%p\n",&x,&y);
//	ptr=x;
//	ptr=y;
	printf("%p\n",ptr);
	
	printf("%d\n",*ptr);
	*ptr=1000;
	printf("%d\n",*ptr);
//	ptr=&y;
	printf("%p\n",ptr);
}

