#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	float cgpa;
	char name[100];
};
int main()
{
	struct student s1;
	s1.roll=1664;
	s1.cgpa=9.2;
	strcpy(s1.name,"hashim");
	struct student s2;
	s2.roll=1665;
	s2.cgpa=9.3;
	strcpy(s2.name,"wasii");
	struct student s3;
	s3.roll=1666;
	s3.cgpa=9.0;
	strcpy(s3.name,"basit");
	if(s1.cgpa >s2.cgpa && s1.cgpa>s3.cgpa)
	printf("the topper of the class is %s\n",s1.name);
	else if(s2.cgpa>s1.cgpa &&s2.cgpa>s3.cgpa)
	printf("the topper of the class is %s\n",s2.name);
	else
	printf("the topper is %s\n",s3.name);
	return 0;
}
