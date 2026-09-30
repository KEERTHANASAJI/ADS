#include<stdio.h>
struct member{
  int m_id;
  char name[20];
  float weight;
  int days;
}arr[50];
int c=0;
int choice;
  void add(){
   printf("Enter the memid:");
  scanf("%d",&arr[c].m_id);
  printf("Enter the name:");
  scanf("%s",arr[c].name);
  printf("Enter the weight:");
  scanf("%f",&arr[c].weight);
  printf("Enter the noof days:");
  scanf("%d",&arr[c].days);
  c++;
  printf("Added successfully\n");
  }
 
void display(){
  if(c==0)
    printf("No members added");
  for(int i=0;i<c;i++){
    printf("Details\n");
    printf("MemberId:%d\n",arr[i].m_id);
    printf("Name:%s\n",arr[i].name);
    printf("Weight:%f\n",arr[i].weight);
    printf("Days:%d\n",arr[i].days);
  }}
void filterinact(){
  int i,j,found=0;
  struct member temp;
  if(c==0)
    printf("No members added");
  for( i=0;i<c-1;i++){
    for( j=0;j<c-i-1;j++){
      if(arr[j].days<arr[j+1].days){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }}}
      for(i=0;i<c;i++){
      if(arr[i].days>7){
      printf("MemberId:%d\n",arr[i].m_id);
      printf("Name:%s\n",arr[i].name);
      printf("Weight:%f\n",arr[i].weight);
      printf("Days:%d\n",arr[i].days);
      found++;
    }}
      if(found==0)
        printf("\nNo inactive mmebers");
}
int main(){
   printf("GYM FITNESS TRACKER");
  while(1){
    printf("\n1.Add members");
    printf("\n2.Display all");
    printf("\n3.Filter inactive members");
    printf("\n4.Exit");
    printf("\nEnter your choice:");
      scanf("%d",&choice);
    if(choice==4){
      break;
    }
    switch(choice)
    {
      case 1:add();
             break;
      case 2:display();
             break;
      case 3:filterinact();
             break;
      default:printf("Wrong choice");
    }
  }
return 0;
}

