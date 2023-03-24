#include<stdio.h>
int main()
{
	static  int x=10;
	printf("%d %d\n",++x,x++);
}
