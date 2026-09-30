#include<stdio.h>
#include<stdlib.h>
     struct node{
       int data;
       struct node*next;
     };
   void append(struct node**head_ref){
   int new_data;
   printf("Enter the position to enter the new node:");
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
        int new_data;
        new_node->next=NULL;
        printf("Enter the data of new node/n");
        scanf("%d",&new_data);
        printf("Enter the data ");
        scanf("%d",&data);
        new_node->data=new_data;
        struct node*last=*head_ref;
        int f=0;
        while(last!=NULL){
          if(last->data==data){
                new_node->next=last->next;
                last->next=new_node;
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
          printf("1.Insert upfront\n2.Insert end\n3.Insert inbtw\n4.Exit\n");
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
                printf("Thankyou\n");
                break;
            default:
                printf("Invalid input/n");
                break;
            }}while(c!=4);
    return 0;
                                                 
 }
