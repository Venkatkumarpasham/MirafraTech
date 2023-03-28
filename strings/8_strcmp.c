#include<stdio.h>
int strcmpp (char s1[],char s2[]);
int main()
{
	int i,x;
	char s1[20]="kernel";
	char s2[20]="master";
	x=strcmpp(s1,s2);
if(x==-1)
printf("%s\n%s",s2,s1);
if(x==1)
printf("%s\n%s",s1,s2);
if(x==0)
printf("s1 nd s2 are equal");
}
int strcmpp (char s1[],char s2[])
{
	int i;
	for(i=0;s1[i]!=0,s2[i]!=0;i++)
	{
		if(s1[i]>s2[i])
		{
			return -1;
		}
		if(s1[i]<s2[i])
		{
			return 1;
		}
		if(s1[i]==0&&s2[i]==0)
		{
			return 0;
		}
		if(s1==0&&s2[i]!=0)
		{
			return 1;
		}
		if(s2==0&&s1[i]!=0)
		{
			return -1;
		}

	}
}

