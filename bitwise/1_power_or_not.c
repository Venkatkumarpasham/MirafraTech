// WAP Power of two or not 

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the address");
	scanf("%d",&n);
	if( (n&(n-1)) ==0)

		printf("%d is power of 2\n",n);
	else
		printf("%d is not power of 2\n",n);
	return 0;
}
