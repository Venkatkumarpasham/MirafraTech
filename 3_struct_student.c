#include<stdio.h>
struct student
{
	int x;
	char name;
	float marks;
};
int main()
{

	struct student b;
	b.x=5;
	b.name='R';
	b.marks=213;
printf("%d\n%c\n%f\n",b.x,b.name,b.marks);
}
