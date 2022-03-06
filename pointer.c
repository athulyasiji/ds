#include<stdio.h>
void main(){
int x;
int *i;
printf("Enter the value");
scanf("%d",&x);
i=&x;
printf("x=%d\n",x);
printf("i=%d",i);
}
