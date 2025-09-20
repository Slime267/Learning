#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

struct Node
{
    ElemType data;
    Node *next;
};

Node *head;

void ListTraverse()
{
    Node *p = head->next;
    while(p)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

void ListCreateHead(int n)
{
    Node *temp;

    for (int i=0;i<n;i++)
    {
        ElemType x;
        scanf("%d",&x);
        temp = (Node *)malloc(sizeof(Node));
        temp->data = x;
        temp->next = head->next;
        head->next = temp;
    }
}

void ListCreateTail(int n)
{
    Node *temp,*tail;

    tail = head;
    while(tail->next)
        tail = tail->next;

    for (int i=0;i<n;i++)
    {
        ElemType x;
        scanf("%d",&x);
        temp = (Node *)malloc(sizeof(Node));
        temp->data = x;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }
}

void ElemInsert(int n,ElemType x)
{
    int i = 0;
    Node *p = head;
    Node *temp;

    while (p && i < n-1)
    {
        p = p->next;
        i++;

        if (p == NULL)
        {
            printf("插入位置错误！\n");
            return;
        }
    }
    
    temp = (Node *)malloc(sizeof(Node));
    temp ->data = x;
    temp->next = p->next;
    p->next = temp;
}

void ElemDelete(int n,ElemType *e)
{
    int i = 0;
    Node *p = head;

    while (p && i < n-1)
    {
        p = p->next;
        i++;

        if (p == NULL)
        {
            printf("删除位置错误！\n");
            return;
        }
    }
}

int ElemLocate(ElemType e)
{
    int i = 0;
    Node *p = head;

    while(p->data != e)
    {
        p = p->next;
        i++;

        if (p == NULL)
            return -1;
    }

    return i;
}

void ElemGet(int n,ElemType *e)
{
    int i = 0 ;
    Node *p = head;

    while(i < n)
    {
        i++;
        p = p->next;

        if (p == NULL)
        {
            printf("查找位置错误！\n");
            return;
        }
    }

    *e = p->data;

    return;
}

int main()
{
    head = (Node *)malloc(sizeof(Node));
    head->data = NULL;
    head->next = NULL;

    ElemType e;

    ListCreateHead(3);
    ListCreateTail(2);
    ElemInsert(5,10);
    ListTraverse();
    ElemGet(6,&e);
    printf("%d\n",e);
    return 0;
}