# include <stdio.h>

int main()
{
    printf("***Registro de cartas do Super trunfo países***\n");

    char pais[20];
    printf("Qual o nome do país? \n");
    scanf("%s", &pais);

    char estado1[20];
        char cidade1[20];
            int pop1;
            float area1;
            float pib1;
            int turis1;

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado1);
        printf("Digite o nome da primeira cidade: \n");
        scanf("%s", &cidade1);
            printf("Qual a sua populacao? \n");
            scanf("%d", &pop1);
            printf("Qual a area? \n");
            scanf("%f", &area1);
            printf("Qual o pib? \n");
            scanf("%f", &pib1);
            printf("Quantos pontos turisticos existem? \n");
            scanf("%d", &turis1);

    char estado2[20];
        char cidade2[20];
            int pop2;
            float area2;
            float pib2;
            int turis2;

    printf("Digite o nome do segundo estado: \n");
    scanf("%s", &estado2);
        printf("Digite o nome da segunda cidade: \n");
        scanf("%s", &cidade2);
            printf("Qual a sua populacao? \n");
            scanf("%d", &pop2);
            printf("Qual a area? \n");
            scanf("%f", &area2);
            printf("Qual o pib? \n");
            scanf("%f", &pib2);
            printf("Quantos pontos turisticos existem? \n");
            scanf("%d", &turis2);

    printf("\nVocê acabou de registar duas cartas a colecao %s\n", pais);
    printf("Estado: %s \n", estado1);
        printf("Cidade: %s <código: A01>\n", cidade1);
            printf("Populacao: %d\n", pop1);
            printf("Area: %.2f Km\n", area1);
            printf("PIB: %.2f \n", pib1);
            printf("Pontos turisticos: %d\n", turis1);
            printf("Densidade demografica: %.2f \n", pop1/area1);
            printf("PIB per capita: %.2f \n", pib1/pop1);

    printf("\nEstado: %s \n", estado2);
        printf("Cidade: %s <código: A01>\n", cidade2);
            printf("Populacao: %d\n", pop2);
            printf("Area: %.2f Km\n", area2);
            printf("PIB: %.2f \n", pib2);
            printf("Pontos turisticos: %d\n", turis2);
            printf("Densidade demografica: %.2f \n", pop2/area2);
            printf("PIB per capita: %.2f \n", pib2/pop2);


    return 0;
}
