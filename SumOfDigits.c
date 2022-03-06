#include<stdio.h>
void main(){
int num,sum=0,n1=0;
printf("Enter the number");
scanf("%d",&num);
while(num!=0){
n1=num%10;
sum=sum+n1;
num=num/10;
}
printf("The sum if digits is %d",sum);
getch();
}
