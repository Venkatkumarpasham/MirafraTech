#include<stdio.h>
void strncpyy (char d[],char s[], int n);
int main()
{
int n=3;
	char d[50]="kernel";
	char s[50]="master";
	strncpyy(d,s,n);
//	printf("%s",d);
}
	void strncpyy (char d[],char s[], int n)
{
		int i;
	for(i=3;d[i]!=0;i++)
	{
		d[i]=s[i];

	}
  printf("%s",d);
}

