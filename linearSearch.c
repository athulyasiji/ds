#include<stdio.h>
int findVal(int arr[],int n,int value){
for(int i=0;i<n;i++)
{
if(arr[i] == value){
//printf("%d",i);
return i;

return - 1;
}
}
}


void main(){
int arr[20],n,value,pos;
printf("Enter size of array");
scanf("%d",&n);
printf("enter the elements");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);

}
printf("eneter the element to search");
scanf("%d",&value);
pos=findVal(arr,n,value);
if(pos==-1){
printf("Element not found");
}
else{
printf("element fount at %d",pos+1);
}


}
