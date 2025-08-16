#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

//
float calcSuperPoder(unsigned long int pop, float area, float pib, int pontos, float denspop, float ppc){

    float resultado = (float)pop + area + pib + (float)pontos + (1/denspop) + ppc;
    return resultado;
}

int comparaAtributo(float carta1, float carta2){
    if (carta1>carta2){
        printf("Carta 1 venceu (1) \n");
    }
    else{
        printf("Carta 2 venceu (0) \n");
    }
    return 0;
}
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // criação das variáveis com atributos da cidade
    char estado;
    char codigo[4];
    char nome[32];
    unsigned long int populacao;
    float area;
    float PIB;
    int pontosTuristicos;
    float denspop; // Densidade Populacional
    float PPC; // Pib per capita
    float superPoder = 0;

    // Criação das variáveis da carta 2
        char estado2;
    char codigo2[4];
    char nome2[32];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontosTuristicos2;
    float denspop2; 
    float PPC2;
    float superPoder2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Leitura dos dados da carta 1
    printf("Cadastro da carta 1 \n");

    printf("Informe o estado: \n");
    scanf(" %c", &estado);

    printf("Informe o código: \n");
    scanf("%s", codigo);

    printf("Informe o nome: \n");
    scanf(" %31[^\n]", nome);

    printf("Informe a população: \n");
    scanf("%lu", &populacao);

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
    scanf("%s", codigo2);

    printf("Informe o nome: \n");
    scanf(" %31[^\n]", nome2);

    printf("Informe a população: \n");
    scanf("%lu", &populacao2);

    printf("Informe a área: \n");
    scanf("%f", &area2);

    printf("Informe o PIB:\n");
    scanf("%f", &PIB2);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Calculos de Densidade Populacional e PIB per capita das cartas

    denspop = (float)populacao / area;
    PPC = (PIB * 1000000000) / (float)populacao;

    denspop2 = (float)populacao2 / area2;
    PPC2 = (PIB2 * 1000000000) / (float)populacao2;
    
    // Atribuição do cálculo do atributo Super Poder

    superPoder = calcSuperPoder(populacao, area, PIB, pontosTuristicos, denspop, PPC);
    superPoder2 = calcSuperPoder(populacao2, area2, PIB2, pontosTuristicos2, denspop2, PPC2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Atributos da carta 1 \n");

    printf("Estado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome: %s\n", nome);

    printf("População: %lu habitantes\n", populacao);

    printf("Área: %.2f km2\n", area);

    printf("PIB: %.2f bilhões de reais\n", PIB);

    printf("Número de pontos turísticos: %d\n", pontosTuristicos);

    printf("Densidade populacional: %.2f hab/km²\n", denspop);

    printf("PIB per Capita: R$ %.2f \n", PPC);

    printf("Super Poder: R$ %.2f \n", superPoder);

    // Impressão carta 2
    printf("\nAtributos da carta 2 \n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome: %s\n", nome2);

    printf("População: %lu habitantes\n", populacao2);

    printf("Área: %.2f km2\n", area2);

    printf("PIB: %.2f bilhões de reais\n", PIB2);

    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    printf("Densidade populacional: %.2f hab/km²\n", denspop2);

    printf("PIB per Capita: R$ %.2f \n", PPC2);

    printf("Super Poder: R$ %.2f \n", superPoder2);

    // Comparando as Cartas
    float inversoDensidade = 1/denspop;
    float inversoDensidade2 = 1/denspop2;

    printf("Comparação de Cartas: \n ");
    printf("População: ");  comparaAtributo(populacao,populacao2);
    printf("Área: ");       comparaAtributo(area, area2);
    printf("PIB: ");        comparaAtributo(PIB, PIB2);
    printf("Pontos Turísticos: "); comparaAtributo(pontosTuristicos, pontosTuristicos2);
    printf("Densidade Populacional: "); comparaAtributo(inversoDensidade, inversoDensidade2);
    printf("Pib per Capita: "); comparaAtributo(PPC, PPC2);
    printf("Super Poder: "); comparaAtributo(superPoder, superPoder2);

    return 0;
}
