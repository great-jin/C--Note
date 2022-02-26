#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int date;                   //存值
    struct LNode *prior, *next; //前驱，后继
} LNode, *LinkList;

LinkList HeadInit(LinkList &L)
{
    int x;
    LNode *s; //声明节点

    L = (LinkList)malloc(sizeof(LNode)); //创建头节点
    L->next = NULL;

    printf("Please input a series of number, when zero stop!\n");
    scanf("%d", &x);
    while (x != 0)
    {
        s = (LNode *)malloc(sizeof(LNode)); //分配空间
        s->date = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

void ReadList(LinkList L)
{
    L = L->next;
    while (L != NULL)
    {
        printf("%d ", L->date);
        L = L->next;
    }
    printf("\n");
}

LNode *GetNode(LinkList L, int i)
{ //按位序查找元素
    int j = 1;
    LNode *p = L->next; //L是头指针，L->next 指向头节点，给P
    if (i == 0)
    {
        return L;
    }
    if (i < 1)
    {
        return NULL;
    }
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    return p;
}

int main()
{
    LinkList L;  //声明链表
    HeadInit(L); //初始化

    int loc;
    printf("Please input locate: ");
    scanf("%d", &loc);

    LNode *t = GetNode(L, loc); //获取对应下标结点
    int value = t->date;
    printf("The location of %d is: %d\n", loc, value);

    return 0;
}