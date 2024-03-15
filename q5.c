#include <stdio.h>

int main(){

float x;

puts("qual o valor da conta a ser paga.");
scanf("%f",&x);

printf("o valor total a ser pago com o acresimo de 10%% é %.2f",x*1.1);

return 0;
}