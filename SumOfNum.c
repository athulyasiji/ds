#include<stdio.h>
void main(){
int FN,LN,sum=0;
printf("Enter the limits");
scanf("%d%d",&FN,&LN);
for(int i=FN;i<=LN;i++){
sum=sum+i;
}
printf("Sum of the Numbers is %d",sum);
getch();
}
