#include<stdio.h>
#include<stdlib.h>
     struct node{
       int data;
       struct node*next;
     };
   void print(struct node**head_ref){
        struct node*last=*head_ref;
        if(*head_ref==NULL)
          printf("Empty Linkedlist\n");
      while(last!=NULL){
        printf("%d->",last->data);
        last=last->next;
      }
      printf("NULL");
    } 

   void append(struct node**head_ref){
   int new_data;
   printf("Enter the new data:\n");
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
    void upfront(struct node**head_ref){
      struct node*new_node=(struct node*)malloc(sizeof(struct node));
      int new_data;
      new_node->next=NULL;
      printf("Enter the data/n");
      scanf("%d",&new_data);
      new_node->data=new_data;
      new_node->next=*head_ref;
      *head_ref=new_node;
      printf("inserted to front\n");
    }
 void inbtw(struct node**head_ref){
        struct node*new_node=(struct node*)malloc(sizeof(struct node));
        int new_data,data;
        //new_node->next=NULL;
        printf("Enter the data of new node/n");
        scanf("%d",&new_data);
        printf("Enter the data ");
        scanf("%d",&data);
        new_node->data=new_data;
        struct node*last=*head_ref;
        struct node*currt;
        int f=0;
        while(last!=NULL){
          if(last->data==data){
                currt=last;
                new_node->next=currt->next;
                currt->next=new_node;
                last=currt;
                f=1;
                break;
          }
          last=last->next;
        }
          if(f)
            printf("Inserted Successfully\n");
          else
                printf("Node not found\n");
      }

  
  int main(){
          struct node *head=NULL;
          int c;
          do{
          printf("Menu LL:\n");
          printf("1.Insert upfront\n2.Insert end\n3.Insert inbtw\n4.Display\n5.Exit\n");
          printf("Enter your choice:");
          scanf("%d",&c);
          switch(c){
            case 1:
                upfront(&head);
                break;
            case 2:
                append(&head);
                break;
            case 3:
                inbtw(&head);
                break;
            case 4:
                print(&head);
                break;
            case 5:
                printf("Thankyou\n");
                break;
            default:
                printf("Invalid input/n");
                break;
            }}while(c!=5);
    return 0;
                                                 
 }
