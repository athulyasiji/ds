#include<stdio.h>
#define max 3

int queue[max];
int front=0;
int rear=0;

void enqueue(int element){
if(front== 1 && rear == max){
    printf("queue is full");
}
else if(rear==front-1){
    printf("queue is full");
}
else{
    if(front==0){
        front=1;
        rear=1;
        queue[rear]=element;
        //rear=rear+1;

    }
    else{
    rear=(rear%max)+1;
    queue[rear]=element;
    }

}
}

void dequeue(){
if(front==0 && rear==0)
    printf("queue is empty");
else if(front==max){
    printf("\n the dequeued element is %d",queue[front]);
    front=0;
    rear=0;
}
else{
    printf("\n the dequeued element is %d",queue[front]);
    front=(front%max)+1;
}
}

void display(){
    int i=0;
            if(front==-1 && rear==-1)
                printf("\n Queue is Empty");
            else
            {
                printf("\nQueue Elements are:\n ");
                if(rear>=front){
                        while(front<=rear){
                            printf("%d",queue[front]);
                            front++;
                        }

                }

    }
}

void main(){
int choice,ele;
printf("\n\t circular using array");
    printf("\n\t 1.Insertion\n\t 2.Deletion\n\t 3.Display\n\t 4.Exit");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("enter element to be inserted");
                scanf("%d",&ele);
                enqueue(ele);
                break;
            }
            case 2:
            {
                dequeue();
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
                printf ("\n\t Enter a Valid Choice");
            }

        }
    }
    while(choice!=4);
}
