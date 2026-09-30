#include<stdio.h>
#include<stdlib.h>
int i,j,r,c,count=0,sp[10][10],value=0;
struct node{
  int row;
  int col;
  int val;
  struct node*next;
}*first,*curr,*newnode;
void insert(int i,int j,int value){
newnode=(struct node*)malloc(sizeof(struct node));
newnode->next=NULL;
newnode->row=i;
newnode->col=j;
newnode->val=value;
if(first==NULL)
  first=newnode;
else{
  curr=first;
  while(curr->next!=NULL)
    curr=curr->next;
  curr->next=newnode;
}
}
void print(){
curr=first;
while(curr!=NULL){
  printf("%d %d %d->",curr->row,curr->col,curr->val);
  curr=curr->next;
}
printf("NULL");
}
int main(){
  int c,a;
  printf("Enter the noof rows and cols:\n");
  scanf("%d %d",&r,&c);
  printf("Enter the data:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++)
      scanf("%d",&sp[i][j]);
  }
  for(i=0;i<r;i++){
      for(j=0;j<c;j++){
        if(sp[i][j]!=0){
          count++;
          a=r*c-count;
          if(a<=count){
            printf("This is not a sparse matrix\n");
            return 0;
          }
          value=sp[i][j];
          insert(i,j,value);
    }
   }
  }
  print();
  return 0;
}
