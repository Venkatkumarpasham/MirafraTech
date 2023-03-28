//strncat

#include<stdio.h>
void sstrncatt (char d[],char s[],int n);
int main()
{
//	int n=3;
	char d[100]="kernel";
	char s[100]="masters";
int n=3;
	sstrncatt(d,s,n);
	//  printf("%s",d);
}

void sstrncatt(char d[],char s[],int n)
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	{
		for(j=0;j<n;j++,i++)
		{
			d[i]=s[j];
		}
		printf("%s",d);
	}
	//printf("%S",d);
}

