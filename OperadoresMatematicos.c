#include <stdio.h>

int main(){

/*/ operadores aritimeticos

    int numero1, numero2;
    int soma, subtracao, divisao, multiplicacao;

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
    divisao = numero1 / numero2;
    
    printf("A soma de %d + %d é: %d\n", numero1, numero2, soma);
    printf("A subtracao de %d - %d é: %d\n", numero1, numero2, subtracao);
    printf("A multiplicação de %d x %d é: %d\n", numero1, numero2, multiplicacao);
    printf("A divisão de %d / %d é: %d\n", numero1, numero2, divisao);

    return 0;
}*/

    //Operadores de atribuíção

    /*Atribuição simples (==)
     Atribuição com Soma (+=)
     Atribuição com Subtracao (-=)
     Atribuição com Multiplicacao (*=)
     Atribuição com Divisao (/=)*/
/*
    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    resultado += 20;
    printf("Resultado: %d\n", resultado);

    resultado -= numero1;
    printf("resultado: %d\n", resultado);

    resultado *= 5;
    printf("Resultado: %d\n", resultado);
    
    resultado /= 2;
    printf("Resultado: %d\n", resultado);
*/
/* Operadores de;
     Incremento (++) = +1
 Aumentar o valor de uma variavel em uma unidade
     Decremento (--) = -1
 Diminuir o valor de uma variavel em uma unidade
     Pre incremento (--a)
     Pos Incremento (a--)

     */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    
//Numero1 = numero1 + 1
//numero1 = numero += 1
    //numero1++;
    //Pos Incremento
    //Resultado = numero1;
    //numero++/
   resultado = numero1++;
    printf("Apos Pós-incremento - Numero 1: %d - Resultado %d\n", numero1, resultado);
//Numero1 = numero1 - 1
//Numero1 = numero1 -= 1
    //numero1--;
    resultado = ++numero1;
    printf("Apos Pre-incremento - Numero 1: %d - Resultado %d\n", numero1, resultado);
resultado = numero1--;
resultado = numero1++;
    printf("Apos Pós-incremento - Numero 1: %d - Resultado %d\n", numero1, resultado);
resultado= --numero1;
printf("Apos Pós-incremento - Numero 1: %d - Resultado %d\n", numero1, resultado);

resultado = numero1++;
    printf("Apos Pós-incremento - Numero 1: %d - Resultado %d\n", numero1, resultado);



}  