//function pointer
#include<stdio.h>
int sum(int a,int b);
int main()
{
	int s=0;
	int(*ptr)(int a,int b)=sum;
	s=(ptr)(5,5);
	//	sum(s);
	printf("%d\n",s);
}
int sum(int a,int b)
{
	return a+b;
}
