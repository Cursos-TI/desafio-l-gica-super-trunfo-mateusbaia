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

    // Comparação das cartas, vou sibstituir os multiplos ifs por switch case, adicionar um menu de opcoes para o usuario escolher o que comparar, e implementei contador de vitorias de cada carta.

    printf("\n=== Comparação das Cartas ===\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Todas as opções\n");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: // Comparar População
        printf("\n--- Comparação por População ---\n");
        if (populacao1 > populacao2)
        {
            printf("A cidade Vencedora é: %s (%d habitantes)\n", nomeDaCidade1, populacao1);
            printf("A cidade Perdedora é: %s (%d habitantes)\n", nomeDaCidade2, populacao2);
        }
        else if (populacao1 < populacao2)
        {
            printf("A cidade Vencedora é: %s (%d habitantes)\n", nomeDaCidade2, populacao2);
            printf("A cidade Perdedora é: %s (%d habitantes)\n", nomeDaCidade1, populacao1);
        }
        else
        {
            printf("Empate! Ambas as cidades têm a mesma população: %d habitantes\n", populacao1);
        }
        break;

    case 2: // Comparar Área
        printf("\n--- Comparação por Área ---\n");
        if (area1 > area2)
        {
            printf("A cidade Vencedora é: %s (%.2f km²)\n", nomeDaCidade1, area1);
            printf("A cidade Perdedora é: %s (%.2f km²)\n", nomeDaCidade2, area2);
        }
        else if (area1 < area2)
        {
            printf("A cidade Vencedora é: %s (%.2f km²)\n", nomeDaCidade2, area2);
            printf("A cidade Perdedora é: %s (%.2f km²)\n", nomeDaCidade1, area1);
        }
        else
        {
            printf("Empate! Ambas as cidades têm a mesma área: %.2f km²\n", area1);
        }
        break;

    case 3: // Comparar PIB
        printf("\n--- Comparação por PIB ---\n");
        if (pib1 > pib2)
        {
            printf("A cidade Vencedora é: %s (%.2f milhões)\n", nomeDaCidade1, pib1);
            printf("A cidade Perdedora é: %s (%.2f milhões)\n", nomeDaCidade2, pib2);
        }
        else if (pib1 < pib2)
        {
            printf("A cidade Vencedora é: %s (%.2f milhões)\n", nomeDaCidade2, pib2);
            printf("A cidade Perdedora é: %s (%.2f milhões)\n", nomeDaCidade1, pib1);
        }
        else
        {
            printf("Empate! Ambas as cidades têm o mesmo PIB: %.2f milhões\n", pib1);
        }
        break;

    case 4: // Comparar Pontos Turísticos
        printf("\n--- Comparação por Pontos Turísticos ---\n");
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("A cidade Vencedora é: %s (%d pontos turísticos)\n", nomeDaCidade1, pontosTuristicos1);
            printf("A cidade Perdedora é: %s (%d pontos turísticos)\n", nomeDaCidade2, pontosTuristicos2);
        }
        else if (pontosTuristicos1 < pontosTuristicos2)
        {
            printf("A cidade Vencedora é: %s (%d pontos turísticos)\n", nomeDaCidade2, pontosTuristicos2);
            printf("A cidade Perdedora é: %s (%d pontos turísticos)\n", nomeDaCidade1, pontosTuristicos1);
        }
        else
        {
            printf("Empate! Ambas as cidades têm o mesmo número de pontos turísticos: %d\n", pontosTuristicos1);
        }
        break;

    case 5: // Comparar Todas as Opções
        printf("\n--- Comparação por Todas as Opções ---\n");
        int vitorias1 = 0, vitorias2 = 0;

        // População
        if (populacao1 > populacao2)
        {
            printf("População: %s vence\n", nomeDaCidade1);
            vitorias1++;
        }
        else if (populacao1 < populacao2)
        {
            printf("População: %s vence\n", nomeDaCidade2);
            vitorias2++;
        }
        else
        {
            printf("População: Empate\n");
        }

        // Área
        printf("Área: ");
        if (area1 > area2)
        {
            printf("%s vence\n", nomeDaCidade1);
            vitorias1++;
        }
        else if (area1 < area2)
        {
            printf("%s vence\n", nomeDaCidade2);
            vitorias2++;
        }
        else
        {
            printf("Empate\n");
        }

        // PIB
        printf("PIB: ");
        if (pib1 > pib2)
        {
            printf("%s vence\n", nomeDaCidade1);
            vitorias1++;
        }
        else if (pib1 < pib2)
        {
            printf("%s vence\n", nomeDaCidade2);
            vitorias2++;
        }
        else
        {
            printf("Empate\n");
        }

        // Pontos Turísticos
        printf("Pontos Turísticos: ");
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("%s vence\n", nomeDaCidade1);
            vitorias1++;
        }
        else if (pontosTuristicos1 < pontosTuristicos2)
        {
            printf("%s vence\n", nomeDaCidade2);
            vitorias2++;
        }
        else
        {
            printf("Empate\n");
        }

        // Resultado Final
        printf("\nResultado Final:\n");
        printf("%s: %d vitórias\n", nomeDaCidade1, vitorias1);
        printf("%s: %d vitórias\n", nomeDaCidade2, vitorias2);

        if ((vitorias1 > vitorias2))
        {
            printf("A cidade vencedora é: %s\n", nomeDaCidade1);
        }
        else if (vitorias1 < vitorias2)
        {
            printf("A cidade vencedora é: %s\n", nomeDaCidade2);
        }
        else
        {
            printf("Empate geral!\n");
        }
        break;
    default:
        printf("Opção inválida! Por favor, selecione uma opção entre 1 e 5.\n");
        break;
    }
    return 0;
}
