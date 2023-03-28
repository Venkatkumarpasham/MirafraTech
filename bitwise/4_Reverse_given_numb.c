#include<stdio.h>
int main()
{
	int n,r,j,i=0;
	int arr[50];
	printf("enter a number to convert it into binary:\n");
	scanf("%d",&n);
	printf("\nReverse of Binary num:");
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		printf("%d",r);
		arr[i]=r;
		i++;
	}
	printf("\nNormal binary num:");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}

}
