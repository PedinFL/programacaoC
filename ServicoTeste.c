#include <stdio.h>

    int main(){
        
        //Usuario irá definir um valor à variavel nascimento.
        int nascimento;
        int ano = 2007;
        int idade;

        idade = nascimento - ano;

        printf("Digite seu ano de nascimento: \n");
        scanf("%d", &nascimento);

        //Agora vamos utilizar do if else para negar ou autorizar uma situação
       if(idade >= 18){
        printf("Maior de idade, você poderá entrar.\n");
       }
       else if (idade < 18){
        printf("Menor de idade, você não pode entrar!\n");
       }
       

    return 0;
    }