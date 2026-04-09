#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas
//08/04 - Foram adicionados 2 novas propriedades nas cartas.
//08/04 - Densidade populacional e PIB per capita.
//09/04 - Inclusão da propriedade SuperPoder e comparação entre cartas


int main() {
        
    // Definição de Variáveis:

    // Variáveis da primeira carta:
    unsigned int populacao1, turistico1;
    char estado1[10], carta_1[5], nomedacidade1[20];
    float area1, PIB1, densidade1, PIBpc1, SuperPoder1;

    //Variáveis da segunda carta:

    unsigned int populacao2, turistico2;
    char estado2[10], carta_2[5], nomedacidade2[20];
    float area2, PIB2, densidade2, PIBpc2, SuperPoder2;

    //Variáveis comparativas

    unsigned int resultadoPOP, ResultadoArea, ResultadoPIB, ResultadoTuri, 
    ResultadoDens, ResultadoPerc, ResultadoPower;

    // Saudação

    printf("*** Bem-vindo(a) ao Super Trunfo ***\n\n");

    printf("*** Iniciaremos agora o cadastro das cartas ***\n\n");

    // Cadastro das Cartas:

    // Coleta de dados da primeira carta:

    printf("Favor inserir as informações da primeira carta!!!\n\n");

    printf("Inserir o código da 1ª carta: ");
    scanf("%s", carta_1);

    printf("Inserir o Estado: ");
    scanf("%s", estado1);

    printf("Inserir o nome da cidade: ");
    scanf("%s", nomedacidade1);

    printf("Inserir a quantidade da população da cidade: ");
    scanf("%u", &populacao1);

    printf("Inserir a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Inserir o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Inserir o número de pontos turísticos: ");
    scanf("%u", &turistico1);

    // Cálculo da densidade demográfica e PIB per capita da 1ª carta.
    densidade1 = (float) populacao1 / area1;
    PIBpc1 = (float) PIB1 / populacao1;

    // Cálculo do Super Poder da 1ª carta.

    SuperPoder1 = (float) populacao1 + area1 + PIB1 + densidade1 + PIBpc1;


    printf("\nDados da primeira carta coletados!!!\n\nFavor inserir dados da segunda carta:\n\n");
    
    //Coleta de dados da segunda carta:

    printf("Inserir o código da 2ª carta:");
    scanf("%s", carta_2);

    printf("Inserir nome do Estado: ");
    scanf("%s", estado2);

    printf("Inserir nome da cidade:");
    scanf("%s", estado2);

    printf("Inserir a quantidade da população da cidade: ");
    scanf("%u", &populacao2);

    printf("Inserir a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Inserir o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Inserir o número de pontos turísticos: ");
    scanf("%u", &turistico2);

    // Cálculo da densidade demográfica e PIB per capita da 2ª carta.
    densidade2 = (float) populacao2 / area2;
    PIBpc2 = (float) PIB2 / populacao2;

    // Cálculo do Super poder da 2ª carta.

    SuperPoder2 = (float) populacao2 + area2 + PIB2 + densidade2 + PIBpc2;


    printf("Dados coletados!!!!!!\n Segue abaixo as informações de ambas as cartas:\n");
        
    // Exibição dos Dados das Cartas:

    printf("\n*** Segue dados da 1ª carta: ***\n");

    printf("\nCódigo da carta: %s\n", carta_1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %u\n", populacao1);
    printf("Área em Km²: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de pontos turísticos: %u\n", turistico1);
    printf("Densidade demográfica: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", PIBpc1);
    printf("Super Poder: %.2f\n", SuperPoder1);
    

    printf("\n*** Segue dados da 2ª carta: ***\n");

    printf("\nCódigo da carta: %s\n", carta_2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %u\n", populacao2);
    printf("Área em Km²: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %u\n", turistico2);
    printf("Densidade demográfica: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", PIBpc2);
    printf("Super poder: %.2f\n", SuperPoder2);

    // Comparação entre cartas

    printf("*** Vamos a Batalha ***\n\n");
    printf("*** Caso resultado da disputa das características de '1' o primeiro jogador é o vencedor.\n\nCaso o resultado seja '0' o 2º jogador é o vencedor ***");

    resultadoPOP = populacao1 > populacao2;
    printf("Na disputa de populações o vencedor é: %d\n", resultadoPOP);

    ResultadoArea = area1 > area2;
    printf("Na disputa de áreas o vencedor é: %d\n", ResultadoArea);

    ResultadoPIB = PIB1 > PIB2;
    printf("Na disputa de PIB o vencedor é: %d\n", ResultadoPIB);

    ResultadoTuri = turistico1 > turistico2;
    printf("Na disputa de pontos turísticos o vencedor é: %d\n", ResultadoTuri);

    ResultadoDens = densidade1 < densidade2;
    printf("Na disputa de densidade demográfica o vencedor é: %d\n", ResultadoDens);

    ResultadoPerc = PIBpc1 > PIBpc2;
    printf("Na disputa de PIB per capita o vencedor é: %d\n", ResultadoPerc);

    ResultadoPower = SuperPoder1 > SuperPoder2;
    printf("Na disputa de super poderes o vencedor é: %d\n", ResultadoPower);


    return 0;
