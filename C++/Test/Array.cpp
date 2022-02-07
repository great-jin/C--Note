#include <stdio.h>

//遍历输出整型数组
void Test1(int a[], int n){
     for(int i=0; i<n;i++){
          printf("%d",a[i]);
     }
}

//遍历输出字符串
void Test2(char a[], int n){
     for(int i=0; i<n;i++){
          printf("%c",a[i]);
     }
}

int main(){
     char a[]={'w','o','r','l','d'};    // C语言字符串就是字符数组
     printf("%d %d\n",a, &a[0]);        // 输出a[0]内存地址, 等价于 &a[0]
     printf("%c %c\n",a[0],a[4]);       // %c：逐个输出
     printf("%s\n",a);                  // %s：完整输出，遇到空格结束； 
     printf("\n");

     int d[]={1,2,3,4,5,6};
     printf("%d\n",d);             // 输出d[0]内存地址
     printf("%d\n",d[0]);
     printf("\n");

     int len1 = sizeof(d)/sizeof(d[0]);
     Test1(d,len1);
     printf("\n");

     int len2 = sizeof(a)/sizeof(a[0]);
     Test2(a,len2);
     printf("\n");
  
     return 0;
}
