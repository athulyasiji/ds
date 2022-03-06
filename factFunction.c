#include<stdio.h>
int factorial(int n){
int fact=1;
for(int i=1;i<=n;i++){
fact=fact*i;
}
printf("factorail of number is %d",fact);
}
void main(){
int num;
printf("enter the number");
scanf("%d",&num);
factorial(num);

}
