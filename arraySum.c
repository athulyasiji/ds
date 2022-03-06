#include<stdio.h>
void arraySum(){
int a[10],n,sum=0;
printf("enter 5the size of array");
scanf("%d",&n);
printf("enter the elements");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
sum=sum+a[i];
}
printf("Sum of array elements is:%d",sum);
}
void main()
{
arraySum();
}
