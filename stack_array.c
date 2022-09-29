#include <stdio.h>
#include<stdlib.h>
#define n 50
void displayio(int a[],int top);
int pop(int a[],int top);
int push(int a[],int top);
int push(int a[],int top)
{
    if(top==n-1)
    {
        printf("<--------Stack Has No Space------->\n");
    }
    else
    {
        int k=0;
        printf("Enter The Value To Be Inserted In The Stack\n");
        scanf("%d",&k);
        top=top+1;
        a[top]=k;
    }
    return top;
}
int pop(int a[],int top )
{
    if(top==-1)
    {
    printf("<---------The Stack is Empty --------->");
    }
    else
    {
        printf("The Element present at the top index [%d] of the stack is -----> %d",top,a[top]);
    top=top-1;
    }
return top;
}
void displayio(int a[],int top)
{
    for(int i=0;i<top;i++)
    {
        printf("-->The %d th element of the stack is ---->%d \n",(i+1),a[i]);
    }
}
int main(void )
{
    int a[n];
    int top=-1;
  do
  {
    printf("----------Main Menu------------   \n");
    printf("<--Enter 1 to Push in the Stack-->\n");
    printf("<--Enter 2 to Pop  in the Stack-->\n");
    printf("<--Enter 3 to Display the Stack-->\n");
    printf("<--Enter the choice-->\n");
    int ch=0;
    scanf("%d",&ch);
switch(ch)
{
    case 1:
    top=push(a,top);
    break;
    case 2:
    top=pop(a,top);
    break;
    case 3:
    displayio(a,top);
    break;
    case 4:
    exit(0);
    break;
}
}while(1);
return 0;
}