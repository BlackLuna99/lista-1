#include <stdio.h>

int main(){

float comprimento,largura,altura;

puts("Escreva um valor para comprimento.");
scanf("%f",&comprimento);
puts("Escreva um valor para largura.");
scanf("%f",&largura);
puts("Escreva um valor para altura.");
scanf("%f",&altura);

printf("O sucessor quadardo é %.2f.\n",comprimento*largura*altura);
return 0;
}