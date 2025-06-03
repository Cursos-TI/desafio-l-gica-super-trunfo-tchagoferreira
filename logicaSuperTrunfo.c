#include <stdio.h>

int main() {

    // DECLARANDO AS VARIAVEIS

    char estado1, estado2, codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int habitantes1, habitantes2, pontostur1, pontostur2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2;

    //RECEBENDO INFORMAÇOES DA CARTA 1
    
    printf("Digite a letra referente ao estado da carta 1:"); //solicita informação de estado da carta 1
    scanf(" %c", &estado1); //recebe a infomação quanto ao estado da carta 1

    printf("Digite o código referente à cidade da carta 1:"); //solicita informação da cidade da carta 1
    scanf("%4s", codigo1); //recebe a informação quanto a cidade da carta 1

    printf("Digite o nome da cidade da carta 1:"); //solicita nome da cidade da carta 1
    scanf("%19s", cidade1); //recebe a informação quanto a cidade da carta 1

    printf("Digite a população total da cidade da carta 1:"); //solicita população da cidade da carta 1
    scanf("%i", &habitantes1); //recebe a informação quanto a cidade da carta 1

    printf("Digite a área total (km²) da cidade da carta 1:"); //solicita área da cidade da carta 1
    scanf("%f", &area1); //recebe a informação quanto a cidade da carta 1

    printf("Digite o Produto Interno Bruto (PIB) da cidade da carta 1:"); //solicita PIB da cidade da carta 1
    scanf("%f", &pib1); //recebe a informação quanto a cidade da carta 1

    printf("Digite o número de pontos turísticos da cidade da carta 1:"); //solicita o nº de pontos turísticos da carta 1
    scanf("%i", &pontostur1); //recebe a informação quanto a cidade da carta 1

    //RECEBER OS DADOS DA CARTA 2
    
    printf("Digite a letra referente ao estado da carta 2:"); //solicita informação do estado da carta 2
    scanf(" %c", &estado2); //recebe a infomação quanto ao estado da carta 2

    printf("Digite o código referente à cidade da carta 2:"); //solicita informação da cidade da carta 2
    scanf("%4s", codigo2); //recebe a informação quanto a cidade da carta 2

    printf("Digite o nome da cidade da carta 2:"); //solicita o nome da cidade da carta 2
    scanf("%19s", cidade2); //recebe a informação quanto a cidade da carta 2

    printf("Digite a população total da cidade da carta 2:"); //solicita a população da cidade da carta 2
    scanf("%i", &habitantes2); //recebe a informação quanto a cidade da carta 2

    printf("Digite a área total (km²) da cidade da carta 2:"); //solicita a área da cidade da carta 2
    scanf("%f", &area2); //recebe a informação quanto a cidade da carta 2

    printf("Digite o Produto Interno Bruto (PIB) da cidade da carta 2:"); //solicita o PIB da cidade da carta 2
    scanf("%f", &pib2); //recebe a informação quanto a cidade da carta 2

    printf("Digite o número de pontos turísticos da cidade da carta 2:"); //solicita o nº de pontos turísticos da carta 1
    scanf("%i", &pontostur2); //recebe a informação quanto a cidade da carta 2

    // CALCULANDO A DENSIDADE POPULACIONAL E O PIB PERCAPITA

    densidade1=habitantes1/area1;

    densidade2=habitantes2/area2;

    pibpercapita1=pib1/habitantes1;

    pibpercapita2=pib2/habitantes2;

    // TESTANDO CALCULO DA DENSIDADE E PIB PER CAPITA - suprimido
    
    // printf("Densidade da carta 1: %.2f" , densidade1 );

    // printf("Densidade da carta 2: %.2f" , densidade2 );

    // printf("pib per capita carta 1: %.2f" , pibpercapita1 );

    // printf("pib per capita carta : %.2f" , pibpercapita2 );
    
    // EXIBINDO OS DADOS DAS DUAS CARTAS COM CADA INFORMAÇÃO EM UMA LINHA - suprimido

    //printf("Carta 1: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %i \n Área: %.2f \n PIB: %.2f \n Número de Pontos Turísticos: %i \n", estado1, codigo1, cidade1, habitantes1, area1, pib1, pontostur1);

    //printf("Carta 2: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %i \n Área: %.2f \n PIB: %.2f \n Número de Pontos Turísticos: %i \n", estado2, codigo2, cidade2, habitantes2, area1, pib2, pontostur2);
    
    // COMPARANDO POPULAÇÃO

    if (habitantes1>habitantes2) {

        printf(" A cidade: %s é mais populosa", cidade1);

    }

    else {

            printf("A cidade: %s é mais populosa", cidade2);
    }

 return 0;
}

