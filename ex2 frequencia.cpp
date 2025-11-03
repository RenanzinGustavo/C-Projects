 /*Exercício 2: Verificação de Nota e Frequência para Aprovação?

Você foi contratado para fazer um sistema simples de avaliação escolar. O programa deve apresentar o seguinte menu:



Verificar se o aluno foi aprovado

Sair

?Se o usuário escolher a opção 1, o programa deve solicitar a nota final (de 0 a 10) e a frequência (porcentagem de presença, de 0 a 100).


O aluno só será aprovado se a nota for maior ou igual a 7 e a frequência for maior ou igual a 75%. Use if else para essa verificação 
dentro do case 1.



Se o usuário escolher a opção 2, o programa deve encerrar.

Se for digitada uma opção inválida, exiba a mensagem "Opção inválida!".*/

#include <stdio.h>

int main(){
    int opcao;
    float nota, presenca;


    printf("Digite a opcao correspondente: \n");
    printf("------------------- \n");
    printf("1 - verificar se o aluno foi aprovado:\n");
    printf("2 - Sair \n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Qual foi sua nota?\n ");
            scanf("%f", &nota);
            printf("Qual foi a sua frequencia \n ");
            scanf("%f", &presenca);
            if(nota>=7 && presenca>=75 ){
                printf("Aprovado");

            }else{
                printf("Reprovado");
            }    
            break;
        case 2:
            printf("Sair");
            break;
        
        default:
            printf("Opcao invalida");    
    }
    





    return 0;
}
