#include <stdio.h>
#include <string.h>

int main() {
    int escolha;

   
    char estado1[3], estado2[3];

   
    char nomecidade1[25], nomecidade2[25];
    unsigned long int populacao1 = 123456, populacao2 = 123456;
    float areakm1 = 1.2345, areakm2 = 1.2345;
    float pib1 = 1.234, pib2 = 1.234;
    int pontosturisticos1 = 1, pontosturisticos2 = 1;
    float densidadepopulacional1, densidadepopulacional2;
    float pibcapita1, pibcapita2;
    float superpoder1, superpoder2;


    printf("Digite a sigla do estado da Carta 1: \n");
    scanf("%2s", estado1);
    printf("Digite o nome da cidade para a Carta 1: \n");
    getchar();
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = 0;
    printf("Digite a população da Carta 1: \n");
    scanf("%lu", &populacao1);
    printf("Digite a area em km² da Carta 1: \n");
    scanf("%f", &areakm1);
    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da Carta 1: \n");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = populacao1 / areakm1;
    pibcapita1 = pib1 / populacao1;
    superpoder1 = densidadepopulacional1 + pibcapita1 + pib1 + pontosturisticos1;

    
    printf("Digite a sigla do estado da Carta 2: \n");
    scanf("%2s", estado2);
    printf("Digite o nome da cidade para a Carta 2: \n");
    getchar();
    fgets(nomecidade2, sizeof(nomecidade2), stdin);
    nomecidade2[strcspn(nomecidade2, "\n")] = 0;
    printf("Digite a população da Carta 2: \n");
    scanf("%lu", &populacao2);
    printf("Digite a area em km² da Carta 2: \n");
    scanf("%f", &areakm2);
    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da Carta 2: \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = populacao2 / areakm2;
    pibcapita2 = pib2 / populacao2;
    superpoder2 = densidadepopulacional2 + pibcapita2 + pib2 + pontosturisticos2;

    
    printf("\n*** MENU DE COMPARAÇÃO ***\n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área (km²)\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Pontos Turísticos\n");
    printf("5. Comparar Densidade Populacional\n");
    printf("6. Comparar PIB per Capita\n");
    printf("7. Comparar Superpoder\n");
    printf("Escolha a comparação: ");
    scanf("%d", &escolha);

    
    switch (escolha) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Carta 1 população (%s) venceu.\n", nomecidade1);
            } else if (populacao1 < populacao2) {
                printf("Carta 2 população (%s) venceu.\n", nomecidade2);
            } else {
                printf("Houve um empate na população!\n");
            }
            break;
        case 2:
            if (areakm1 > areakm2) {
                printf("Carta 1 área (km²) (%s) venceu.\n", nomecidade1);
            } else if (areakm1 < areakm2) {
                printf("Carta 2 área (km²) (%s) venceu.\n", nomecidade2);
            } else {
                printf("Houve um empate na área!\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("Carta 1 PIB (%s) venceu.\n", nomecidade1);
            } else if (pib1 < pib2) {
                printf("Carta 2 PIB (%s) venceu.\n", nomecidade2);
            } else {
                printf("Houve um empate no PIB!\n");
            }
            break;
        case 4:
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Carta 1 pontos turísticos (%s) venceu.\n", nomecidade1);
            } else if (pontosturisticos1 < pontosturisticos2) {
                printf("Carta 2 pontos turísticos (%s) venceu.\n", nomecidade2);
            } else {
                printf("Houve um empate nos pontos turísticos!\n");
            }
            break;
        case 5:
            if (densidadepopulacional1 < densidadepopulacional2) {
                printf("Carta 1 densidade populacional (%s) venceu.\n", nomecidade1);
            } else if (densidadepopulacional1 > densidadepopulacional2) {
                printf("Carta 2 densidade populacional (%s) venceu.\n", nomecidade2);
            } else {
                printf("Houve um empate na densidade populacional!\n");
            }
            break;
        case 6:
            if (pibcapita1 > pibcapita2) {
                printf("Carta 1 PIB per capita (%s) venceu.\n", nomecidade1);
            } else if (pibcapita1 < pibcapita2) {
                printf("Carta 2 PIB per capita (%s) venceu.\n", nomecidade2);
            } else {
                printf("Houve um empate no PIB per capita!\n");
            }
            break;
        case 7:
            if (superpoder1 > superpoder2) {
                printf("Carta 1 superpoder (%s) venceu.\n", nomecidade1);
            } else if (superpoder1 < superpoder2) {
                printf("Carta 2 superpoder (%s) venceu.\n", nomecidade2);
            } else {
                printf("Houve um empate no superpoder!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
