#include <stdio.h>

int main(){

float altura;
char genero;

puts("Escreva a sua altura em metros.");
scanf("%f",&altura);
puts("qual o seu genero.\nM=masculino\nF=feminino");
scanf(" %c",&genero);

switch(genero){
    case 'M':
    printf("o seu peso ideal é %.2f",72.7*altura-58);
    break;
    case 'F':
    printf("o seu peso ideal é %.2f",62.1*altura-44.7);
    break;
    default:
    puts("genero invalido");
}
return 0;
}