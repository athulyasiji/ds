#include<stdio.h>
void largest(int x,int y){
if(x>y){
printf("largest number is %d",x);
}
else{
printf("largest numbers is %d",y);
}
}
void main(){
int a,b;
printf("enter values of a and b");
scanf("%d%d",&a,&b);
largest(a,b);
}
