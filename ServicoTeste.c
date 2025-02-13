/*#include <stdio.h>




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
    }*/
 #include <stdio.h>

    int main(){

        float nota;
        
        printf("Qual foi sua nota? \n");
        scanf("%f", &nota);

        if (nota >= 6.5 && > 8.0){ 
            printf("Você poderá refazer a prova.\n");
        }
        else if (nota <= 8.1)
        {
            printf("Parabéns, você está aprovado!");
        }
        
    



        return 1;


    }