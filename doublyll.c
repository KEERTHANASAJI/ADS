#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next,*prev;
}*first=NULL,*curr,*newnode;
int c,data;
  void create(){
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter data\n");
  scanf("%d",&data);
  newnode->next=NULL;
  newnode->prev=data;
  newnode->data=data;
  }
void insertfront(Node **head,int data){
  Node*newnode=create(data);
  if(*head==NULL){
    *head=newnode;
    return;
  }
  newnode->next=*head;
  (*head)->prev=newode;
  *head=newnode;
}
void insertend((Node**head,int data){
    Node*newnode=create(data);
    if(*head==NULL){
        *head=newnode;
        return;
        }
    *temp=*head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    }
void insertmiddle(Node**head,int data,int p){
if(p<1){
        printf("Position should be >=1\n");
        return;
}
void deletefront(Node** head){
if(*head==NULL){
        printf("Empty linkedlist\n");
        return;
}
*temp=*head;
*head=(*head)->next;
if(*head!=NULL){
  (*head)->prev=NULL;
-- INSERT -- #include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next,*prev;
}*first=NULL,*curr,*newnode;
int c,data;
  void create(){
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter data\n");
  scanf("%d",&data);
  newnode->next=NULL;
  newnode->prev=data;
  newnode->data=data;
  }
void insertfront(Node **head,int data){
  Node*newnode=create(data);
  if(*head==NULL){
    *head=newnode;
    return;
  }
  newnode->next=*head;
  (*head)->prev=newode;
  *head=newnode;
}
void insertend((Node**head,int data){
    Node*newnode=create(data);
    if(*head==NULL){
        *head=newnode;
        return;
        }
    *temp=*head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    }
void insertmiddle(Node**head,int data,int p){
if(p<1){
        printf("Position should be >=1\n");
        return;
}
void deletefront(Node** head){
if(*head==NULL){
        printf("Empty linkedlist\n");
        return;
}
*temp=*head;
*head=(*head)->next;
if(*head!=NULL){
  (*head)->prev=NULL;
}
free(temp);
}
void deleteend(Node**head){
  if(*head==NULL){
    printf("Empty\n");
    r4eturn;
}
*temp=*head;
if(temp->next==NULL){
  *head=NULL;
  free(temp);
  return;
}
while(temp->next!=NULL){
  temp=temp->next;
}
temp->prev->next=NULL;
free(temp);
}
void deletemiddle(Node**head,int p){
   if(*head==NULL){
          printf("Empty linkedlist\n");
          return;
  }
   *temp=*head;
   if(p==1){
     deletefront(head);
     return;
   }
   for(int i=1;temp!=NULL && i<p;i++)
     temp=temp->next;
   if(temp==NULL){
     printf("Position is iinvalid\n");
     return;
   }
   if(temp->next!=NULL)
     temp->next->prev=temp->prev;
   if(temp->prev!=NULL)
     temp->prev->next=temp->next;
   free(temp);
}


}
int main(){
    int c;
    do{
          printf("\nCircularQueue using Array\n");
          printf("1.Enqueuefront\n2.EnqueueEnd\n3.Enqueuemiddle\n4.DeleteFront\n5.DeleteEnd\n6.Deletemiddle\n7.display\n8.exit\n");
          printf("Enter your choice\n");
          scanf("%d",&c);
          switch(c){
            case 1:
                  insertfront();
                  break;
            case 2:
                  insertend();
                  break;
            case 3:
                  insertmiddle();
                  break;
            case 4:
                  deletefront();
                  break;
              case 5:
                    deleteend();
                    break;
              case 6:
                    deletemiddle();
                    break;
              case 7:
                    display();
                    break;
              case 8:
                    printf("Exit\n");
                    break;
            default:
                  printf("invalid\n");
                  break;
          }
  
