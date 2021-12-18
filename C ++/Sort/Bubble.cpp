#include <stdio.h>

void Swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a[]={6,2,5,3,9,7,1,8};
    int i,j,t;

    for(i < 0 ; i < 7 ; i++){
        //每次都从最后一位向前遍历
        //默认前i位已经有序，故每次只查到(j > i)停止
        for(j = 7 ; j > i ; j--){
            //找到前一位元素比后一位大的元素并交换
            //每一轮循环都把最小的元素冒到前面
            if(a[j-1]>a[j]){
                Swap(a[j-1], a[j]);
            }
        }
    }
 
    for(i = 0 ; i < 8 ; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}