#include <stdio.h>

int main(){

int A,B;

puts("digite um numero para A");
scanf("%d",&A);
puts("digite um numero para B");
scanf("%d",&B);

A=A^B;
B=A^B;
A=A^B;

printf("A=%d\nB=%d\n",A,B);
return 0;
}