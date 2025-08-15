#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    // variaveis cartas 1
    // variaveis cartas 1
    char estado1, codigo1[4], cidade1[20];
    unsigned long int populacao1;
    int num_turistico1;
    float area1, pib1;

    // variaveis cartas 2
    char estado2, codigo2[4], cidade2[20];
    unsigned long int populacao2;
    int num_turistico2;
    float area2, pib2;

    // variaveis para cálculo
    float  densidade1, pib_capito1;
    float  densidade2, pib_capito2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // cartas 1
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    // cartas 1
    printf("Digite o estado(letra):\n");
    scanf(" %c", &estado1);

    printf("Digite o codígo:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade1); // permitir espaços

    printf("Digite a população:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área territorial:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidades de pontos turísticos:\n");
    scanf("%d", &num_turistico1);

    // cartas 2
    printf("\nDigite o estado(letra):\n");
    scanf(" %c", &estado2);

    printf("Digite o codígo:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade2); // permitir espaços

    printf("Digite a população:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área territorial:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidades de pontos turísticos:\n");
    scanf("%d", &num_turistico2);

    // cálculo para obter desnsidade populacional e PIB per capito
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_capito1 = (float) (pib1 *  1000000000) / populacao1;
    pib_capito2 = (float) (pib2 *  1000000000) / populacao2;

    // cálcula o super poder
    float super_poder1 = (float)populacao1 + area1 +  pib1 + (float)num_turistico1 + pib_capito1 + (1 / densidade1);
    float super_poder2 = (float)populacao2 + area2 +  pib2 + (float)num_turistico2 + pib_capito2 + (1 / densidade2);
    
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

    // Comparar um atributo usando uma condicional
    // Comparar as cartas
    int populacao_resultado = populacao1 > populacao2;
    int area_resultado = area1 > area2;
    int pib_resultado = pib1 > pib2;
    int num_turistico_resultado = num_turistico1 > num_turistico2;
    int densidade_resultado = densidade1 < densidade2; // menor densidade é melhor
    int pib_capito_resultado = pib_capito1 > pib_capito2;
    int super_poder_resulatado = super_poder1 > super_poder2;


    // Comparação dos atributos usando condicionais
    // População
    printf("\nResultado População:\n");
    printf("Carta 1 - %s: %u\n", cidade1, populacao1);
    printf("Carta 2 - %s: %u\n", cidade2, populacao2);

    if (populacao_resultado) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Area
    printf("\nResultado Área:\n");
    printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);

    if (area_resultado) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // PIB
    printf("\nResultado PIB:\n");
    printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
    printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);

    if (pib_resultado) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Números de pontos turisticos
    printf("\nResultado Pontos Turísticos:\n");
    printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, num_turistico1);
    printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, num_turistico2);

    if (num_turistico_resultado) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Densidade Populacional
    printf("\nResultado Densidade Populacional:\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);

    if (densidade_resultado) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // PIB per Capita
    printf("\nResultado PIB per Capita:\n");
    printf("Carta 1 - %s: %.2f reais\n", cidade1, pib_capito1);
    printf("Carta 2 - %s: %.2f reais\n", cidade2, pib_capito2);

    if (pib_capito_resultado) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Super Poder
    printf("\nResultado Super Poder:\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, super_poder1);
    printf("Carta 2 - %s: %.2f\n", cidade2, super_poder2);

    if (super_poder_resulatado) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
