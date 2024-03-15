#include <stdio.h> 

int main(){

int numero,u=0,d=0,c;

puts("digite um numero de 3 casas decimais");
scanf("%d",&numero);

c=numero/100;
d=(numero%100)/10;
u=(numero%100)%10;

printf("o numero na ordem inversa é %d%d%d\n",u,d,c);

return 0;
}