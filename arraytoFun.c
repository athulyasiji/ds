#include<stdio.h>
double getAvg(int arr[],int size){
int i;
double avg;
double sum=0;
for(int i=0;i<size;i++){
sum=sum+arr[i];
}
avg=sum/size;
return avg;
}
void main(){
int balance[5]={10,10,10,10,10};
double average;
average=getAvg(balance,5);
printf("Avergae value is :%f",average);
}
