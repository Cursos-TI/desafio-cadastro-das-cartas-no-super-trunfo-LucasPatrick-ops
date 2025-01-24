#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
typedef struct {
    int codigo;
    char nome[20];
    float populacao;
    float area;
    double PIB;
    int turismo;
} Cidade;

int main() {
    // Criei um array de cidades
    Cidade cidades[3];
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Primeira cidade.
    cidades[0].codigo = 1;
    strcpy(cidades[0].nome, "Vitoria");
    cidades[0].populacao = 250000.0;
    cidades[0].area = 999.999;
    cidades[0].PIB = 2342.54;
    cidades[0].turismo = 500;
    //Segunda cidade.
    cidades[1].codigo = 2;
    strcpy(cidades[1].nome, "Ragathan");
    cidades[1].populacao = 400000.0;
    cidades[1].area = 600.256;
    cidades[1].PIB = 1455.12;
    cidades[1].turismo = 30;
    //Terceira cidade.
    cidades[2].codigo = 3;
    strcpy(cidades[2].nome, "Varaton");
    cidades[2].populacao = 900000.0;
    cidades[2].area = 800.000;
    cidades[2].PIB = 9800.00;
    cidades[2].turismo = 600;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da cidade: ");
    scanf("%d", &cidades[0].codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidades[0].nome);
    
    printf("Digite a população: ");
    scanf("%f", &cidades[0].populacao);
    
    printf("Digite a área: ");
    scanf("%f", &cidades[0].area);
    
    printf("Digite o PIB: ");
    scanf("%lf", &cidades[0].PIB);
    
    printf("Digite o número de turistas: ");
    scanf("%d", &cidades[0].turismo);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nInformações da Cidade:\n");
    printf("Código: %d\n", cidades[0].codigo);
    printf("Nome: %s\n", cidades[0].nome);
    printf("População: %.2f\n", cidades[0].populacao);
    printf("Área: %.2f\n", cidades[0].area);
    printf("PIB: %.2f\n", cidades[0].PIB);
    printf("Turismo: %d\n", cidades[0].turismo);

    return 0;
}
