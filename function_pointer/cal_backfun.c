#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int display(int(*fptr)(int,int));
int main()
{
/*

	
	   int s=0;
	   int(*ptr)(int a,int b)=sum;
	   s=(ptr)(5,5);
	//	sum(s);
	printf("%d\n",s);
	}
*/
	 
display(sum);
display(sub);
display(mul);
display(div);
}


int display(int(*fptr)(int,int))
{
	(*fptr)(5,1);
}
int sum(int a,int b)
{
	printf("%d\n",a+b);
}
int sub(int a,int b)
{
	printf("%d\n",a-b);
}
int mul(int a,int b)
{
	printf("%d\n",a*b);
}
int div(int a,int b)
{
	printf("%d\n",a%b);
}
/*
int display(int(*fptr)(int,int))
{
	fptr(5,1);
}

int main()
{
display(sum);
display(sub);
}
*/
