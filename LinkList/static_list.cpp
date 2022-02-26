#include <stdio.h>

typedef struct{                 
    int date[10];         
    int length;         //当前元素个数
}SqLsit;

void ReadList(SqLsit L){       //读取表中元素
    for(int i=0; i<L.length; i++){
        printf("%d ",L.date[i]);
    }
    printf("\n");
}

int main(){
    SqLsit L; 
    L.length = 0;
    for(int i=0; i<5; i++){     //赋值
        L.date[i] = i;
        L.length ++;
    }

    ReadList(L);
    return 0 ;
 }