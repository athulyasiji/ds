#include<stdio.h>
void main(){
int a[10],n,highest,lowest;
printf("Enter the size");
scanf("%d",&n);
printf("Enter the elements");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
highest=a[0];
lowest=a[0];
for(int i=0;i<n;i++){
if(a[i]<lowest){
lowest=a[i];
}
else if(a[i]>highest){
highest=a[i];
}
}
printf("lowest element is %d\n",lowest);
printf("highest element is %d",highest);


}
