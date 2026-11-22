#include<stdio.h>
struct patient{
	int Patient_ID;	
	char Patient_Name[50];	
	int Age;	
};

struct hospital{
	int Admission_ID;
	int	Room_Number;
	char Disease[50];	
	struct patient p;
}*ptr_h;

int main(){
	struct hospital h={123,45,"fever",{345,"Ahmed",34}};
	ptr_h=&h;
	printf("Admission ID :%d\n",ptr_h->Admission_ID);
	printf("Room No. :%d\n",ptr_h->Room_Number);
	printf("Disease :%s\n",ptr_h->Disease);
	printf("Patient ID :%d\n",ptr_h->p.Patient_ID);
	printf("Patient Name :%s\n",ptr_h->p.Patient_Name);
	printf("Age :%d\n",ptr_h->p.Age);
	
	return 0;
}
