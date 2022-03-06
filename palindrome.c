#include<stdio.h>
void main(){
int n,reverse=0,temp;
printf("Enter Number");
scanf("%d",&n);
temp=n;
while(n!=0){
reverse=reverse*10;
reverse=reverse+(n%10);
n=n/10;
}
if(temp==reverse){
printf("Numbers is palindrome");
}
else{
printf("Not palindrome");
}
getch();
}
