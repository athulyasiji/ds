#include<stdio.h>
void main()
{
int queue[50],ch=1,front=0,rear=0,i,j=1,n;
printf("Enter the queue size");
scanf("%d",&n);
int x=n;
printf("Queue using Array");
printf("\n\t1.Insertion \n\t2.Deletion \n\t3.Display \n\t4.Exit");
while(ch){
    printf("\n\t enter the choice");
    scanf("%d",&ch);
    switch(ch){
    case 1:{
            if(rear==x)
                printf("\n Queue is full");
            else{
                printf("\n enter the value");
               scanf("%d",&queue[rear++]);
            }
            break;
           }
    case 2:{
            if(front==rear)
            {
                printf("\n Queue is empty,");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                //x++;
            }
            break;
            }
    case 3:{
            printf("\nQueue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
    }
    break;
    }
    case 4:{
            printf("\n\t EXIT POINT ");
           break;
    }
    default:
            printf("\n wrong choice");
}
}
}
