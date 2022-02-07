#define Maxsize = 10;
#define i = 10;
#define j = 10;
#define MaxVexNum = 10;


//顺序表-静态存储
typedef struct{                 
    int date[10];         
    int length;     //当前元素个数
}SqLsit;


//顺序表-动态存储
typedef struct{                 
    int *date;         
    int length, MaxSize;     //当前个数和最大容量
}SeqList;


//链表-单链表
typedef struct LNode{ 
    int date;       //存值
    struct LNode *next;     //指针域
}LNode, *LinkList;


//链表-双链表
typedef struct LNode
{
    int date;       //存值
    struct LNode *prior, *next;     //前驱，后继
}LNode, *LinkList;


//栈-顺序栈
typedef struct{                 
    int date[10];         
    int top;     //栈顶
}SqStack;


//栈-链栈
typedef struct LinkNode{                 
    int *date;         
    struct LinkNode *top;     //栈顶
}*LiStack;


//队列-顺序队列
typedef struct{                 
    int date[10];         
    int front, rear;     //队头和队尾
}SqQueue;


//队列-链队
typedef struct {                 
    int date;         
    struct LinkNode *next;     
}LinkNode;
typedef struct {        
    LinkNode *front, *rear;     //队头和队尾
}*LiQueue;


//串-静态存储
typedef struct{                 
    char ch[10];         
    int length;     //串的长度
}SString;


//串-动态存储
typedef struct{                 
    char *ch;         
    int length;     //串的长度
}HString;


//树—孩子表示法
typedef struct CSNode{                 
    int date;         
    struct CSNode *firstchild, *nextsibling;  
}CSNode, *CSTree;


//树—双亲表示法
typedef struct {                 
    int date;         
    int parent;     
}PTNode;
typedef struct {        
    PTNode nodes[10];     //队头和队尾
    int n;
}PTress;


//二叉树-顺序存储
struct TreeNode{                 
    int date;         
    bool isEmpty;       //结点是否空
}T[10];


//二叉树-链式存储
typedef struct BitNode{                 
    int date;         
    struct BitNode *lchild, *rchild;  
}BitNode, *BitTree;


//图-邻接矩阵
typedef struct {                 
    int date[10];         
    int edge[i][j]; 
    int vexNum, arcNum;     //顶点数和边数 
}MGraph;


//图-邻接表
typedef struct ArcNode{     //边表结点                 
    int adjvex;         
    struct ArcNode *next;
}ArcNode;

typedef struct VNode{       //顶点           
    int data;                
    VNode *first; 
}VNode, AdjList[MaxVexNum];

typedef struct { 
    AdjList vertices;
    int vexNum, arcNum;     //顶点数和边数
}ALGraph;