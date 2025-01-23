#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Primeira cidade.
    int codigo = 1;
    char nome[20] = "Vitoria";
    float populacao = 250.000;
    float area = 999.999;
    double PIB = 2342.54;
    int turismo = 500;
    //Segunda cidade.
    int codigo = 2;
    char nome[20] = "Ragathan";
    float populacao = 400.000;
    float area = 600.256;
    double PIB = 1455.12;
    int turismo = 30;
    //Terceira cidade.
    int codigo = 3;
    char nome[20] = "Varaton";
    float populacao = 900.000;
    float area = 800.000;
    double PIB = 9800.00;
    int turismo = 600;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite do 1 a 3: \n");
    scanf("%d", &codigo);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Sua cidade é: \n");
    return 0;
}
