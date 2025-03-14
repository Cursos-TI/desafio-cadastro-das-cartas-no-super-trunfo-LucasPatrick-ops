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
    Cidade cidades[10] = {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Preenchendo os dados das cidades
    {1, "Vitoria", 1973280, 1295334, 1846783, 768},
        {2, "Ragathan", 1578498, 1273857, 9189845, 786},
        {3, "Varaton", 1756286, 7365177, 4851658, 614},
        {4, "Poramota", 1658436, 9054384, 1897054, 559},
        {5, "Tomario", 1829768, 7589131, 1985022, 145},
        {6, "Uratio", 1859325, 1295835, 7182945, 975},
        {7, "Homario", 9708634, 2938764, 6426789, 768},
        {8, "Irapole", 7581962, 9852794, 2937489, 598},
        {9, "Yapotu", 2397567, 5492856, 5432856, 875},
        {10, "Katora", 2175384, 2153878, 5132857, 328}
    };
    int codigoUsuario1, codigoUsuario2;
    Cidade cidade1, cidade2;
    int encontrou1 = 0, encontrou2 = 0;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite a primeira cidade (1 a 10): ");
    scanf("%d", &codigoUsuario1);
    printf("Digite a segunda cidade (1 a 10): ");
    scanf("%d", &codigoUsuario2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Buscar as cidades pelo código
    for (int i = 0; i < 10; i++) {
        if (cidades[i].codigo == codigoUsuario1) {
            cidade1 = cidades[i];
            encontrou1 = 1;
        }
        else if (cidades[i].codigo == codigoUsuario2) {
            cidade2 = cidades[i];
            encontrou2 = 1;
        }
    }

    // Se não encontrar as duas cidades, exibe erro
    if (!encontrou1 || !encontrou2) {
        printf("Código de cidade inválido!\n");
        return 1;
    }

    // Exibir informações das cidades
    printf("\nInformações da Cidade 1: %s\n", cidade1.nome);
    printf("População: %.2f\nÁrea: %.2f\nPIB: %.2f\nTurismo: %d\n", 
           cidade1.populacao, cidade1.area, cidade1.PIB, cidade1.turismo);

    printf("\nInformações da Cidade 2: %s\n", cidade2.nome);
    printf("População: %.2f\nÁrea: %.2f\nPIB: %.2f\nTurismo: %d\n", 
           cidade2.populacao, cidade2.area, cidade2.PIB, cidade2.turismo);

    // Calcular pontuação de cada cidade
    double pontosCidade1 = cidade1.populacao + cidade1.area + cidade1.PIB + cidade1.turismo;
    double pontosCidade2 = cidade2.populacao + cidade2.area + cidade2.PIB + cidade2.turismo;

    printf("\nPontuação da Cidade 1 (%s): %.2f", cidade1.nome, pontosCidade1);
    printf("\nPontuação da Cidade 2 (%s): %.2f\n", cidade2.nome, pontosCidade2);

    // Comparação e exibição da vencedora
    if (pontosCidade1 > pontosCidade2) {
        printf("\nVencedora: %s\n", cidade1.nome);
    } else if (pontosCidade2 > pontosCidade1) {
        printf("\nVencedora: %s\n", cidade2.nome);
    } else {
        printf("\nEmpate entre %s e %s!\n", cidade1.nome, cidade2.nome);
    }

    return 0;
}