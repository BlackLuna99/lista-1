#include <stdio.h> 

int main(){

int tempo,s,m,h;

puts("digite um tempo em segundos");
scanf("%d",&tempo);

h=tempo/3600;
m=(tempo%3600)/60;
s=(tempo%3600)%60;

printf("o numero na ordem inversa é %d horas, %d minutos e %d segundos\n",h,m,s);

return 0;
}