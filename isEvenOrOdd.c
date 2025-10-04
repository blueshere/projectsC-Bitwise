#include<stdio.h>
void checkEvenOrOdd(int num){
    if ((num&1)==0){
        printf("\n%d is an even number", num);
    }else {
        printf("\n%d is an odd number", num);
    }
}
int main(){
    int num1= 34;
    int num2=7;
    int num3 = 0;
    printf("Checking numbers using Bitwise Operators:");
    checkEvenOrOdd(num1);
    checkEvenOrOdd(num2);
    checkEvenOrOdd(num3);
    return 0;
    }