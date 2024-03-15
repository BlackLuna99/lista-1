#include <stdio.h>

int main(){

int dias, horas;
float valor_hora, desconto, salario;

puts("digite a temperatura em celcius");
scanf("%d",&horas);
puts("digite a temperatura em celcius");
scanf("%f",&valor_hora);
puts("digite a temperatura em celcius");
scanf("%d",&dias);
puts("digite a temperatura em celcius");
scanf("%f",&desconto);

salario=valor_hora*horas*dias;
desconto/=100;

printf("o valor bruto do salario é %.2f",salario);
printf("o valor liquido do salario é %.2f",salario*desconto);
return 0;
}