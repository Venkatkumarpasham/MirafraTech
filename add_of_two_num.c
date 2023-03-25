#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter two numbers\n");
	scanf("%d%d %c",&a,&b,&c);
	if(c=='+')
	{
		printf("%d",a+b);
	}
	if(c=='-')
	{
		printf("%d",a-b);
	}
	if(c=='*')
	{
		printf("%d",a*b);
	}
	if(c=='/')
	{
		printf("%d",a/b);
	}

}
