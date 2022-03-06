#include<stdio.h>
void main(){
char name[10];
printf("Enter your name");
scanf("%s",&name);
for(int i=0;i<5;i++){
printf("%s\n",name);
}
getch();
}
