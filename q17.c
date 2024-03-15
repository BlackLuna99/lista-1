#include <stdio.h>
#include <stdlib.h>

int main(){

int inteiro;

puts("digite um numero inteiro");
scanf("%d",&inteiro);

printf("o modulo do numero %d é %d\n",inteiro,abs(inteiro));
return 0;
}