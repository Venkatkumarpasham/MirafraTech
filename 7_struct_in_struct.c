#include<stdio.h>
typedef struct student
{
	int roll;
	float marks;
	char name[10];
	struct student1
	{
		int roll2;
		float marks2;
		char name2[10];
	}S2;

}S1;

int main()
{
	S1 s;
	s.roll=1;
	s.marks=12.34324;
	scanf("%s",s.name);

	s.S2.roll2=2;
	s.S2.marks2=34.323232;
	scanf("%s",s.S2.name2);
	printf("%d %f %s\n",s.roll,s.marks,s.name);

	printf("%d %f %s\n",s.S2.roll2,s.S2.marks2,s.S2.name2);
}
