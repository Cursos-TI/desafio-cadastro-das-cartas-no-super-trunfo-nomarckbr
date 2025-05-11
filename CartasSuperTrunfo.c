#include<stdio.h>

int main()
{
// Variáveis da carta 1
char estado1, codigo1[4], nomecidade1[30];
int pontoturistico1;
float pib1, area1, divisao, divisao2, superpoder1, superpoder2;
unsigned long int populacao1;

// Variáveis da carta 2
char estado2, codigo2[4], nomecidade2[30];
int pontoturistico2;
float pib2, area2, divis, divis2;
unsigned long int populacao2;

    // Entrada de dados da carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Insira o nome do Estado: (1 Letra de A-H)\n");
    scanf("%c", &estado1);
    printf("Insira o código da carta: (ex: A01)\n");
    scanf("%s", &codigo1);
    printf("Insira o nome da Cidade:\n");
    scanf("%s", &nomecidade1);
    printf("Insira a população: (ex: 9738484)\n");
    scanf("%lu", &populacao1);
    printf("Insira a área em Km²: (ex: 7294.93)\n");
    scanf("%f", &area1);
    printf("Insira o Pib em bilhões: (ex: 7838.83)\n");
    scanf("%f", &pib1);
    printf("Insira os pontos turísticos:\n");
    scanf("%d", &pontoturistico1);
    
    // Entrada de dados da carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Insira o nome do Estado: (1 Letra de A-H)\n");
    scanf("%s", &estado2);
    printf("Insira o código da carta: (ex: B02)\n");
    scanf("%s", &codigo2);
    printf("Insira o nome da Cidade:\n");
    scanf("%s", &nomecidade2);
    printf("Insira a população: (ex: 9738484)\n");
    scanf("%lu", &populacao2);
    printf("Insira a área em Km²: (ex: 7294.93)\n");
    scanf("%f", &area2);
    printf("Insira o Pib em bilhões: (ex: 7838.83)\n");
    scanf("%f", &pib2);
    printf("Insira os pontos turísticos:\n");
    scanf("%d", &pontoturistico2);
    
    ///Operadores de cálculos.///
    /// divisao e divis = Densidade populacional
    /// divisao2 e divis2 = PIB Percapita
    divisao2 = pib1 / populacao1;
    divis = populacao2 / area2;
    divisao = populacao1 / area1;
    divis2 = pib2 / populacao2;
    superpoder1 = populacao1 + area1 + pib1 + pontoturistico1 + divisao2, (1/divisao);
    superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + divis2, (1/divisao2);
    
    //Impressão das Cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km²\n", area1);
    printf("PIB: %f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico1);
    printf("Densidade Populacional: %f Km²\n", divisao);
    printf("PIB per Capita: %f reais\n", divisao2);
    
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km²\n", area2);
    printf("PIB: %f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
    printf("Densidade Populacional: %f Km²\n", divis);
    printf("PIB per Capita: %f reais\n", divis2);
    
    //Comparação das cartas
    printf("\n--- COMPARAÇÃO DAS CARTAS:---\n");
    if (populacao1 > populacao2) {
    printf("População: Carta 1 venceu (1)\n");
  } else {
    printf("População: Carta 2 venceu (0)\n");
  }
  if (area1 > area2) {
    printf("Área: Carta 1 venceu (1)\n");
  } else {
    printf("Área: Carta2 venceu (0)\n");
  }
  if (pib1 > pib2) {
    printf("PIB: Carta 1 venceu (1)\n");
  } else {
    printf("PIB: Carta 2 venceu (0)\n");
  }
  if (pontoturistico1 > pontoturistico2) {
    printf("Pontos Turísticos: Carta 1 venceu (1)\n");
  } else {
    printf("Pontos Turísticos: Carta 2 venceu (0)\n");
  }
  if (divisao < divis) {
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
  } else {
    printf("Densidade Populacional: Carta 2 venceu (0)\n");
  }
  if (divisao2 > divis2) {
    printf("PIB per Capita: Carta 1 venceu (1)\n");
  } else {
    printf("PIB per Capita: Carta 2 venceu (0)\n");
  }
  if (superpoder1 > superpoder2) {
    printf("Super Poder: Carta 1 venceu (1)\n");
  } else {
    printf("Super Poder: Carta 2 venceu (0)\n");
  }
    return 0;
 }
