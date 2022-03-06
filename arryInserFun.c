int insertValue(int arr[],int n,int pos,int value){

for(int i=n-1;i>=pos-1;i--){
arr[i+1]=arr[i];
}
arr[pos-1]=value;
return n+1;
}
#include<stdio.h>
void main(){
int n,arr[20],value,pos;
int size;
printf("enter the size of array");
scanf("%d",&n);
printf("Enter the elements");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the position to add new value\n");
scanf("%d",&pos);

if(pos-1>n){
printf("Invalid input\n");
}
else{
printf("enter new value\n");
scanf("%d",&value);

size=insertValue(arr,n,pos,value);


printf("array before insertion\n");
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}

printf("array after insertion");
for(int i=0;i<=size;i++){
printf("%d\n",arr[i]);
}
}
}
