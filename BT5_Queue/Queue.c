#include <stdio.h>
#include <stdbool.h>
bool IsEmpty(int **ptr_F , int **ptr_R)
{
    if (**ptr_F == **ptr_R)
    {
        return 1;
    }
    else return 0;
    
}
void Enqueue(int *ptr_rear,int data,int Queue[],int sizeQueue)
{
    if (*ptr_rear != sizeQueue)
    {
        Queue[*ptr_rear] = data;
        (*ptr_rear)++;
    }
    else printf("Queue is full\n"); 

}
void Dequeue(int *ptr_rear,int *ptr_front,int Queue[])
{
    if (IsEmpty(&ptr_rear,&ptr_front))
    {
        printf("ERR\n");
    }
    else{
        Queue[*ptr_front] = 0;
        (*ptr_front)++;
    }
    
}

int Front(int *ptr_rear,int *ptr_front,int Queue[])
{
    if (IsEmpty(&ptr_rear,&ptr_front))
    {
        printf("Queue is Empty\n");
    }
    else return Queue[*ptr_front];
}
int main()
{
    int sizeQueue = 5;
    int Queue[sizeQueue];
    int n,data,front = 0,rear =0;
    do
    {
        printf("nhap n phan tu: ");
        scanf("%d",&n);
    }
    while (n<0);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&data);
        Enqueue(&rear,data,Queue,sizeQueue);
    }
    printf("phan tu dau tien cua Queue: %d\n",Front(&rear,&front,Queue));
    Dequeue(&rear,&front,Queue);
    printf("phan tu dau tien cua Queue: %d\n",Front(&rear,&front,Queue));
    return 0;
}