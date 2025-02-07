#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    char Pais[20];

        char estado_A[40];

            char A01[40];
             float A_pop_01;
             float A_km_01;
             int A_pt_01;
             float A_pib_01;

            char A02[40];
             float A_pop_02;
             float A_km_02;
             int A_pt_02;
             float A_pib_02;

            char A03[40];
             float A_pop_03;
             float A_km_03;
             int A_pt_03;
             float A_pib_03;

            char A04[40];
             float A_pop_04;
             float A_km_04;
             int A_pt_04;
             float A_pib_04;

        char estado_B[40];

            char B01[40];
             float B_pop_01;
             float B_km_01;
             int B_pt_01;
             float B_pib_01;

            char B02[40];
             float B_pop_02;
             float B_km_02;
             int B_pt_02;
             float B_pib_02;

            char B03[40];
             float B_pop_03;
             float B_km_03;
             int B_pt_03;
             float B_pib_03;

            char B04[40];
             float B_pop_04;
             float B_km_04;
             int B_pt_04;
             float B_pib_04;
    
        char estado_C[40];

            char C01[40];
             float C_pop_01;
             float C_km_01;
             int C_pt_01;
             float C_pib_01;

            char C02[40];
             float C_pop_02;
             float C_km_02;
             int C_pt_02;
             float C_pib_02;

            char C03[40];
             float C_pop_03;
             float C_km_03;
             int C_pt_03;
             float C_pib_03;

            char C04[40];
             float C_pop_04;
             float C_km_04;
             int C_pt_04;
             float C_pib_04;

        char estado_D;

            char D01[40];
             float D_pop_01;
             float D_km_01;
             int D_pt_01;
             float D_pib_01;

            char D02[40];
             float D_pop_02;
             float D_km_02;
             int D_pt_02;
             float D_pib_02;

            char D03[40];
             float D_pop_03;
             float D_km_03;
             int D_pt_03;
             float D_pib_03;

            char D04[40];
             float D_pop_04;
             float D_km_04;
             int D_pt_04;
             float D_pib_04;

        char estado_E;

            char E01[40];
             float E_pop_01;
             float E_km_01;
             int E_pt_01;
             float E_pib_01;

            char E02[40];
             float E_pop_02;
             float E_km_02;
             int E_pt_02;
             float E_pib_02;

            char E03[40];
             float E_pop_03;
             float E_km_03;
             int E_pt_03;
             float E_pib_03;

            char E04[40];
             float E_pop_04;
             float E_km_04;
             int E_pt_04;
             float E_pib_04;

        char estado_F;

            char F01[40];
             float F_pop_01;
             float F_km_01;
             int F_pt_01;
             float F_pib_01;

            char F02[40];
             float F_pop_02;
             float F_km_02;
             int F_pt_02;
             float F_pib_02;

            char F03[40];
             float F_pop_03;
             float F_km_03;
             int F_pt_03;
             float F_pib_03;

            char F04[40];
             float F_pop_04;
             float F_km_04;
             int F_pt_04;
             float F_pib_04;

        char estado_G;

            char G01[40];
             float G_pop_01;
             float G_km_01;
             int G_pt_01;
             float G_pib_01;

            char G02[40];
             float G_pop_02;
             float G_km_02;
             int G_pt_02;
             float G_pib_02;

            char G03[40];
             float G_pop_03;
             float G_km_03;
             int G_pt_03;
             float G_pib_03;

            char G04[40];
             float G_pop_04;
             float G_km_04;
             int G_pt_04;
             float G_pib_04;

        char estado_H;

            char H01[40];
             float H_pop_01;
             float H_km_01;
             int H_pt_01;
             float H_pib_01;

            char H02[40];
             float H_pop_02;
             float H_km_02;
             int H_pt_02;
             float H_pib_02;

            char H03[40];
             float H_pop_03;
             float H_km_03;
             int H_pt_03;
             float H_pib_03;

            char H04[40];
             float H_pop_04;
             float H_km_04;
             int H_pt_04;
             float H_pib_04;
    
    // Cadastro das Cartas:
    
    printf("Registre uma carta \n");

    printf("Escreva o nome do pais: ");
    scanf("%s", &Pais); //Não entendi o motivo de dar esse problema

        printf("Escreva o nome do Estado: ");
        scanf(" %s", &estado_A );

            printf("Escreva o nome da Cidade: ");
            scanf(" %s", &A01);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &A_pop_01);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &A_km_01);

             printf("Qual o PIB: ");
             scanf("%f", &A_pib_01);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &A_pt_01);

        printf("\n Você ainda pode registrar 3 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
            scanf(" %s", &A02);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &A_pop_02);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &A_km_02);

             printf("Qual o PIB: ");
             scanf("%f", &A_pib_02);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &A_pt_02);

        printf("\n Você ainda pode registrar 2 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &A03);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &A_pop_03);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &A_km_03);

             printf("Qual o PIB: ");
             scanf("%f", &A_pib_03);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &A_pt_03);

        printf("\n Você só pode registrar mais uma carta nesse estado \n");
        printf("\n Indo para o ultimo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &A04);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &A_pop_04);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &A_km_04);

             printf("Qual o PIB: ");
             scanf("%f", &A_pib_04);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &A_pt_04);

        printf("Escreva o nome do Estado: ");
        scanf("%s", &estado_B );

            printf("Escreva o nome da Cidade: ");
            scanf(" %s", &B01);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &B_pop_01);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &B_km_01);

             printf("Qual o PIB: ");
             scanf("%f", &B_pib_01);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &B_pt_01);

        printf("\n Você ainda pode registrar 3 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
            scanf(" %s", &B02);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &B_pop_02);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &B_km_02);

             printf("Qual o PIB: ");
             scanf("%f", &B_pib_02);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &B_pt_02);

        printf("\n Você ainda pode registrar 2 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &B03);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &B_pop_03);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &B_km_03);

             printf("Qual o PIB: ");
             scanf("%f", &B_pib_03);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &B_pt_03);

        printf("\n Você só pode registrar mais uma carta nesse estado \n");
        printf("\n Indo para o ultimo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &B04);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &B_pop_04);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &B_km_04);

             printf("Qual o PIB: ");
             scanf("%f", &B_pib_04);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &B_pt_04);

        printf("Escreva o nome do Estado: ");
        scanf("%s", &estado_C );

            printf("Escreva o nome da Cidade: ");
            scanf(" %s", &C01);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &C_pop_01);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &C_km_01);

             printf("Qual o PIB: ");
             scanf("%f", &C_pib_01);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &C_pt_01);

        printf("\n Você ainda pode registrar 3 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
            scanf(" %s", &C02);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &C_pop_02);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &C_km_02);

             printf("Qual o PIB: ");
             scanf("%f", &C_pib_02);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &C_pt_02);

        printf("\n Você ainda pode registrar 2 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &C03);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &C_pop_03);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &C_km_03);

             printf("Qual o PIB: ");
             scanf("%f", &C_pib_03);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &C_pt_03);

        printf("\n Você só pode registrar mais uma carta nesse estado \n");
        printf("\n Indo para o ultimo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &C04);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &C_pop_04);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &C_km_04);

             printf("Qual o PIB: ");
             scanf("%f", &C_pib_04);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &C_pt_04);

        printf("Escreva o nome do Estado: ");
        scanf("%s", &estado_D );

            printf("Escreva o nome da Cidade: ");
            scanf(" %s", &D01);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &D_pop_01);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &D_km_01);

             printf("Qual o PIB: ");
             scanf("%f", &D_pib_01);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &D_pt_01);

        printf("\n Você ainda pode registrar 3 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
            scanf(" %s", &D02);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &D_pop_02);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &D_km_02);

             printf("Qual o PIB: ");
             scanf("%f", &D_pib_02);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &D_pt_02);

        printf("\n Você ainda pode registrar 2 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &D03);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &D_pop_03);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &D_km_03);

             printf("Qual o PIB: ");
             scanf("%f", &D_pib_03);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &D_pt_03);

        printf("\n Você só pode registrar mais uma carta nesse estado \n");
        printf("\n Indo para o ultimo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &D04);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &D_pop_04);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &D_km_04);

             printf("Qual o PIB: ");
             scanf("%f", &D_pib_04);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &D_pt_04);

        printf("Escreva o nome do Estado: ");
        scanf("%s", &estado_E );

            printf("Escreva o nome da Cidade: ");
            scanf(" %s", &E01);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &E_pop_01);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &E_km_01);

             printf("Qual o PIB: ");
             scanf("%f", &E_pib_01);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &E_pt_01);

        printf("\n Você ainda pode registrar 3 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
            scanf(" %s", &E02);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &E_pop_02);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &E_km_02);

             printf("Qual o PIB: ");
             scanf("%f", &E_pib_02);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &E_pt_02);

        printf("\n Você ainda pode registrar 2 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &E03);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &E_pop_03);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &E_km_03);

             printf("Qual o PIB: ");
             scanf("%f", &E_pib_03);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &E_pt_03);

        printf("\n Você só pode registrar mais uma carta nesse estado \n");
        printf("\n Indo para o ultimo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &E04);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &E_pop_04);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &E_km_04);

             printf("Qual o PIB: ");
             scanf("%f", &E_pib_04);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &E_pt_04);

        printf("Escreva o nome do Estado: ");
        scanf("%s", &estado_F );

            printf("Escreva o nome da Cidade: ");
            scanf(" %s", &F01);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &F_pop_01);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &F_km_01);

             printf("Qual o PIB: ");
             scanf("%f", &F_pib_01);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &F_pt_01);

        printf("\n Você ainda pode registrar 3 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
            scanf(" %s", &F02);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &F_pop_02);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &F_km_02);

             printf("Qual o PIB: ");
             scanf("%f", &F_pib_02);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &F_pt_02);

        printf("\n Você ainda pode registrar 2 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &F03);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &F_pop_03);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &F_km_03);

             printf("Qual o PIB: ");
             scanf("%f", &F_pib_03);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &F_pt_03);

        printf("\n Você só pode registrar mais uma carta nesse estado \n");
        printf("\n Indo para o ultimo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &F04);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &F_pop_04);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &F_km_04);

             printf("Qual o PIB: ");
             scanf("%f", &F_pib_04);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &F_pt_04);

        printf("Escreva o nome do Estado: ");
        scanf("%s", &estado_G );

            printf("Escreva o nome da Cidade: ");
            scanf(" %s", &G01);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &G_pop_01);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &G_km_01);

             printf("Qual o PIB: ");
             scanf("%f", &G_pib_01);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &G_pt_01);

        printf("\n Você ainda pode registrar 3 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
            scanf(" %s", &G02);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &G_pop_02);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &G_km_02);

             printf("Qual o PIB: ");
             scanf("%f", &G_pib_02);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &G_pt_02);

        printf("\n Você ainda pode registrar 2 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &G03);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &G_pop_03);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &G_km_03);

             printf("Qual o PIB: ");
             scanf("%f", &G_pib_03);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &G_pt_03);

        printf("\n Você só pode registrar mais uma carta nesse estado \n");
        printf("\n Indo para o ultimo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &G04);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &G_pop_04);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &G_km_04);

             printf("Qual o PIB: ");
             scanf("%f", &G_pib_04);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &G_pt_04);

        printf("Escreva o nome do Estado: ");
        scanf("%s", &estado_H );

            printf("Escreva o nome da Cidade: ");
            scanf(" %s", &H01);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &H_pop_01);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &H_km_01);

             printf("Qual o PIB: ");
             scanf("%f", &H_pib_01);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &H_pt_01);

        printf("\n Você ainda pode registrar 3 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
            scanf(" %s", &H02);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &H_pop_02);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &H_km_02);

             printf("Qual o PIB: ");
             scanf("%f", &H_pib_02);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &H_pt_02);

        printf("\n Você ainda pode registrar 2 cartas nesse estado \n");
        printf("\n Proximo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &H03);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &H_pop_03);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &H_km_03);

             printf("Qual o PIB: ");
             scanf("%f", &H_pib_03);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &H_pt_03);

        printf("\n Você só pode registrar mais uma carta nesse estado \n");
        printf("\n Indo para o ultimo registro... \n");

            printf("\nEscreva o nome da Cidade: ");
             scanf(" %s", &H04);

             printf("Quantos habitantes tem (em milhoes): ");
             scanf(" %f", &H_pop_04);

             printf("Qual é a area (em km^2): ");
             scanf("%f", &H_km_04);

             printf("Qual o PIB: ");
             scanf("%f", &H_pib_04);

             printf("Quantos pontos turisticos tem essa cidade: ");
             scanf("%i", &H_pt_04);

    // Exibição dos Dados das Cartas:

    printf("\nvocê acabou de adicionar novas cartas a colecao '%s'! \n", Pais);

        printf("Carta '%s' codigo A01 pertence ao estado de(a) %s \n", A01, estado_A);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", A_pop_01, A_km_01, A_pib_01, A_pt_01);

        printf("Carta '%s' codigo A02 pertence ao estado de(a) %s \n", A02, estado_A);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", A_pop_02, A_km_02, A_pib_02, A_pt_02);

        printf("Carta '%s' codigo A03 pertence ao estado de(a) %s \n", A03, estado_A);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", A_pop_03, A_km_03, A_pib_03, A_pt_03);

        printf("Carta '%s' codigo A04 pertence ao estado de(a) %s \n", A04, estado_A);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", A_pop_04, A_km_04, A_pib_04, A_pt_04);

            printf("Carta '%s' codigo B01 pertence ao estado de(a) %s \n", B01, estado_B);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", B_pop_01, B_km_01, B_pib_01, B_pt_01);

            printf("Carta '%s' codigo B02 pertence ao estado de(a) %s \n", B02, estado_B);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", B_pop_02, B_km_02, B_pib_02, B_pt_02);

            printf("Carta '%s' codigo B03 pertence ao estado de(a) %s \n", B03, estado_B);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", B_pop_03, B_km_03, B_pib_03, B_pt_03);

            printf("Carta '%s' codigo B04 pertence ao estado de(a) %s \n", B04, estado_B);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", B_pop_04, B_km_04, B_pib_04, B_pt_04);
        
        printf("Carta '%s' codigo C01 pertence ao estado de(a) %s \n", C01, estado_C);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", C_pop_01, C_km_01, C_pib_01, C_pt_01);

        printf("Carta '%s' codigo C02 pertence ao estado de(a) %s \n", C02, estado_C);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", C_pop_02, C_km_02, C_pib_02, C_pt_02);

        printf("Carta '%s' codigo C03 pertence ao estado de(a) %s \n", C03, estado_C);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", C_pop_03, C_km_03, C_pib_03, C_pt_03);

        printf("Carta '%s' codigo C04 pertence ao estado de(a) %s \n", C04, estado_C);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", C_pop_04, C_km_04, C_pib_04, C_pt_04);
    
            printf("Carta '%s' codigo D01 pertence ao estado de(a) %s \n", D01, estado_D);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", D_pop_01, D_km_01, D_pib_01, D_pt_01);

            printf("Carta '%s' codigo D02 pertence ao estado de(a) %s \n", D02, estado_D);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", D_pop_02, D_km_02, D_pib_02, D_pt_02);

            printf("Carta '%s' codigo D03 pertence ao estado de(a) %s \n", D03, estado_D);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", D_pop_03, D_km_03, D_pib_03, D_pt_03);

            printf("Carta '%s' codigo D04 pertence ao estado de(a) %s \n", D04, estado_D);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", D_pop_04, D_km_04, D_pib_04, D_pt_04);

        printf("Carta '%s' codigo E01 pertence ao estado de(a) %s \n", E01, estado_E);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", E_pop_01, E_km_01, E_pib_01, E_pt_01);

        printf("Carta '%s' codigo E02 pertence ao estado de(a) %s \n", E02, estado_E);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", E_pop_02, E_km_02, E_pib_02, E_pt_02);

        printf("Carta '%s' codigo E03 pertence ao estado de(a) %s \n", E03, estado_E);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", E_pop_03, E_km_03, E_pib_03, E_pt_03);

        printf("Carta '%s' codigo E04 pertence ao estado de(a) %s \n", E04, estado_E);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", E_pop_04, E_km_04, E_pib_04, E_pt_04);

            printf("Carta '%s' codigo F01 pertence ao estado de(a) %s \n", F01, estado_F);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", F_pop_01, F_km_01, F_pib_01, F_pt_01);

            printf("Carta '%s' codigo F02 pertence ao estado de(a) %s \n", F02, estado_F);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", F_pop_02, F_km_02, F_pib_02, F_pt_02);

            printf("Carta '%s' codigo F03 pertence ao estado de(a) %s \n", F03, estado_F);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", F_pop_03, F_km_03, F_pib_03, F_pt_03);

            printf("Carta '%s' codigo F04 pertence ao estado de(a) %s \n", F04, estado_F);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", F_pop_04, F_km_04, F_pib_04, F_pt_04);
    
        printf("Carta '%s' codigo G01 pertence ao estado de(a) %s \n", G01, estado_G);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", G_pop_01, G_km_01, G_pib_01, G_pt_01);

        printf("Carta '%s' codigo G02 pertence ao estado de(a) %s \n", G02, estado_G);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", G_pop_02, G_km_02, G_pib_02, G_pt_02);

        printf("Carta '%s' codigo G03 pertence ao estado de(a) %s \n", G03, estado_G);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", G_pop_03, G_km_03, G_pib_03, G_pt_03);

        printf("Carta '%s' codigo G04 pertence ao estado de(a) %s \n", G04, estado_G);
        printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", G_pop_04, G_km_04, G_pib_04, G_pt_04);
    
            printf("Carta '%s' codigo H01 pertence ao estado de(a) %s \n", H01, estado_H);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", H_pop_01, H_km_01, H_pib_01, H_pt_01);

            printf("Carta '%s' codigo H02 pertence ao estado de(a) %s \n", H02, estado_H);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", H_pop_02, H_km_02, H_pib_02, H_pt_02);

            printf("Carta '%s' codigo H03 pertence ao estado de(a) %s \n", H03, estado_H);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", H_pop_03, H_km_03, H_pib_03, H_pt_03);

            printf("Carta '%s' codigo H04 pertence ao estado de(a) %s \n", H04, estado_H);
            printf("Atributos:\nPopulacao: %.3f milhoes\nArea: %.2f km^2 \nPIB: %.2f milhoes \n%i pontos turisticos", H_pop_04, H_km_04, H_pib_04, H_pt_04);
    
    return 0;
}
