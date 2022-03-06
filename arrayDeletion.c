#include<stdio.h>
void main(){
int n,arr[20],pos,value;
printf("Enter array size\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the position of element to delete");
scanf("%d",&pos);

if(pos-1>=n){
printf("Invalid input,deletion not possible\n");
}
else{
 printf("Array beforeDeletion\n");
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}
for(int i=pos-1;i<n-1;i++){
arr[i]=arr[i+1];
}

printf("Array after Deletion\n");
for(int i=0;i<n-1;i++){
printf("%d\n",arr[i]);
}
}
}
