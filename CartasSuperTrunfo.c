#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas (Nível Aventureiro)

int main() {

    // Definindo variáveis para cada atributo da cidade.
    /* Estados e suas Letras de a - h
    A - Rio de Janeiro
    B - Bahia
    C - Ceará 
    D - Paraná
    E - Pernambuco
    F - Rio Grande do Sul
    G - Minas Gerais
    H - São Paulo*/

    char estado1;
    char CodigoCarta1[3];
    char NomeCidade1[50];
    int habitantes1, Pturisticos1;
    float area1, PIB1;

    char estado2;
    char CodigoCarta2[3];
    char NomeCidade2[50];
    int habitantes2, Pturisticos2;
    float area2, PIB2;

    // Novos atributos calculados no Nível Aventureiro
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    //introdução:

    printf("\n\n--------------------\nCartas Super Trunfo\n--------------------\n\n");
    printf("|\n|Bem-vindo ao sistema de cadastro de cartas do jogo Cartas Super Trunfo!\n");
    printf("|Por favor, preencha as informações abaixo para cadastrar as cartas.\n|\n");
    printf("|O primeiro passo é informar o Estado da sua Cidade dentre os oito disponíveis abaixo(Digite somente o Código em letra maiúscula):\n|\n");
    printf("|A - Rio de Janeiro\n");
    printf("|B - Bahia\n");
    printf("|C - Ceará\n");
    printf("|D - Paraná\n");
    printf("|E - Pernambuco\n");
    printf("|F - Rio Grande do Sul\n");
    printf("|G - Minas Gerais\n");
    printf("|H - São Paulo\n|\n");
    printf("|Após isso, você irá informar os dados da sua cidade.\n|\n\n");

    // Cadastro das Cartas:
    // Utilizando a função scanf para capturar as entradas do usuário para cada atributo.
    //primeira carta:

    printf("vamos cadastrar a primeira carta:\n\n");
    printf("Digite o código do estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", CodigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", NomeCidade1);

    printf("Digite o número de habitantes: ");
    scanf("%d", &habitantes1); 

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pturisticos1);      

    // Cálculo dos novos atributos
    densidade1 = habitantes1 / area1;
    pibPerCapita1 = PIB1 / habitantes1;

    //segunda carta:
    printf("\nvamos cadastrar a segunda carta:\n\n");
    printf("Digite o código do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", CodigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", NomeCidade2);

    printf("Digite o número de habitantes: ");
    scanf("%d", &habitantes2); 

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pturisticos2);    
    printf("Obrigado por fornecer os dados das cartas!\n");

    // Cálculo dos novos atributos
    densidade2 = habitantes2 / area2;
    pibPerCapita2 = PIB2 / habitantes2;

    // Exibição dos Dados das Cartas:
    //Utilizando a função printf para exibir as informações das cartas cadastradas.

    printf("\n\nAgora vamos exibir os dados das duas cartas informadas:\n");
    printf("\n\nDados da Carta 1:\n\n");

    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("Número de Habitantes: %d\n", habitantes1);
    printf("Área da Cidade: %.2f km²\n", area1);
    printf("PIB da Cidade: R$ %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\n\nDados da Carta 2:\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("Número de Habitantes: %d\n", habitantes2);
    printf("Área da Cidade: %.2f km²\n", area2);
    printf("PIB da Cidade: R$ %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}