/*#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    float media;

    //media = nota1 + nota2 / 2;
    
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) /3;

    printf("A média do aluno é: %.2f\n", media);

    return 0;

}*/
#include <stdio.h>

    int main(){

        char produtoA[30] = "Produto A";
        char produtoB[30] = "Produto B";

        unsigned int estoqueA = 100;
        unsigned int estoqueB = 200;

        float valorA = 10.50;
        float valorB = 20.40;

        unsigned estoqueMinimoA = 500;
        unsigned estoqueMinimoB = 2500;

        double valorTotalA, valorTotalB;

        int resultadoA, resultadoB;
        

        printf("O produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
        printf("O Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

        resultadoA = estoqueA > estoqueMinimoA;
        resultadoB = estoqueB > estoqueMinimoB;


        printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
        printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

        printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

        return 0;
    }