#include <stdio.h>
#include <stdlib.h>
struct node
{
struct node *prev;
struct node *next;
int data;
};
struct node *head;
void insert_begin();
void insert_last();
void insert_spec();
void delete_begin();
void delete_last();
void delete_spec();
void show();
void search();
void main()
{
int ch;
while(ch!=9)
{
printf("\n1.insert in beginning\n2.insert at last\n3.insert randomly\n4.delete from beginning\n5.delete from last\n6.delete node after given node\n7.search\n8.show\n9.exit\n');
printf("enter your choice :");
scanf("%d";,&amp;ch);
switch(ch)
{
case 1:
insert_begin();
break;
case 2 :
insert_last();
break;
case 3:
insert_spec();
break;
case 4:
delete_begin();
break;
case 5:
delete_last();
break;
case 6:
delete_spec();
break;
case 7:

search();
break;
case 8:
show();
break;
case 9:
exit(0);
break;
default:
printf("invalid choice!");
}
}
}
void insert_begin()
{
struct node *ptr;
int item;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\noverflow!");
}
else
{
printf("\nenter value :");
scanf("%d",&amp;item);
if(head==NULL)
{
ptr-&gt;next=NULL;
ptr-&gt;prev=NULL;
ptr-&gt;data=item;
head=ptr;
}
else
{
ptr-&gt;data=item;
ptr-&gt;prev=NULL;
ptr-&gt;next=head;
head-&gt;prev=ptr;
head=ptr;
}
printf("\nnode inserted!");
}
}
void insert_last()
{
struct node *ptr,*temp;
int item;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\noverflow!");
}
else

{
printf("\nenter value :");
scanf("%d",&amp;item);
ptr-&gt;data=item;
if(head==NULL)
{
ptr-&gt;next=NULL;
ptr-&gt;prev=NULL;
head=ptr;
}
else
{
temp=head;
while(temp-&gt;next!=NULL)
{
temp=temp-&gt;next;
}
temp-&gt;next=ptr;
ptr-&gt;prev=temp;
ptr-&gt;next=NULL;
}
}
printf("\nnode inserted!");
}
void insert_spec()
{
struct node *ptr,*temp;
int item,loc,i;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\noverflow!");
}
else
{
temp=head;
printf("\nenter the location :");
scanf("%d",&amp;loc);
for(i=0;i&lt;loc;i++)
{
temp=temp-&gt;next;
if(temp==NULL)
{
printf("\nthere are less than %d items.",loc);
return;
}
printf("\nenter value :");
scanf("%d",&amp;item);
ptr-&gt;data=item;
ptr-&gt;next=temp-&gt;next;
ptr-&gt;prev=temp;
temp-&gt;next=ptr;
temp-&gt;next-&gt;prev=ptr;
printf("\nnode inserted");

}
}
}
void delete_begin()
{
struct node *ptr;
if(head==NULL)
{
printf("\nunderflow!");
}
else if(head-&gt;next==NULL)
{
head=NULL;
free(head);
printf("\nnode deleted!");
}
else
{
ptr=head;
head=head-&gt;next;
head-&gt;prev=NULL;
free(ptr);
printf("\nnode deleted!");
}
}
void delete_last()
{
struct node *ptr;
if(head==NULL)
{
printf("\nunderflow!");
}
else if(head-&gt;next==NULL)
{
head=NULL;
free(head);
printf("\nnode deleted!");
}
else
{
ptr=head;
if(ptr-&gt;next!=NULL)
{
ptr=ptr-&gt;next;
}
ptr-&gt;prev-&gt;next=NULL;
free(ptr);
printf("\nnode deleted!");
}
}
void delete_spec()
{
struct node *ptr,*temp;
int val;

printf("\nenter data after which node is to be deleted :");
scanf("%d",&amp;val);
ptr=head;
while(ptr-&gt;data!=val)
ptr=ptr-&gt;next;
if(ptr-&gt;next==NULL)
{
printf("\ncannot delete!");
}
else if(ptr-&gt;next-&gt;next==NULL)
{
ptr-&gt;next=NULL;
}
else
{
temp=ptr-&gt;next;
ptr-&gt;next=temp-&gt;next;
temp-&gt;next-&gt;prev=ptr;
free(temp);
printf("\nnode deleted!");
}
}
void show()
{
struct node *ptr;
printf("\nprinting values.....\n");
ptr=head;
while(ptr!=NULL)
{
printf("%d\n",ptr-&gt;data);
ptr=ptr-&gt;next;
}
}
void search()
{
struct node *ptr;
int item,i=0,flag;
ptr=head;
if(ptr==NULL)
{
printf("\nempty list!");
}
else
{
printf("\nenter item to be searched :");
scanf("%d",&amp;item);
while(ptr!=NULL)
{
if(ptr-&gt;data==item)
{
printf("\nitem found at location %d",i+1);
flag=0;
break;
}

else
{
flag=1;
}
i++;
ptr=ptr-&gt;next;
}
if(flag==1)
{
printf("\nitem not found!");
}
}
};
