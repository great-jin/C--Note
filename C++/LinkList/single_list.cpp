#include <stdio.h>
#include <stdlib.h>

typedef struct LNode{ 
    int date;                   //存值
    struct LNode *next;         //指针域
}LNode,*LinkList;

LinkList Head_Insert(LinkList &L){
    int x;
    LNode *s;           //声明临时节点
    L = (LinkList) malloc (sizeof(LNode));       //创建头节点
    L->next = NULL;
    
    printf("Please input a series of number, when zero stop!\n");
    scanf("%d",&x);
    while(x != 0){
        s = (LNode *) malloc (sizeof(LNode));       //分配空间
        s->date = x;
        s->next = L->next;
        L->next = s;
        scanf("%d",&x);
    }

    return L;
}

void ReadList(LinkList L){
    L = L->next;
    while(L != NULL){
        printf("%d ",L->date);
        L = L->next;
    }
    printf("\n");   
}

void Sort(LinkList &L){
    LNode *p = L->next,*pre;    //p指向头结点
    LNode *r = p->next;         //r指向第一个元素
    
    p->next = NULL;     //将L置为空表，仅含有头结点
    p = r;              //p指向第一个元素

    while (p != NULL)
    {
        r = p->next;    //指向后继，保证不断链
        pre = L;        //头指针

        //此时已经变成两条链表：一条是以 pre 为头指针的链表，另外一条是以 p 为第一个元素的链表

        //插入排序,得到一个递减的链表，根据头插法特性输出时刚好递增
        //如果插入的元素比子表尾的值大，依次往后移动元素
        while (pre->next != NULL && p->date > pre->next->date )
        {
            pre = pre->next;
        }
        p->next = pre->next;    //插入，先链后断
        pre->next = p;
        p = r;
    }
}

LNode *GetNode(LinkList L,int i){       //按位序查找元素
    int j = 1;
    LNode *p = L->next;     //L是头指针，L->next 指向头节点
    if (i == 0){
        return L;
    }
    if (i < 1){
        return NULL;
    }
    while (p && j < i){
        p = p->next;
        j++;
    }
    return p;
}

int main(){
    LinkList L;         //declare list only has a head point

    Head_Insert(L);     // init list by head insert
    Sort(L);            // sort with ascent
    ReadList(L);        // print the list

    LNode *t = GetNode(L,3);      // get the node location
    printf("The location of 3 is: %d\n",t->date);

    return 0;
}