#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas (Nível Mestre)

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
    unsigned long int habitantes1;
    int Pturisticos1;
    float area1, PIB1;

    char estado2;
    char CodigoCarta2[3];
    char NomeCidade2[50];
    unsigned long int habitantes2;
    int Pturisticos2;
    float area2, PIB2;

    // Atributos calculados
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Super Poder
    float superPoder1, superPoder2;

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
    scanf("%lu", &habitantes1); 

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pturisticos1);      

    // Cálculo dos atributos derivados
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
    scanf("%lu", &habitantes2); 

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pturisticos2);    
    printf("Obrigado por fornecer os dados das cartas!\n");

    densidade2 = habitantes2 / area2;
    pibPerCapita2 = PIB2 / habitantes2;

    // Cálculo do Super Poder:
    // Soma de todos os atributos (com densidade invertida: 1/densidade)
    superPoder1 = (float)habitantes1 + area1 + PIB1 + (float)Pturisticos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = (float)habitantes2 + area2 + PIB2 + (float)Pturisticos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição dos Dados das Cartas:
    printf("\n\nAgora vamos exibir os dados das duas cartas informadas:\n");
    printf("\n\nDados da Carta 1:\n\n");

    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("Número de Habitantes: %lu\n", habitantes1);
    printf("Área da Cidade: %.2f km²\n", area1);
    printf("PIB da Cidade: R$ %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n\nDados da Carta 2:\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("Número de Habitantes: %lu\n", habitantes2);
    printf("Área da Cidade: %.2f km²\n", area2);
    printf("PIB da Cidade: R$ %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Exibição dos Resultados das Comparações:
    printf("\n\nComparação entre as cartas:\n");

    // Para cada comparação, imprimimos 1 se Carta 1 vence, 0 se Carta 2 vence.

    printf("População: %d\n", habitantes1 > habitantes2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: %d\n", Pturisticos1 > Pturisticos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2); // menor é melhor
    printf("PIB per capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}