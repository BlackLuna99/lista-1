#include <stdio.h>

int main(){

float raio;

puts("digite o raio do circulo");
scanf("%f",&raio);

printf("o valor de diamentro é %f",raio*2);
printf("o valor de circunferencia é %f\n",raio*2*3.14159);
printf("o valor de área é %f\n",raio*raio*3.14159);

return 0;
}