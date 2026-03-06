/* Primeiro teste de conhecimentos, 
onde irei criar um programa que irá solicitar:
- a entrada dos dados dos alunos
- depois imprimir os valores ao final.*/

#include <stdio.h>

int main(){

// Declaração das variáveis

    int idade, matricula;
    float altura;
    char nome[50];

// Coleta dos dados

printf("Digite o nome do aluno:\n");
fgets(nome, 50, stdin);

printf("Digite a idade do aluno:\n");
scanf("%d", &idade);

printf("Digite o número de matrícula do aluno:\n");
scanf("%d", &matricula);

printf("Digite a altura do aluno:\n");
scanf("%.2f", &altura);

// Exibição dos dados

printf("1-Nome do aluno: %s2-Número de matrícula: %d\n3-Idade: %d\n4-Altura: %.2f\n", nome, matricula, idade, altura);


return 0;

}

