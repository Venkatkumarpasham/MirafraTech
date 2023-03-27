#include<stdio.h>
void copy(char s[],char d[]);
int main()
{
//	int c;
	char s[50]="venkat";
	char d[50]="kumar";
	copy(s,d);
}
void copy(char s[],char d[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		s[i]=d[i];
	}
		printf("%s\n",s);
}
