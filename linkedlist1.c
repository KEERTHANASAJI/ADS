#include<stdio.h>
#include<stdlib.h>
  struct node{
    int data;
    struct node*next;
  };
void append(struct node**head_ref,int new_data){
  
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
    while(temp!=NULL){
      printf("%d->",temp->data);
      temp=temp->next;
    }
    printf("NULL\n");
  }

int main(){
        struct node *head=NULL;
        append(&head,10);
        append(&head,20);
        print(head);
        
  return 0;
}

