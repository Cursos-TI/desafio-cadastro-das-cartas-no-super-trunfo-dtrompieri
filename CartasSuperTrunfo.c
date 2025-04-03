#include <stdio.h>

int main(){

    char estado1 = 'A';
    char codigocarta1[3] = "A01";
    char nomecidade1[25] = "Brasilia";
    unsigned long int populacao1 = 123456;
    float areakm1 = 1.2345;
    float pib1 = 1.234;
    int pontosturisticos1 = 1;
    float densidadepopulacional1;
    float pibcapita1;
    float superpoder1;

    char estado2 = 'B';
    char codigocarta2[3] = "B02";
    char nomecidade2[25] = "Curitiba";
    unsigned long int populacao2 = 123456;
    float areakm2 = 1.2345;
    float pib2 = 1.234;
    int pontosturisticos2 = 1;
    float densidadepopulacional2;
    float pibcapita2;
    float superpoder2;

    printf("Digite o nome da cidade para a Carta 1: \n");
    scanf("%s", nomecidade1);
    printf("Digite a população da Carta 1: \n");
    scanf("%lu", &populacao1);
    printf("Digite a area em km² da Carta 1: \n");
    scanf("%f",  &areakm1);
    printf("Digite o PIB da Carta 1: \n");
    scanf("%f",  &pib1);
    printf("Digite a quantidade de pontos turisticos da Carta 1: \n");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = populacao1 / areakm1;
    pibcapita1 = pib1 / populacao1;

    superpoder1 = 1 / densidadepopulacional1 + populacao1 + areakm1 + pib1 + pontosturisticos1 + pibcapita1;
    
    printf("Digite o nome da cidade para a Carta 2: \n");
    scanf("%s", nomecidade2);
    printf("Digite a população da Carta 2: \n");
    scanf("%lu", &populacao2);
    printf("Digite a area em km² da Carta 2: \n");
    scanf("%f",  &areakm2);
    printf("Digite o PIB da Carta 2: \n");
    scanf("%f",  &pib2);
    printf("Digite a quantidade de pontos turisticos da Carta 2: \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = populacao2 / areakm2;
    pibcapita2 = pib2 / populacao2;

    superpoder2 = 1 / densidadepopulacional2 + populacao2 + areakm2 + pib2 + pontosturisticos2 + pibcapita2;
    
    printf("*** SUPER TRUNFO ***\n");
    
    printf("Carta 1: \n");
    printf("Estado: A\n");
    printf("Codigo: A01\n");
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f km²\n", areakm1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);
    printf("SuperPoder: %.2f\n", superpoder1);
    printf("\n");
    
    printf("Carta 2: \n");
    printf("Estado: B\n");
    printf("Codigo: B02\n");
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f km²\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);
    printf("SuperPoder: %.2f\n", superpoder2);
    printf("\n");

    printf("Comparação das cartas:\n");
    printf("População: Carta1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta1 venceu (%d)\n",  areakm1 > areakm2);
    printf("PIB: Carta1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);
    printf("PIB per Capita: Carta1 venceu (%d)\n", pibcapita1 > pibcapita2);
    printf("Super Poder: Carta1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;

}