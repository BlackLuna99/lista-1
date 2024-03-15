#include <stdio.h>

int main(){

float real,dolar;

puts("Escreva a qauntidade de dinheiro em reais.");
scanf("%f",&real);
puts("Escreva a cotação do dolar atual.");
scanf("%f",&dolar);

printf("O sucessor quadardo é %.2f.\n",real*dolar);
return 0;
}