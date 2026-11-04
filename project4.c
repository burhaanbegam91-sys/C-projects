#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int roll;
	float mark;
	char city[10],dream[10];	
};
void read()
{
	struct student s[10];
	int i;
	printf("Enter the name,roll,mark,city,dream:");
	for(i=0;i<10;i++)
	{
		scanf("%s\n %d\n %f\n %s\n %s\n",s[i].name,&s[i].roll,&s[i].mark,s[i].city,s[i].dream);
	}
}
void display()
{
	struct student s[10];
	int i;
	for(i=0;i<10;i++)
	{
	    printf("your name=%s\n your roll=%d\n your mark=%f\n your city=%s\n your dream=%s\n",s[i].name,s[i].roll,s[i].mark,s[i].city,s[i].dream);	
	}
	
	}	

int main()
{
	
	struct student s[10];
	read(s,10);
	display(s,10);
	return 0;
	
}
