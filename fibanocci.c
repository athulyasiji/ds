#include<stdio.h>
void main(){
int a=0,b=1,n,value=0;
printf("Enter the limit");
scanf("%d",&n);
printf("%d\t%d\t",a,b);
for(int i=2;i<n;i++){
value=a+b;
printf("%d\t",value);
a=b;
b=value;
}
getch();
}
