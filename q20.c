#include <stdio.h> 

int main(){
    int a;

puts("digite um numero");
scanf("%d",&a);

printf("o numero %d é %s\n",a,!(a%2)?"par":"impar");

return 0;
}