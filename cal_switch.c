#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter two numbers\n");
	scanf("%d%d %c",&a,&b,&c);
	switch(c)
	{
		case('+'):
			{
				printf("%d",a+b);
				break;
			}
		case('-'):
			{
				printf("%d",a-b);
				break;
			}
		case('*'):
			{
				printf("%d",a*b);
				break;
			}
		case('/'):
			{
				printf("%d",a/b);
				break;
			}

	}
}
