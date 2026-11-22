#include<stdio.h>

struct address{
	char City[50];
	int ZipCode;
	char State[50];
};
struct student{
	int RollNo;
	char Name[50];
	float CGPA;
	struct address add;
};
int main(){
	struct student stu = {29123,"Sana",3.08,{"Karachi",75950,"Pakistan"}};
     printf("-----Student Detil-----\n");
     printf("Student Rollno. : %d\n",stu.RollNo);
     printf("Student Name : %s\n",stu.Name);
     printf("Student CGPA : %.2f\n",stu.CGPA);
     printf("Student City: %s\n",stu.add.City);
     printf("Student State : %s\n",stu.add.State);
     printf("Student  : %d\n",stu.add.ZipCode);
     
	return 0;
}
