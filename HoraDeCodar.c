#include <stdio.h>

    int main(){

        float temperatura, umidade;
        unsigned int estoque, estoqueMinimo = 1000;
        

        printf("Entre com a temperatura: \n");
        scanf("%f", &temperatura);
        printf("Entre com a umidade: \n");
        scanf("%f", &umidade);
        printf("Entre com o estoque: ");
        scanf("%u", &estoque);

        if (temperatura > 30){
            printf("A temperatura está alta!!!\n");
        } else {

            printf("A temperatura está normal.\n");
        }
        if (umidade > 30){
            printf("A umidade está acima!\n");
        } else {
            printf("Umidade está dentro dos parametros.\n");

        }
        if (estoque < estoqueMinimo){
            printf("O Estoque está abaixo do minimo!\n");
        } else {

            printf("O estoque está dentro dos Parametros. \n");

        }
        



    }