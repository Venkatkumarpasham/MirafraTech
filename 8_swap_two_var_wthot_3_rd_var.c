//swap two variables without using 3rd variable

#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two values ");
	scanf("%d%d",&x,&y);
	x=x^y;
	y=y^x;
	x=x^y;
	printf("%d %d\n",x, y);
//	printf("%d\n",y);
}

