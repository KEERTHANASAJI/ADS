#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
}*top=NULL,*new_node;
void push(){
  int new_data;
 new_node=(struct node*)malloc(sizeof(struct node));
 printf("Enter the data\n");
 scanf("%d",&new_data);
 new_node->data=new_data;
 if(top==NULL){
   new_node->next=NULL;
   top=new_node;

}
 else{
   new_node->next=top;
   top=new_node;
 }
 printf("Data inserted\n");
}
void pop(){
  if(top==NULL){
    printf("underflow\n");
    return;}
  else{
    printf("element removed\n");
    new_node=top;
    top=top->next;
    free(new_node);
  }
}
void peep(){
if(top==NULL){
  printf("empty\n");
  return ;
}
else
  printf("top=%d\n",top->data);
}
int main(){
  int c;
  do{
        printf("1.push\n2.pop\n3.peep\n4.exit\n");
        scanf("%d",&c);
        switch(c){
          case 1:
                push();
                break;
          case 2:
                pop();
                break;
          case 3:
                peep();
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
1.push
2.pop
3.peep
4.exit
1
Enter the data
10
Data inserted
1.push
2.pop
3.peep
4.exit
1
Enter the data
20
Data inserted
1.push
2.pop
3.peep
4.exit
1
Enter the data
30
Data inserted
1.push
2.pop
3.peep
4.exit
2
element removed
1.push
2.pop
3.peep
4.exit
3
top=20
1.push
2.pop
3.peep
4.exit
2
element removed
1.push
2.pop
3.peep
4.exit
2
element removed
1.push
2.pop
3.peep
4.exit
2
underflow
1.push
2.pop
3.peep
4.exit
3
empty
1.push
2.pop
3.peep
4.exit
4
exit
   */
