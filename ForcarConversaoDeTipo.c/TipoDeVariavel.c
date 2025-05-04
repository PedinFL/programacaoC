/*#include <stdio.h>

 
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float )  a / b; // 'a' é convertido implicitamente para float
 
   printf("Quociente %.2f\n", quociente);

}*/

#include <stdio.h>

    int main(){
        int numero1, numero2;
        int soma, subtracao, multiplicacao;
        float divisao;

        printf("Entre com o PRIMEIRO número: \n");
        scanf("%d", &numero1);
        printf("Entre com o SEGUNDO número: \n");
        scanf("%d", &numero2);
    
    //Será feito a soma de dois valores.    
        soma = numero1 + numero2;
    
    //Será feito a multiplicação de dois valores.
        multiplicacao = numero1 * numero2;
    
    //Será feito a subtração de um valor
        subtracao = numero1 - numero2;
    
    //Será feito a divisao de dois valores.
        divisao = (float) numero1 / numero2;

        //divisao = (float) numero1 / numero2;

        printf("A soma de %d + %d é: %d\n", numero1, numero2, soma);
        printf("A subtracao de %d - %d é: %d\n", numero1, numero2, subtracao);
        printf("A multiplicação de %d x %d é: %d\n", numero1, numero2, multiplicacao);
        printf("A divisão de %d / %d é: %.2f\n", numero1, numero2, divisao);



    }