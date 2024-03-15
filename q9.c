#include <stdio.h>

int main(){

int x;

puts("Escreva um valor para x.");
scanf("%d",&x);

printf("O sucessor quadardo é %d.\n",++x);
printf("O antecessor numero é %d.\n",--x);
return 0;
}