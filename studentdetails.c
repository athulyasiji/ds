#include<stdio.h>
struct student{
int rollno;
char name[50];
int mark1;
int mark2;
int mark3;
int total;
float percentage;
};
void main(){
struct student s[10];
int n;
printf("Enter no of students");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter the details of student%d\n",i+1);
printf("Enter roll no:\n");
scanf("%d",&s[i].rollno);
printf("Enter Name:\n");
scanf("%s",&s[i].name);
printf("Enter mark1:\n");
scanf("%d",&s[i].mark1);
printf("Enter mark2:\n");
scanf("%d",&s[i].mark2);
printf("Enter mark3:\n");
scanf("%d",&s[i].mark3);
s[i].total=s[i].mark1+s[i].mark2+s[i].mark3;
s[i].percentage=(s[i].total*100)/300;
}
printf("\n");
printf("\tstudent details\n");
printf("--------------------------------\n");
printf("RollNo\tName\tMark1\tMark2\tMark3\tTotal\tPercentage\n");
for(int i=0;i<n;i++){

printf("%d\t%s\t%d\t%d\t%d\t%d\t%f\t\n",s[i].rollno,s[i].name,s[i].mark1,s[i].mark2,s[i].mark3,s[i].total,s[i].percentage);
//printf("Roll no:%d\n",s[i].rollno);
//printf("Name:%s\n",s[i].name);
//printf("Mark1:%d\n",s[i].mark1);
//printf("Mark2:%d\n",s[i].mark2);
//printf("Mark3:%d\n",s[i].mark3);
//printf("Total Marks:%d\n",s[i].total);
//printf("Percentage:%f\n",s[i].percentage);

}

}
