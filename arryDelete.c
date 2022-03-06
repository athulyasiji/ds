#include<stdio.h>
void main(){
int n,arr[20],value,pos;
printf("enter the size of array");
scanf("%d",&n);
printf("Enter the elements");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the position to delete value\n");
scanf("%d",&pos);

if(pos>n){
printf("Invalid input\n");
}
else{

printf("array before Deletion\n");
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}

for(int i=pos-1;i<n-1;i++){
arr[i]=arr[i+1];
}


printf("array after Deletion");
for(int i=0;i<n-1;i++){
printf("\n%d",arr[i]);
}
}
}
