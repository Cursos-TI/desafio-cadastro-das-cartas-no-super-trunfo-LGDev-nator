#include <stdio.h>

int main(){
    /*Primeira Carta*/
    char estado[10];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Digite seu estado:\n");
    scanf("%s", &estado);

    printf("Digite seu codigo:\n");
    scanf("%s", &codigo);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Pupulacao:\n");
    scanf("%d", &populacao);

    printf("Area em Km:\n");
    scanf("%f", &area);

    printf("Pib:\n");
    scanf("%f", &pib);

    printf("Pontos Turisticos:\n");
    scanf("%d", &pontos);

    /*Segunda Carta*/

    char Estado[10];
    char Codigo[10];
    char Cidade[50];
    int Populacao;
    float Area;
    float Pib;
    int Pontos;

    printf("Digite seu estado:\n");
    scanf("%s", &Estado);

    printf("Digite seu codigo:\n");
    scanf("%s", &Codigo);

    printf("Nome da cidade:\n");
    scanf("%s", &Cidade);

    printf("Pupulacao:\n");
    scanf("%d", &Populacao);

    printf("Area em Km:\n");
    scanf("%f", &Area);

    printf("Pib:\n");
    scanf("%f", &Pib);

    printf("Pontos Turisticos:\n");
    scanf("%d", &Pontos);

     /*Impressao da primeira carta*/
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Números de Pontos Turisticos: %d\n", pontos);


   /*Impressao da segunda carta*/
     printf("Carta 2:\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Area: %f\n", Area);
    printf("PIB: %f\n", Pib);
    printf("Números de Pontos Turisticos: %d\n", Pontos);

    return 0;

}