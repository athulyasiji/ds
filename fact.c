#include<stdio.h>
void main(){
int num,fact=1;
printf("Enter a Number");
scanf("%d",&num);
for(int i=1;i<=num;i++){
fact=fact*i;
}
printf("Factorial of %d is %d",num,fact);
}
