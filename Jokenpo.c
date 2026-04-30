#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Regras básicas Jokenpô:
1 - Pedra ganha para tesoura
2 - Tesoura ganha para papel
3 - Papel ganha para pedra
4 - Mesma escolha Empate */

int main(){

    // Declaração de variáveis
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("*** Jogo de Jokenpô ***\n");
    
    printf("Selecione uma das opções abaixo... \n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    // Cases

    switch (escolhaJogador)
    {
    case 1:
        srand(time(0));
        escolhaComputador = (rand() % 3) + 1;

        //Pedra perde para Papel
        if (escolhaComputador == 2){
            printf("Você perdeu!!!\n");
            printf("Escolha do Computador foi Papel!\n");} 

            //Pedra ganha para Tesoura
            else if(escolhaComputador == 3){
                printf("Você Venceu!!!\n");
                printf("Escolha do Computador foi Tesoura!!!\n");}
                
            //Pedra empata com Pedra
            else{
                printf("Empate!!!\n");
                printf("Escolha do Computador foi Pedra!!!\n");}
    break;

    case 2:
        srand(time(0));
        escolhaComputador = (rand() % 3) + 1;

        //Papel ganha para Pedra
        if(escolhaComputador == 1){
            printf("Você Venceu!!!\n");
            printf("Escolha do Computador foi Pedra!!!\n");}
        
            //Papel perde para Tesoura

            else if (escolhaComputador == 3){
                printf("Você Perdeu!!!\n");
                printf("Escolha do Computador foi Tesoura!!!\n");}

            //Papel Empata com Papel

            else{
                printf("Empate!!!\n");
                printf("Escolha do Computador foi Papel\n");}
    break;

    case 3:
        srand(time(0));
        escolhaComputador = (rand() % 3) + 1;

        //Tesoura Perde para Pedra
        if(escolhaComputador == 1){
            printf("Você Perdeu!!!\n");
            printf("Escolha do Computador foi Pedra!!!\n");}

            //Tesoura Ganha para Papel
            else if(escolhaComputador == 2){
                printf("Você Venceu!!!\n");
                printf("Escolha do Computador foi Papel!!\n");}

            //Tesoura Empata com Tesoura
            else{
                printf("Empate!!\n");
                printf("Escolha do Computador foi Tesoura!!\n");}
    break;

    default:
        {printf("Opção Inválida!!!!\n");}
        
    }

    
return 0;
}
