#include<stdio.h>
int main(){
int num, pos;
printf("enter a number: \n");
scanf("%d", &num);

printf("position to toggle: \n ");
scanf("%d", &pos);

int mask = 1<<pos;
int result = num^mask;

printf("after toggling: %d\n", result);
return 0;
}