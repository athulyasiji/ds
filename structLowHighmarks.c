#include<stdio.h>
struct student{
int rollno;
char name[50];
int mark;
};
void main(){
struct student s[10];
int n,lowest,highest,value1,value2;
printf("Enter no of students");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter the details of student%d\n",i+1);
printf("Enter roll no:\n");
scanf("%d",&s[i].rollno);
printf("Enter Name:\n");
scanf("%s",&s[i].name);
printf("Enter mark:\n");
scanf("%d",&s[i].mark);
}
lowest=s[0].mark;
highest=s[0].mark;
value1=0;
value2=0;
for(int i=1;i<n;i++){
if(s[i].mark<lowest){
lowest=s[i].mark;
value1=i;
}
else if(s[i].mark>highest){
highest=s[i].mark;
value2=i;
}
}
printf("\n");
printf("\tLowest mark:\n");
printf("\t-----------------------\n");
//printf("rollno%d",s[value1].rollno);
printf("Roll no:\tName:\tmark\n");
printf("%d\t\t%s\t%d\n",s[value1].rollno,s[value1].name,s[value1].mark);
printf("\n");
printf("\tHighest mark:\n");
printf("\t-----------------------\n");
//printf("rollno%d",s[value1].rollno);
printf("Roll no:\tName:\tmark\n");
printf("%d\t\t%s\t%d\n",s[value2].rollno,s[value2].name,s[value2].mark);

}
