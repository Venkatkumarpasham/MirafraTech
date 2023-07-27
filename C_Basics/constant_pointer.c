#include<stdio.h>
int main()
{
 const	int x=5;
	int y=10;
	const int*ptr=&x;
	ptr=&y;
	printf("%p\n%p\n",&x,&y);
	ptr=x;
	ptr=y;
	printf("%d\n",*ptr);
}
