#include<stdio.h>
#include<stdlib.h>
  struct node{
    int data;
    struct node*next;
  };
void append(struct node**head_ref){
  int new_data;
  printf("Enter the data:");
  scanf("%d",&new_data);
  struct node*new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data =new_data;
  new_node->next=NULL;
  if(*head_ref==NULL){
    *head_ref=new_node;
    return;
  }
  struct node*last=*head_ref;
  while(last->next!=NULL){
    last=last->next;}
  last->next=new_node;
}
  void print(struct node*head){
    struct node*temp=head;
    printf("Linkedlist\n");
    if(temp==NULL)
      printf("Empty Linkedlist\n");
    while(temp!=NULL){
      printf("%d->",temp->data);
      temp=temp->next;
    }
    printf("NULL\n");
  }

int main(){
  int c;
  do{
  printf("Menu Linkedlist\n");
  printf("1.Create\n2.Insert\n3.Display\n4.Exit\n");
  printf("Enter your choice:\n");
  scanf("%d",&c);
  switch(c){
    case 1:
        struct node *head=NULL;
        printf("Node created\n");
        break;
    case 2:
        append(&head);
        break;
    case 3:
        print(head);
        break;
    case 4:
        printf("Thank you\n");
        break;
    default:
        printf("Invalid choice\n");
        break;
  }
  }while(c!=4);
  return 0;
}

