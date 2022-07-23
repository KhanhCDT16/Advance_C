#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *pNext;
    
};
typedef struct  Node *node;
node create_Node(int data)
{
    node temp;
    temp = (node)malloc(sizeof(struct Node));
    temp ->data = data;
    temp ->pNext = NULL;
}
node Push_pack(node addressNode,int data)
{
    node temp, p;
    temp = create_Node(data);
    if (addressNode == NULL)
    {
        addressNode = temp;
    }
    else
    {
        p = addressNode;
        while (p->pNext != NULL)
        {
            p = p->pNext;
        }
      p->pNext =temp;
    }
    return addressNode;
}
void Change_Data(node DL, int index,int data)
{
    int i= 0;
    node change = NULL;
    change = DL;
    while (change != NULL && i != index)
    {
        change = change ->pNext;
        i++;
    }
    change ->data = data;
    
}

int main()
{   node DL = NULL;
    int n, data;
    printf("nhap n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("nhap data [%d] ",i);
        scanf("%d",&data);
        DL = Push_pack(DL,data);
    }
    Change_Data(DL,2,10);
    for (int i = 0; DL != NULL; DL = DL ->pNext)
    {
        printf("%d\n",DL->data);
    }
    
    return 0 ;
}