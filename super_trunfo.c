#include <stdio.h>

int main() {

    char estado[30], estado2[30];
    char codigocarta[4], codigocartas02[4];
    char cidade[50], cidade02[50];
    int pontosturisticos, pontosturisticos02;
    float populacao, populacao02; 
    float pib, pib02;
    float area, area02;
    
    // DADOS DA PRIMEIRA CARTA //

    printf("ESTADO: ");
    scanf("%s", estado);

    printf("CIDADE: ");
    scanf("%s", cidade);

    printf("CODIGO DE CARTAS: ");
    scanf("%s", codigocarta);

    printf("PONTOS TURISTICOS: ");
    scanf("%d", &pontosturisticos);

    // DADOS DA SEGUNDA CARTA 02 //

    printf("ESTADO_02:");

    scanf("%s", estado2);

    printf("CIDADE: ");
    scanf("%s", cidade02);

    printf("CODIGO DE CARTAS: ");
    scanf("%s", codigocartas02);

    printf("PONTOS TURISTICOS: ");
    scanf("%d", &pontosturisticos02);

    printf("POPULACAO: ");
    scanf("%f", &populacao02);

    printf("PIB: ");
    scanf("%f", &pib02);

    printf("AREA EM KM²: ");
    scanf("%f", &area02);

    return 0;
}#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
