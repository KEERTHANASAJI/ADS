#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node*left,*right;
};
struct node *insert(struct node *root,int d){
 if(root==NULL){
   root=(struct node*)malloc(sizeof(struct node));
   root->data=d;
   root->left=NULL;
   root->right=NULL;
   return root;
 }
 if(d<root->data){
   root->left=insert(root->left,d);
 }
 else if(d>root->data){
   root->right=insert(root->right,d);
 }
 return root;
}
int search(struct node *root,int d){
 if(root==NULL)
   return 0;
 if(root->data==d)
   return 1;
 if(d<root->data)
     return search(root->left,d);
 else
     return search(root->right,d);
}
struct node *delete(struct node *root,int d){
  struct node *temp;
  if(root==NULL)
    return root;
   if(d<root->data){
     root->left=delete(root->left,d);
   }
   else if(d>root->data){
     root->right=delete(root->right,d);
   }
   else{
   if(root->left==NULL){
     temp=root->right;
     free(root);
     return temp;
     }
   if(root->right==NULL){
      temp=root->left ;
       free(root);
       return temp;
   }
   temp=root->right;
   while(temp->left!=NULL)
     temp=temp->left;
   root->data=temp->data;
   root->right=delete(root->right,temp->data);
   }
   return root;
  }
void display(struct node*root){
  if(root!=NULL){
    display(root->left);
    printf("%d ",root->data);
    display(root->right);
}
}
 int main(){
   struct node *root=NULL;
   int c,d;
   do{
         printf("\nBST\n");
         printf("1.Insert\n2.Search\n3.Delete\n4.Display\n5.Exit\n");
         scanf("%d",&c);
         switch(c){
           case 1:
              printf("Enter the data:\n");
              scanf("%d",&d);
              root=insert(root,d);
              break;
           case 2:
                 printf("Enter the data:\n");
                 scanf("%d",&d);
                 if(search(root,d))
                   printf("Found");
                 else
                   printf("Not found");
                 break;
           case 3:
                  printf("Enter the data:\n");
                  scanf("%d",&d);
                  if(delete(root,d))
                    printf("Deleted");
                  else
                    printf("Not found");
                  break;
           case 4:
                  display(root);
                  break;
           case 5:
                 printf("exit\n");
                 break;
           default:
                 printf("invalid");
                 break;
         }
   }while(c!=5);
 return 0;
 }

