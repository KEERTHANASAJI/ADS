#include<stdio.h>
int s[10],n,top=-1;
void push(int n){
  if(top==n-1){
    printf("overflow\n");
    return ;
}
else{
  top+=1;
  printf("enter the data\n");
  scanf("%d",&s[top]);
}
}
void pop(){
  if(top==-1){
    printf("underflow\n");
    return;}
  else{
    printf("element removed\n");
    top-=1;}
}
void peek(){
  if(top==-1){
    printf("Stack empty\n");
    return;
}
  else
    printf("top=%d\n",s[top]);
}
int main(){
  int c;
  printf("Enter size of array\n");
  scanf("%d",&n);
  do{
        printf("1.push\n2.pop\n3.peek\n4.exit\n");
        scanf("%d",&c);
        switch(c){
          case 1:
                push(n);
                break;
          case 2:
                pop();
                break;
          case 3:
                peek();
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
   Enter size of array
5
1.push
2.pop
3.peek
4.exit
1
enter the data
10
1.push
2.pop
3.peek
4.exit
1
enter the data
20
1.push
2.pop
3.peek
4.exit
1
enter the data
30
1.push
2.pop
3.peek
4.exit
1
enter the data
40
1.push
2.pop
3.peek
4.exit
1
enter the data
50
1.push
2.pop
3.peek
4.exit
1
overflow
1.push
2.pop
3.peek
4.exit
3
top=50
1.push
2.pop
3.peek
4.exit
2
element removed
1.push
2.pop
3.peek
4.exit
2
element removed
1.push
2.pop
3.peek
4.exit
2
element removed
1.push
2.pop
3.peek
4.exit
2
element removed
1.push
2.pop
3.peek
4.exit
2
element removed
1.push
2.pop
3.peek
4.exit
2
underflow
1.push
2.pop
3.peek
4.exit
3
Stack empty
1.push
2.pop
3.peek
4.exit
4
exit
*/
