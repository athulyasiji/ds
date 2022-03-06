#include<stdio.h>
void main(){
int n,arr[20],value,pos;
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
printf("array before insertion\n");
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}

for(int i=n-1;i>=pos-1;i--){
arr[i+1]=arr[i];
}
arr[pos-1]=value;

printf("array after insertion");
for(int i=0;i<=n;i++){
printf("%d\n",arr[i]);
}
}
}
