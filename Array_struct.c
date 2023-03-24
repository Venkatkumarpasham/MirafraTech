#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
	int i;
	struct student arr[10];
	for(i=0;i<10;i++)
	{
		printf("Enter name roll no and marks\n");
		scanf("%s\n%d\n%f\n",arr[i].name,&arr[i].rollno,&arr[i].marks);
	}
}
