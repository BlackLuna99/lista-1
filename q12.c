#include <stdio.h>

int main(){

int x,y;

puts("digite um numero para x");
scanf("%d",&x);
puts("digite um numero para y");
scanf("%d",&y);

printf("x+y=%d\n",x+y);
printf("x-y=%d\n",x-y);
printf("x*y=%d\n",x*y);
printf("x/y=%f\n",(float)x/y);

return 0;
}