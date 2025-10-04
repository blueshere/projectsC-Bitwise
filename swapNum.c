#include<stdio.h>
void swapNumbers(int* x, int* y){
    printf("Before swap a = %d and b = %d\n", *x, *y);
    if (x!=y){
        *x = *x^*y;
        *y= *x^*y;
        *x= *x^*y;
    }
    printf("After swap a = %d and b = %d\n",*x, *y );
}

int main(){
    int a= 5;
    int b= 7;
    swapNumbers(&a, &b);
    return 0;
}