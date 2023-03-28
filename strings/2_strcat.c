//strcat

#include<stdio.h>
#include<string.h>
void mystrcat(char s[],char d[]);
int main()
{
	char s[50]="kernel";
	char d[50]="master";
	strcat(d,s);
	printf("%s\n",d);
}

void mystrcat(char s[],char d[])
{
	int i,j;
	for(i=0;s[i]!=0;i++)
	{
		for(j=0;s[j]!=0;i++,j++)
		{
			s[i]=d[j];
		}
}}

