#include <stdio.h>

int main(){

    char estado1[3], estado2[3];
    char namecity1[50], namecity2[50];
    char codecity1[4], codecity2[4];
    int  pointturiscity1, pointturiscity2;
    int populcity1, populcity2;
    float  areacity1, areacity2;
    float pibcity1, pibcity2;


    // COLETANDOS DADOS 

    printf("\n--------------------------------------\n");
    printf("------CADASTRO DA PRIMEIRA CARTA------\n");
    printf("--------------------------------------\n\n");


    printf("Nome do estado: \n");
    scanf("%2s", estado1);

    printf("Código da carta: \n");
    scanf("%3s", codecity1);

    printf("Nome da cidade: \n");
    scanf("%49s", namecity1);

    printf("Número de população: \n");
    scanf("%d", &populcity1);

    printf("Área da ciadade: \n");
    scanf(" %f", &areacity1);

    printf("PIB da cidade: \n");
    scanf(" %f", &pibcity1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pointturiscity1);

    printf("\n--------------------------------------\n");
    printf("----------CADASTRO CONCLUÍDO----------\n");
    printf("--------------------------------------\n");

     printf("\n--------------------------------------\n");
    printf("------CADASTRO DA SEGUNDA CARTA-------\n");
    printf("--------------------------------------\n\n");

    printf("Nome do estado: \n");
    scanf("%2s", estado2);

    printf("Código da carta: \n");
    scanf("%3s", codecity2);

    printf("Nome da cidade: \n");
    scanf("%49s", namecity2);

    printf("Número de população: \n");
    scanf("%d", &populcity2);

    printf("Área da ciadade: \n");
    scanf("%f", &areacity2);

    printf("PIB da cidade: \n");
    scanf("%f", &pibcity2);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pointturiscity2);

    printf("--------------------------------------\n");
    printf("----------CADASTRO CONCLUÍDO----------\n");
    printf("--------------------------------------\n");

    // Resultados


    printf("\n--------------------------------------\n");
    printf("----------PRIMEIRA CARTA--------------\n");
    printf("--------------------------------------\n");

    printf("\nResumo \n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codecity1);
    printf("Cidade: %s\n", namecity1);
    printf("População: %d\n", populcity1);
    printf("Área: %.2f km²\n", areacity1);
    printf("PIB: %.2f milhões\n", pibcity1);
    printf("Pontos Turístiicos: %d\n", pointturiscity1);

    printf("\n--------------------------------------\n");
    printf("-----------SEGUNDA CARTA---------------\n");
    printf("--------------------------------------\n");


    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codecity2);
    printf("Cidade: %s\n", namecity2);
    printf("População: %d\n", populcity2);
    printf("Área: %.2f km²\n", areacity2);
    printf("PIB: %.2f milhões\n", pibcity2);
    printf("Pontos Turístiicos: %d\n", pointturiscity2);


    return 0;
}