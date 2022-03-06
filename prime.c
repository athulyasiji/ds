#include<stdio.h>
void main(){
int n,flag=0;
printf("Enter number");
scanf("%d",&n);
for(int i=2;i<=n-1;i++){
if(n%i==0){
flag=1;
break;
}
}
if(flag==0){
printf("Number is prime");
}
else{
printf("Number not prime");
}
getch();
}
