#include<stdio.h>
void main(){
double balance[5]={100.0,2.0,3.4,17.0,50.0};
double *p;
int i;
p=balance;
printf("Array value usimg pointer");
for(i=0;i<5;i++){
printf("*(p+%d):%f\n",i,*(p+i));
}
printf("Array values using balance as address");
for(i=0;i<5;i++){
printf("*(balance+%d):%f\n",i,*(balance+i));
}
}
