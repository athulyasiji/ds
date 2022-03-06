#include<stdio.h>
int stack[50],n,ch,data;
top=-1;
void push();
void pop();
void display();
void main(){
printf("Enter the size of stack");
scanf("%d",&n);
printf("\n1.push\n2.pop\n3.display");
do{
printf("\nenter your choice");
scanf("%d",&ch);

switch(ch){
case 1:
    {
      push();
      break;
    }
case 2:
    {
        pop();
        break;
    }
case 3:
    {

     display();
     break;
    }
case 4:
        {
         printf("\n\t EXIT POINT ");
         break;
        }
default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
}
}while(ch!=4);
}

void push(){
    if(top==n-1){
        printf("stack is full");
    }
    else{
        printf("\n enter the element");
        scanf("%d",&data);
        top=top+1;
        stack[top]=data;
        display();
    }
}
void pop(){
if(top == -1){
    printf("stack is empty");
}
else{
    data=stack[top];
    top=top - 1;
    display();

}
}

void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
