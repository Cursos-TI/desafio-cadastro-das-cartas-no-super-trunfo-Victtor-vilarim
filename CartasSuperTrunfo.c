#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    
    char Pais[20];

        char estado_A[40];

            char A01[40];
             float A_pop_01; //população da cidade A01
             float A_km_01; //área da cidade A01
             int A_pt_01; //pontos turísticos da cidade A01
             float A_pib_01; //pib da cidade A01

        char estado_B[40];

            char B01[40];
             float B_pop_01;
             float B_km_01;
             int B_pt_01;
             float B_pib_01;
    
    // Cadastro das Cartas:
    
    printf("Registre uma carta \n");

    printf("Escreva o nome do país: "); //
    scanf("%s", &Pais);

        printf("Escreva o nome do Estado: ");
        scanf(" %s", &estado_A );

            printf("Escreva o nome da Cidade: ");
            scanf(" %s", &A01);

             printf("Quantos habitantes tem (em milhões): ");
             scanf(" %f", &A_pop_01);

             printf("Qual é a área (em km^2): ");
             scanf("%f", &A_km_01);

             printf("Qual o PIB (em milhões): ");
             scanf("%f", &A_pib_01);

             printf("Quantos pontos turísticos tem essa cidade: ");
             scanf("%i", &A_pt_01);

        printf("\nProximo registro... \n");

        printf("Escreva o nome do Estado: ");
        scanf("%s", &estado_B );

            printf("Escreva o nome da Cidade: ");
            scanf(" %s", &B01);

             printf("Quantos habitantes tem (em milhões): ");
             scanf(" %f", &B_pop_01);

             printf("Qual é a área (em km^2): ");
             scanf("%f", &B_km_01);

             printf("Qual o PIB (em milhões): ");
             scanf("%f", &B_pib_01);

             printf("Quantos pontos turísticos tem essa cidade: ");
             scanf("%i", &B_pt_01);

    // Exibição dos Dados das Cartas:

    printf("\nvocê acabou de adicionar duas novas cartas a coleção '%s'! \n", Pais);

        printf("Carta '%s' codigo A01 pertence ao estado de(a) %s \n", A01, estado_A);
        printf("Atributos:\nPopulação: %.3f milhões\nÁrea: %.2f km^2 \nPIB: %.2f milhões \n%i pontos turísticos\n", A_pop_01, A_km_01, A_pib_01, A_pt_01);
       
        printf("\nCarta '%s' codigo B01 pertence ao estado de(a) %s \n", B01, estado_B);
        printf("Atributos:\nPopulação: %.3f milhões\nÁrea: %.2f km^2 \nPIB: %.2f milhões \n%i pontos turísticos\n", B_pop_01, B_km_01, B_pib_01, B_pt_01);

    return 0;
}
