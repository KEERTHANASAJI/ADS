#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
}*first=NULL,*rear=NULL,*new_node,*temp,*curr;
void enqueue(){
 int new_data;
 new_node=(struct node*)malloc(sizeof(struct node));
 printf("Enter the data\n");
 scanf("%d",&new_data);
 new_node->data=new_data;
 new_node->next=NULL;
 if(first==NULL){
   first=new_node;
   rear=new_node;
   rear->next=first;
}
 else{  
   rear->next=new_node;
   rear=new_node;
   rear->next=first;
 }
 printf("Data inserted\n");
}
void dequeue(){
  if(first==NULL){
    printf("underflow\n");
    return;}
    printf("element removed %d\n",first->data);
    if(first==rear){
      free(first);
      return;
    }
    else{
    temp=first;
    first=first->next;
    free(temp);
  }
}
void display(){
  if(first==NULL){
    printf("Empty\n");
    return;
  }
  else{
    curr=first;
    do{
         printf("%d->",curr->data);
         curr=curr->next;
    }while(curr!=first);
  }
  printf("%d",first->data);
}
int main(){
  int c;
  do{
        printf("Queue LL\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d",&c);
        switch(c){
          case 1:
                enqueue();
                break;
          case 2:
                dequeue();
                break;
          case 3:
                display();
                break;
          case 4:
                printf("exit\n");
                break;
          default:
                printf("invalid");
                break;
        }                
  }while(c!=4);
return 0;
}
