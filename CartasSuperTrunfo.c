#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // criação das variáveis com atributos da cidade
    char estado;
    char codigo[4];
    char nome[15];
    int populacao;
    float area;
    float PIB;
    int pontosTuristicos;

    // Criação das variáveis da carta 2
        char estado2;
    char codigo2[4];
    char nome2[15];
    int populacao2;
    float area2;
    float PIB2;
    int pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Leitura dos dados da carta 1
    printf("Cadastro da carta 1 \n");

    printf("Informe o estado: \n");
    scanf("%c", &estado);

    printf("Informe o código: \n");
    scanf("%s", &codigo);

    printf("Informe o nome: \n");
    scanf("%s", &nome);

    printf("Informe a população: \n");
    scanf("%d", &populacao);

    printf("Informe a área: \n");
    scanf("%f", &area);

    printf("Informe o PIB:\n");
    scanf("%f", &PIB);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);


    // Leitura dos dados da carta 2
    printf("Cadastro da carta 2 \n");

    printf("Informe o estado: \n");
    scanf(" %c", &estado2);

    printf("Informe o código: \n");
    scanf("%s", &codigo2);

    printf("Informe o nome: \n");
    scanf("%s", &nome2);

    printf("Informe a população: \n");
    scanf("%d", &populacao2);

    printf("Informe a área: \n");
    scanf("%f", &area2);

    printf("Informe o PIB:\n");
    scanf("%f", &PIB2);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Atributos da carta 1 \n");

    printf("Estado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome: %s\n", nome);

    printf("População: %d habitantes\n", populacao);

    printf("Área: %.2f km2\n", area);

    printf("PIB: %.2f bilhões de reais\n", PIB);

    printf("Número de pontos turísticos: %d\n\n", pontosTuristicos);

    // Impressão carta 2
    printf("Atributos da carta 2 \n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome: %s\n", nome2);

    printf("População: %d habitantes\n", populacao2);

    printf("Área: %.2f km2\n", area2);

    printf("PIB: %.2f bilhões de reais\n", PIB2);

    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
