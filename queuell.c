//queuell
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
}
 else{  
   rear->next=new_node;
   rear=new_node;
 }
 printf("Data inserted\n");
}
void dequeue(){
  if(first==NULL){
    printf("underflow\n");
    return;}
  else{
    printf("element removed %d\n",first->data);
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
    while(curr!=NULL){
      printf("%d->",curr->data);
      curr=curr->next;
    }
  }
  printf("NULL\n");
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
/*
Output
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
1
Enter the data
10
Data inserted
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
1
Enter the data
20
Data inserted
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
1
Enter the data
30
Data inserted
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
1
Enter the data
40
Data inserted
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
3
10->20->30->40->NULL
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
2
element removed 10
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
2
element removed 20
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
2
element removed 30
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
2
element removed 40
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
2
underflow
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
3
Empty
Queue LL
1.Enqueue
2.Dequeue
3.Display
4.Exit
4
exit
*/
