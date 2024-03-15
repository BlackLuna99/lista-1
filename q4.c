#include <stdio.h>

int main(){

int x;

puts("Escreva um numero para x.");
scanf("%d",&x);

printf("x*3=%d,x*4=%d,x/2=%.2f\n",x*3,x*4,(float)x/2);
return 0;
}