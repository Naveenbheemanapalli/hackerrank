#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

struct student{
	int roll_no;
	char name[20];
	float t_marks;
};

void print(struct student **p,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",p[i]->roll_no);
		printf("%s\t",p[i]->name);
		printf("%f",p[i]->t_marks);
		printf("\n");
	}
}
void roll_swap(struct student **p,int n){
	int i,j;
	struct student *t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p[i]->roll_no < p[j]->roll_no){
				t = p[j];
				p[j] = p[i];
				p[i] = t;
			}
		}
	}
}
void name_swap(struct student **p,int n){
	int i,j;
	struct student *t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(p[i]->name,p[j]->name)){
				t = p[j];
				p[j] = p[i];
				p[i] = t;
			}
		}
	}
}
void marks_swap(struct student **p,int n){
	int i,j;
	struct student *t;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p[i]->t_marks < p[j]->t_marks){
				t = p[j];
				p[j] = p[i];
				p[i] = t;
			}
		}
	}
}
int main(){
	int i,op,n;
	printf("Enter The no of Students: ");
	scanf("%d",&n);
	struct student *p[n];
	for(i=0;i<n;i++){
		p[i] = (struct student*)malloc(sizeof(struct student));
	}
	
	for(i=0;i<n;i++){
		printf("Enter the roll No: ");
		scanf("%d",&p[i]->roll_no);
		printf("Enter the Name: ");
		scanf("%s",p[i]->name);
		printf("Enter the total_marks: ");
		scanf("%f",&p[i]->t_marks);
	}
	system("cls");
	printf("Enter The Option :");
	printf("\n 1.sort by roll number \n 2.sort by name \n 3.sort by marks : ");
	scanf("%d",&op);
	if(op == 1){
		roll_swap(p,n);
		print(p,n);
	}
	else{
		if(op==2){
			name_swap(p,n);
			print(p,n);
		}
		if(op==3){
			marks_swap(p,n);
			print(p,n);
		}
	}
	
}


