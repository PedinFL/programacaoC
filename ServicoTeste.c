#include <stdio.h>

    int main(){
        
        //Usuario irá definir um valor à variavel Idade.
        int nascimento;
        int idade = 2025;

        nascimento = nascimento - idade;

        printf("Digite sua idade: \n");
        scanf("%d - 2025", &nascimento);

        //Agora vamos utilizar do if else para negar ou autorizar uma situação
       if(nascimento >= 18){
        printf("Maior de idade, você poderá entrar.\n");
       }
       else if (nascimento < 18){
        printf("Menor de idade, você não pode entrar!\n");
       }
       

    return 0;
    }