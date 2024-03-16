#include <stdio.h> 
#include <math.h>

int main(){

double a,b,c;

puts("digite o primeiro numero");
scanf("%lf",&a);
puts("digite o segundo numero");
scanf("%lf",&b);
puts("digite o terceiro numero");
scanf("%lf",&c);

printf("a media aritmétca é %.2f\n",(a+b+c)/3);
printf("a media geometrica é %.2f\n",(pow(a*b*c,3)));

return 0;
}