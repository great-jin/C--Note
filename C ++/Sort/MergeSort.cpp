#include <stdio.h>

int main(){
    int a[]={2,4,5,6,7} , b[]={9,12,15,62,86,99} ;
    int a_len = sizeof (a) / sizeof (a [0]);
    int b_len = sizeof (b) / sizeof (b [0]);
    
    int c[a_len + b_len];
    int c_len = sizeof (c) / sizeof (c [0]);

    int i,j,k;

    for(i=j=k=0 ; i<a_len,j<b_len,k<c_len ; k++)
    {
        if(a[i] > b[j])
        {
            c[k] = b[j];
            j++;
        }
        else
        {
            c[k] = a[i];
            i++;
        }
    }
    if(i >= a_len) //B数组没取完，直接赋值过来
    {
        while(j < b_len) c[k++] = b[j++]; 
    } 
    if(j >= b_len)   //A数组没取完，直接赋值过来
    {
        while(i < a_len) c[k++] = a[i++]; 
    } 

    for(i = 0; i < c_len ; i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    return 0;
}