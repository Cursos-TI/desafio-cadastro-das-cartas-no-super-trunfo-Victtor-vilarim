#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char Pais[10];

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
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Registre uma carta \n");

    printf("Escreva o nome do pais: ");
    scanf("%s", &Pais);

        printf("Escreva o nome do Estado: ");
        scanf("%s", &estado_A );

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
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
