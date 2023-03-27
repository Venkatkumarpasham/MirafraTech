#include<stdio.h>
//int main()
int *func();
int main()
{
	int *ptr;
	ptr=func(); 
}

int *func()
{
	int x=5;
	int *p=&x;
	return p;
}
