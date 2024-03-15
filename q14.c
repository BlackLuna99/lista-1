#include <stdio.h>

int main(){

int temperatura;

puts("digite a temperatura em celcius");
scanf("%d",&temperatura);

printf("A=%d\n",(temperatura*9+160)/5);
return 0;
}