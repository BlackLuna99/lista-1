#include <stdio.h> 

int main(){
    int a,b;

puts("digite o primeiro numero");
scanf("%d",&a);
puts("digite o segundo numero");
scanf("%d",&b);

printf("o numero %d%s é multiplo de %d\n",a,(a%b)?"":" não",b);

return 0;
}