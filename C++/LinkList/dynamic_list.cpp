#include <stdio.h>
#include <stdlib.h>

typedef struct{                 
    int *date;         
    int length,MaxSize;         //当前个数和最大容量
}SeqList;

//扩容：重新分配空间，依次把值赋过去，释放旧空间
//扩容过程不必修改length值
SeqList IncreaseList(SeqList &L,int size){
    int *p;
    p = L.date;
    L.date = (int *) malloc (sizeof(int) * (L.MaxSize + size)); 
    L.MaxSize = L.MaxSize + size;
    for(int i=0; i<L.length; i++){
        L.date[i] = p[i];
    }
    free(p);
    return L;
}

void ReadList(SeqList L){       //读取表中元素
    for(int i=0; i<L.length; i++){
        printf("%d ",L.date[i]);
    }
    printf("\n");
}

int main(){
    SeqList L;
    L.date = (int *) malloc (sizeof(int) * 10);         //分配空间
    L.MaxSize = 10;
    L.length = 0;

    for(int i=0; i<10; i++){        //给线性表赋值
        L.date[i] = i;
        L.length ++;        //length = 10； 位序 = 下标 - 1；
    }
    ReadList(L);

    IncreaseList(L,3);
    L.date[L.length] = 10;      //注意位序与数组下标区别
    L.length += 1;
    ReadList(L);

    return 0 ;
 }