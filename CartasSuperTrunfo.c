#include <stdio.h>
    
int main() {
    //DECLAREI AS VARIÁVEIS
    char estado1[3];
    char estado2[3];
    char codcarta1[10];
    char codcarta2[10];
    char cidade1[10];
    char cidade2[10];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int ptur1;
    int ptur2;
    float dpop1;
    float dpop2;
    float pibpc1;
    float pibpc2;
    //SOLICITEI A ENTRADA DE DADOS POR PARTE DO USUÁRIO COM USO DO TECLADO E SALVEI OS DADOS (CARTA 1)
    printf("Digite uma letra de A a H para representar o Estado da Carta 1: \n");
    scanf("%2s", estado1);
    printf("Digite o Código para Carta 1 (Ex: A01, onde A é a letra que representa o Estado da Carta 1): \n");
    scanf(" %s", codcarta1);
    printf("Digite a Cidade da Carta 1: \n");
    scanf("%s", cidade1);
    printf("Digite a População da Cidade da Carta 1: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área da Cidade da Carta 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade da Carta 1: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de Pontos Turísticos existentes na Cidade da Carta 1: \n");
    scanf("%d", &ptur1);
    //CALCULO DE DENSIDADE POPULACIONAL (POPULAÇÃO DIVIDIDO POR ÁREA) E PIB PER CAPTA (PIB DIVIDIDO POR POPULAÇÃO) REFERENTE A CARTA 1
    dpop1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;
    //SOLICITEI A ENTRADA DE DADOS POR PARTE DO USUÁRIO COM USO DO TECLADO E SALVEI OS DADOS (CARTA 2)
    printf("Digite uma letra de A a H para representar o Estado da Carta 2: \n");
    scanf(" %2s", estado2);
    printf("Digite o Código para Carta 2 (Ex: A02, onde A é a letra que representa o Estado da Carta 2): \n");
    scanf("%s", codcarta2);
    printf("Digite a Cidade da Carta 2: \n");
    scanf("%s", cidade2);
    printf("Digite a População da Cidade da Carta 2: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área da Cidade da Carta 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade da Carta 2: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de Pontos Turísticos existentes na Cidade da Carta 2: \n");
    scanf("%d", &ptur2);
    //CALCULO DE DENSIDADE POPULACIONAL (POPULAÇÃO DIVIDIDO POR ÁREA) E PIB PER CAPTA (PIB DIVIDIDO POR POPULAÇÃO) REFERENTE A CARTA 2
    dpop2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;
    //APRESENTEI AS INFORMAÇÕES SEPARADAS E DESCRITAS (CARTA 1)
    printf("CARTA 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código da Carta: %s \n", codcarta1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d Habitantes \n", populacao1);
    printf("Área: %.2f Km2 \n", area1);
    printf("PIB: %.2f Bilhões de Reais \n", pib1);
    printf("Quantidade de Pontos Turísticos: %d \n", ptur1);
    printf("A Densidade Populacional da Cidade 1 é: %.2f Hab/Km2 \n", dpop1);
    printf("O PIB Per Capta da Cidade 1 é: %.2f Reais \n", pibpc1);
    //APRESENTEI AS INFORMAÇÕES SEPARADAS E DESCRITAS (CARTA 2)
    printf("CARTA 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código da Carta: %s \n", codcarta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d Habitantes \n", populacao2);
    printf("Área: %.2f Km2 \n", area2);
    printf("PIB: %.2f Bilhões de Reais \n", pib2);
    printf("Quantidade de Pontos Turísticos: %d \n", ptur2);
    printf("A Densidade Populacional da Cidade 2 é: %.2f Hab/Km2 \n", dpop2);
    printf("O PIB Per Capta da Cidade 2 é: %.2f Reais \n", pibpc2);    
    return 0;
}
