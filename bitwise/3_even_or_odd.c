// WAP print even or odd

#include<stdio.h>
int main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	if(n&1==1)
		printf("odd number");
	else
		printf("Even number");
}
