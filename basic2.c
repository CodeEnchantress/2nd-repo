#include<stdio.h>

int pow4(int x){

    return x*x*x*x;
}

int main(void){

    int a;

    printf("please enter a number : ");
    scanf("%d",&a);

    int res=pow4(a);
    
    printf("%d" , res);
}

