#include <stdio.h>

    int main(){
        
        //Usuario irá definir um valor à variavel nascimento.
        int nascimento;
        int ano = 2025;
        int idade;


        printf("Digite seu ano de nascimento: \n");
        scanf("%d", &nascimento);

            idade = ano - nascimento;


        //Agora vamos utilizar do if else para negar ou autorizar uma situação
       if(idade >= 18){
        printf("Maior de idade, você pode entrar.\n");
       }
       else if (idade < 18){
        printf("Menor de idade, você não pode entrar!\n");
       }
       

    return 0;
    }s