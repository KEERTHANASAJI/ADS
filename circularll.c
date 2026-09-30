#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
}*first=NULL,*curr,*newnode;
int main(){
  int c,data;
  do{
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter data\n");
  scanf("%d",&data);
  newnode->next=NULL;
  newnode->data=data;
  if(first==NULL){
    first=newnode;
    newnode->next=first;
    
  }
  else{
    curr=first;
    while(curr->next!=first)
      curr=curr->next;
    curr->next=newnode;
    newnode->next=first;
    }
  printf("do you want to continue press1:");
  scanf("%d",&c);
  }while(c==1);
  curr=first;
  do{
    printf("%d->",curr->data);
    curr=curr->next;
  }while(curr!=first);
printf("%d",first->data);
return 0;
}


 
