#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Definição das variáveis para armazenar as propriedades das cidades
// Você pode utilizar o código do primeiro desafio

// Implemente a lógica para solicitar ao usuário que insira os dados das cidades
// utilizando a função scanf para capturar as entradas.
// utilize o código do primeiro desafio

// Exemplo:
// printf("Digite o código da cidade: ");
// scanf("%s", codigo);
//
// (Repita para cada propriedade)

// Comparação de Cartas:
// Desenvolva a lógica de comparação entre duas cartas.
// Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

// Exemplo:
// if (populacaoA > populacaoB) {
//     printf("Cidade 1 tem maior população.\n");
// } else {
//     printf("Cidade 2 tem maior população.\n");
// }

// Exibição dos Resultados:
// Após realizar as comparações, exiba os resultados para o usuário.
// Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

// Exemplo:
// printf("A cidade vencedora é: %s\n", cidadeVencedora);

int main()
{
    // reutilizar as variaaveis para armazenar as duas cartas.
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeDaCidade1[50], nomeDaCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Cadastro das Cartas 1:
    printf("=== Cadastro da primeira carta 1 ===\n");
    printf("Digite a inicial do estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade (Ex: A01):");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro das Cartas 2:
    printf("\n=== Cadastro da segunda carta 2 ===\n");
    printf("Digite a inicial do estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade (Ex: B02)\n:");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibir as cartas cadastradas
    printf("\n=== Cartas Cadastradas ===\n");
    printf("\nCarta 1 - %s:\n", nomeDaCidade1);
    printf("Estado: %c | Código: %s\n", estado1, codigo1);
    printf("Populalação: %d | Área: %.2f km²\n", populacao1, area1);
    printf("PIB: %.2f milhões | Pontos Turísticos: %d\n", pib1, pontosTuristicos1);

    printf("\nCarta 2 - %s:\n", nomeDaCidade2);
    printf("Estado: %c | Código: %s\n", estado2, codigo2);
    printf("Populalação: %d | Área: %.2f km²\n", populacao2, area2);
    printf("PIB: %.2f milhões | Pontos Turísticos: %d\n", pib2, pontosTuristicos2);

    return 0;
}
