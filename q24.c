#include <stdio.h> 

int main(){

int x,n;

puts("digite um numero para x");
scanf("%d",&x);
puts("digite um numero para n");
scanf("%d",&n);

printf("o numero %d vezes 2 elevado a %d é %d\n",x,n,x*2<<(n-1));

return 0;
}