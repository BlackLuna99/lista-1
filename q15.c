#include <stdio.h>

int main(){

int dias;

puts("digite a quantidade de dias trabalhados");
scanf("%d",&dias);

if(dias>=0||dias<=10){
    printf("\no valor liquido so salario é %.2f",(float)(dias*50.25)*0.9);
}
    else if(dias>10||dias<=20){
            printf("\no valor liquido so salario é %.2f",(float)((dias*50.25)*0.9)*1.2);
        }
        else if(dias<20){
                printf("\no valor liquido so salario é %.2f",(float)((dias*50.25)*0.9)*1.3);
        }

return 0;
}