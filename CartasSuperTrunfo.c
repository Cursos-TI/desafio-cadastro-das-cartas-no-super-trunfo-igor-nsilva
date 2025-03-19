#include <stdio.h>

    char estado;
    char codigoCarta[4];
    char nomeCidade[50];
    float populacao;
    float area;
    float pib;
    int pontosTuristicos; 

{ cartas[1]; 
    printf("\nInformações da Carta:01\n");
    printf("Estado: %c\n", c.estado);
    printf("Código da Carta: %s\n", c.codigoCarta);
    printf("Nome da Cidade: %s\n", c.nomeCidade);
    printf("População: %f\n", c.populacao);
    printf("Área (km²): %f\n", c.area);
    printf("PIB: %f\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
}

{ cartas[2];
    for (int i = 0; i < 2; i++) {
        printf("Insira os dados da carta %d:\n", i + 1);
        printf("Estado: ");
        scanf(" %c", &cartas[i].estado);
        printf("Código da Carta:\n ");
        scanf("%s", cartas[i].codigoCarta);
        printf("Nome da Cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade);
        printf("População: ");
        scanf("%d", &cartas[i].populacao);
        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);
        printf("PIB: ");
        scanf("%f", &cartas[i].pib);
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    for (int i = 0; i < 2; i++) {
        imprimirCarta(cartas[i]);
    }

    return 0;
}