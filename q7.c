#include <stdio.h>

int main(){

int segundos,minutos,horas;

puts("digite um numero para horas");
scanf("%d",&horas);
puts("digite um numero para minutos");
scanf("%d",&minutos);
puts("digite um numero para segundos");
scanf("%d",&segundos);

printf("o total de segundos é %d",(segundos+(minutos*60)+(horas*3600)));

return 0;
}