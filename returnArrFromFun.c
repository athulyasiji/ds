#include<stdio.h>
int *getRandom(){
static int r[10];
int i;
for(i=0;i<10;i++){
r[i]=i+1;
printf("r[%d]=%d\n",i,r[i]);
}
return r;

}
void main(){
int *p;
int i;
p=getRandom();
printf("In main function");
for(i=0;i<10;i++){
printf("*(p+%d):%d\n",i,*(p+i));
}
}
