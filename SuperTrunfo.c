/* #include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
*/

//Teste Pedro

#include <stdio.h>

    int main(){

        char cidade[1];
        float pib;
        float populacao;
        float area;
        int pontos;

        // Primeira cidade

        printf("Digite a cidade: ");
        scanf("%s", cidade);


        //População

        printf("Qual é a populaçao total da cidade? ");
        scanf("%f", &populacao);

        //Pib

        printf("Qual é o Pib da cidade: ");
        scanf("%f", &pib);

        //area
    
        printf("Qual é a Área da cidade? ");
        scanf("%f", &area);

        //Pontos turisticos

        printf("Quantos pontos turisticos tem na cidade? ");
        scanf("%d", &pontos);

            printf("A cidade escolhida tem as seguintes informações: \n\n");

             printf("Cidade: %s\n", cidade);
             printf("população da cidade: %.3f\n", populacao);
             printf("Pib: %.3f\n", pib);
             printf("Área: %.3f km²\n", area);
             printf("Pontos turísticos %d\n", pontos);


    return 0;
    }