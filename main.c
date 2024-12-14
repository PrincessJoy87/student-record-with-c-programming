#include <stdio.h>
#include <stdlib.h>

#define max 90


	struct student{
	int id;
	char name[70];
	int age;
	int econs;
	int maths;
	int computer;
	int french;
	float average_marks;
};
struct student students[max];
int count=0;
//function to add a new student
void add_student(){
struct student add;
printf("enter students.id  ");
scanf("%d" ,&add.id);
printf("enter students.name  ");
scanf("%s" ,&add.name);
printf("enter students.age  ");
scanf("%d" ,&add.age);
printf("enter students.econs  ");
scanf("%d" ,&add.econs);
printf("enter students.maths  ");
scanf("%d",&add.maths);
printf("enter students.computer  ");
scanf("%d",&add.computer);
printf("enter students.french  ");
scanf("%d",&add.french);
add.average_marks = (add.econs+add.maths+add.computer+add.french/4);
printf("students added successfully");
students[count]=add;
count = count+1;
}

// records to display students
void display() {
	int option;
	if(count==0){
		printf("records is empty\n");
	}else{
		printf("ID\t  Name\t  Age\t  econs\t  maths\t  computer\t  french\t  average_marks\n");
		printf("..........................................................................................\n");
	for(int i=0; i<count; i++){
			printf("%d\t %s\t %d\t %d\t %d\t %d\t %d\t %f\n",students[i].id, students[i].name, students[i].age, students[i].econs,students[i].maths,students[i].computer,students[i].french,students[i].average_marks);	
		}
	}	
}
//searching for students
void searching(){
	int catch;
	printf("Enter ID:\n");
	scanf("%d",&catch);
	for(int i=0; i<count; i++){
		if(catch==students[i].id){
			printf("%s",students[i].name);
			return;
		}
	}
	printf("name not found\n");
}
//sorting out students
void buble_sort(){
	struct student ;
	int take;
	float average_marks;
	printf("enter the sorting criterion");
	scanf("%d",&take);
	for(int i=count; i>=1;i--){
		for(int j=0;j<=i-1;j++){
			if(students[j].average_marks<students[1].average_marks){
			printf("average_marks:%f",students[j].average_marks);	
			}
		}
	}
	display();
}
void average_grades(){
	int i;
	float size;	 
	printf("enter the average_marks of students: ");
	for(i=0;i<size;i++){
		size+=students[i].average_marks;
	}
	printf("average_marks= %f\n",size/count);
	
}
void top_performer(){
	int i;
	for(i=1;i<count;i++){
		if(students[i].average_marks>students[0].average_marks){
			students[0]=students[i];
		}
	}
	printf("Name= %s\t averages= %f",students[0].name, students[0].average_marks);
	}
//filtering out students
void filtering_students(){
int criterial;
int p;
printf("Enter Filter Criterial: 1. to filter below range < | 2. to filter above range >\n");
printf("Enter choice: ");
scanf("%d",&criterial);
printf("Enter average to sort: ");
scanf("%d",&p);
if(criterial == 1){
	for(int i=0; i<count;i++){
		if(students[i].average_marks <= p){
			printf("%s\t %f\n", students[i].name, students[i].average_marks);
		}
	}
}else if(criterial == 2){
	for(int j=0;j<count;j++){
		if(students[j].average_marks > p){
			printf("%s\t %f\n",students[j].name,students[j].average_marks);
		}
	}
}else{
	printf("Invalid Entry\n");
}	
}
void update (){
	int pos,n,i;
	n=students[i+1].id;
	printf("enter position 1 to update|| 2 to delete: ");
	scanf("%d",&pos);
	if(pos>n){
		printf("%d\n",students[i].id);
	}else
	if(students[i].id=pos-1){
		printf("element at %d position = %d",pos,students[i].id);
		printf("\nenter new No:  ");
		scanf("%d",&students[i].id);
		printf("element at %d position = %d",pos,students[i].id);
	}else{
	if(	students[i].id=pos-1);
		printf("%d is delete successfully.....",students[i].id);
		for(int i=pos;i<n;i++){
		students[i].id=students[i+1].id;
		}
		n--;
	}
}
void analyse(){
	int take;
	float average_marks;
	printf("enter the marks of 4 subjescts\n");
	scanf("%f %f %f %f",&take);
	for(int i=1;i<count;i++){
		printf("%f\t %f\t %f\t %f\n",&students[i].average_marks, &students[i].average_marks, &students[i].average_marks, &students[i].average_marks);
		if(take>=80){
			printf("Grade: A\n");
		}else
		if(take>=60){
			printf("Grade: B\n");
		}else
		if(take>=48){
			printf("Grade: C\n");
		}else
		{
		printf("you have failed");
	}
	}
}
void menu(){
	int option; 
	do{
		printf("\n STUDENTS MANAGEMENT SYSTEM \n");
		printf(".......................................\n");
		printf("1. Add New Student\n");
		printf("2. Display All Records\n");
		printf("3. Search For A Student\n");
		printf("4. Sort Records\n");
		printf("5. Computer Average Grades\n");
		printf("6. Tdentify Top Performer\n");
		printf("7. Fliter Student By Grade\n");
		printf("8. Update Or Delete A Record\n");
		printf("9. Analyse Grades\n");
		printf("10. Exist\n");
		printf("Enter your choice: ");
		scanf("%d",&option);
		
		if(option == 1){
			add_student();
		}
		if(option == 2 ){
			display();
		}
		if(option ==3){
			searching();
		}
		if(option ==4){
			buble_sort();
     	}
	if(option==5){
		average_grades();
   	}
	if(option==6){
		top_performer();
	}
	if(option==7){
		filtering_students();
	}
	if(option==8){
		update();
	}
	}while(option !=10);
	printf("Exiting..................");
}
int main(){
	menu();
}




	
	




	
