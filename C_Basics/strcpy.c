//strcpy
#include<stdio.h>
void mystrcpy(char d[],char s[]);
int main()
{
	char d[]={"kernel"};
	char s[]={"master"};
	mystrcpy(d,s);
	printf("%s",d);
}
void mystrcpy(char d[],char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		d[i]!=s[i];
	}
}
