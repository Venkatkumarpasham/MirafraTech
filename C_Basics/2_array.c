#include<stdio.h>
int main()
{
	int i,n,min,max;
	printf("enter the array size\n");
	scanf("%d",&n);
	int arr[5];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
			min=arr[i];
		if(max<arr[i])
			max=arr[i];
	}
	printf("%d\n%d\n",min,max);

}

