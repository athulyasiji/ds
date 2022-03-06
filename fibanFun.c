#include<stdio.h>
int fibanocci(int n){
int a=0,b=1,c;
printf("%d\n",a);
printf("%d\n",b);
c=a+b;
printf("%d\n",c);
for(int i=2;i<n;i++){
a=b;
b=c;
c=a+b;
printf("%d\n",c);
}
}
void main(){
int a=0,b=1,n;
printf("Enter the no of terms");
scanf("%d",&n);
fibanocci(n);

}
