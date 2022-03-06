#include<stdio.h>
void main(){
int a,b;
printf("Enter values of a and b");
scanf("%d%d",&a,&b);
if(a>b){
printf("The biggest number is %d",a);
}
else{
printf("The biggest number is %d",b);
}
getch();
}
