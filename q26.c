#include <stdio.h> 

int main(){

float x1,x2,y1,y2;

puts("digite o terceiro numero");
scanf("%f",&x1);
puts("digite o terceiro numero");
scanf("%f",&x2);
puts("digite o terceiro numero");
scanf("%f",&y1);
puts("digite o terceiro numero");
scanf("%f",&y2);

printf("a distancie é %.2f\n",sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));

return 0;
}