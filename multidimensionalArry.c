#include<stdio.h>

void main(){
int a[10][10],i,j,m,n;
printf("Enter no of rows&cols");
scanf("%d%d",&m,&n);

printf("Enter the elements");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("The elements are :");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("a[%d][%d] = %d\n", i,j, a[i][j] );
    }
}
}
