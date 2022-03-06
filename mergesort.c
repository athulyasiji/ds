#include<stdio.h>
void main(){
int n1,n2,a[50],b[50],c[50],temp,n3,x;
printf("enter the size of 1st array");
scanf("%d",&n1);
printf("Enter the elements for 1st array");
for(int i=0;i<n1;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n1;i++){
c[i]=a[i];
}

printf("enter the size of 2nd array");
scanf("%d",&n2);
printf("Enter the elements for 2nd array");
for(int i=0;i<n2;i++){
    scanf("%d",&b[i]);
}
n3=n1+n2;
x=n1;
for(int i=0;i<n2;i++){
    c[x]=b[i];
    x++;
}
for(int i=0;i<n3;i++){
    for(int j=i+1;j<n3;j++){
        if(c[i]>c[j]){
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }
}
printf("after merge");
 for(int i=0 ; i<n3 ; i++)
    {
        printf(" %d ",c[i]);
    }
}
