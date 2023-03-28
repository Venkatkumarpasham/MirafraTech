#include<stdio.h>
void sstrcatt (char d[], char s[]);
int main()
{
	char s[]="kernel";
	char d[]="mast";

	sstrcatt(d,s);
	printf("%s",d);
}

void sstrcatt (char d[], char s[])
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	{
		for(j=0;s[j]!=0;i++,j++)
		{
			d[i]=s[j];
		}
	}
}


