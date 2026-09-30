#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
}*curr,*head=NULL;
void delf(struct node **head){
if(*head==NULL)
  return;
curr=*head;
*head=curr->next;
}
 void delend(struct node **head){
   if(*head==NULL)
        return;
   curr=*head;
   if(curr->next==NULL){
     *head=NULL;
      return;}
   while(curr->next->next!=NULL)
     curr=curr->next;
   curr->next=NULL;
   }
 void delinb(struct node **head){
 int d;
 if(*head==NULL)
     return;
 printf("Enter the data to be deleted:\n");
 scanf("%d",&d);
 curr=*head;
if(curr->data==d){
  *head=curr->next;
  return;}
while(curr->next && curr->next->data!=d);
        curr=curr->next;
 if(curr->next)
   curr->next=curr->next->next;
 else
   printf("Not found");
   }
 void print(struct node **head){
 curr=*head;
 while(curr!=NULL){
   printf("%d->",curr->data);
   curr=curr->next;}
 printf("NULL");
   }
int main(){
  struct node *newnode;
  int data,ch;
  do{
     newnode=(struct node*)malloc(sizeof(struct node));
      printf("Enter the data:");
      scanf("%d",&data);

     newnode->data=data;
     newnode->next=NULL;
     if(head==NULL){
       head=newnode;
      }
     else{
     curr=head;
     while(curr->next)
        curr=curr->next;
     curr->next=newnode;
     }
     printf("Do you want to add more press 1\n" );
     scanf("%d",&ch);
  }while(ch==1);
  do{
    printf("1.DElete front\n2.Delete end\n3.Delete inbtw\n4.Display\n5.Exit\n");
    printf("Enter the choice:");
    scanf("%d",&ch);
    switch(ch){
      case 1:
        delf(&head);
        break;
       case 2:
          delend(&head);
          break;
        case 3:
          delinb(&head);
          break;       
        case 4:
          print(&head);
          break;
         case 5:
          printf("Thank you\n");
          break;
         default:
          printf("Invalid choice\n");
          break;
        }
  }while(ch!=5);
return 0;
}

