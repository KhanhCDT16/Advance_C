#include <stdio.h>
#include <stdbool.h>
int top = -1;
int Max =10;
bool empty()
{
    if (top == -1)
    {
        return true;
    }
    else return false;
    
}
bool full(int max)
{
    if (top == (max-1))
    {
        return true;
    }
    else return false;
    
}
void push(int val,int Stack[])
{
    if (empty())
    {
        top = 0;
        Stack[top] = val;
    }
    else
    {
       if (full(10))
        {
            printf("Stack is full\n");
        }
        else
        {
            top++;
            Stack[top] =val;
        }
    }  
}
void pop()
{
    if (empty())
    {
        printf("Stack is emty");
    }
    else
    {
        top--;
    } 
}
int get_Stack(int Stack[],int index)
{
    if (empty())
    {
        printf("Stack is empty\n");
    }
    else top = Max - (index + top);

    return Stack[top];
}
int Top(int Stack[])
{
    return Stack[top];
}
int main()
{
    int Stack[Max];
    int data;
    for (int i = 0; i <Max; i++)
    {
        scanf("%d",&data);
        push(data,Stack);
    }
    printf("%d\n",get_Stack(Stack,2));
    
    return 0;
}