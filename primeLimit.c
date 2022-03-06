#include<stdio.h>
void main(){
int limit,flag=0;
printf("Enter the limit");
scanf("%d",&limit);
for(int i=2;i<limit;i++)
{
for(int j=2;j<i;j++){
if(i%j==0){
flag=1;
break;
}
if(flag==0){
    printf("%d",i);
}
}
}
}

