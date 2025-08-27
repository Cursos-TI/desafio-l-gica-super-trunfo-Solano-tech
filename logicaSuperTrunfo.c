#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    //Definição das variáveis da carta 1
    char estadoA[20];
    char codA[5];
    char cidadeA[30];
    unsigned long int populacaoA;
    unsigned int ptsTurismoA;
    float areaA;
    float pibA;
    float perCapitaA;
    float densidadeDemograficaA;
    float superPoderA;

    //Definição das variáveis da carta 2
    char estadoB[20];
    char codB[5];
    char cidadeB[30];
    unsigned long int populacaoB;
    unsigned int ptsTurismoB;
    float areaB;
    float pibB;
    float perCapitaB;
    float densidadeDemograficaB;
    float superPoderB;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    /*
    //Cadastro da carta 1
    printf("Cadastro da Carta 1\n");

    printf("Informe o estado: ");
    scanf("%s", estadoA); //Leitura do nome informado e armazenamento do valor na variável estadoA

    printf("Informe o código da cidade: ");
    scanf("%s", codA); //Leitura do código informado e armazenamento do valor na variável codA    

    printf("Informe o nome da cidade: ");
    scanf("%s", cidadeA); //Leitura do nome informado e armazenamento do valor na variável cidadeA

    printf("Informe a área da cidade: ");
    scanf("%f", &areaA); //Leitura da área da cidade informada e armazenamento do valor na variável areaA

    printf("Informe a população da cidade: ");
    scanf("%lu", &populacaoA); //Leitura da população da cidade informada e armazenamento do valor na variável populacaoA

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibA); //Leitura do PIB da cidade informada e armazenamento do valor na variável pibA

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%u", &ptsTurismoA);   //Leitura do número de pontos turísticos da cidade informados e armazenamento do valor na variável ptsTurismoA     

    //Cadastro da carta 2
    printf("Cadastro da Carta 2\n");

    printf("Informe o estado: ");
    scanf("%s", estadoB); //Leitura do nome informado e armazenamento do valor na variável estadoB

    printf("Informe o código da cidade: ");
    scanf("%s", codB); //Leitura do código informado e armazenamento do valor na variável codB    

    printf("Informe o nome da cidade: ");
    scanf("%s", cidadeB); //Leitura do nome informado e armazenamento do valor na variável cidadeB

    printf("Informe a área da cidade: ");
    scanf("%f", &areaB); //Leitura da área da cidade informada e armazenamento do valor na variável areaB

    printf("Informe a população da cidade: ");
    scanf("%lu", &populacaoB); //Leitura da população da cidade informada e armazenamento do valor na variável populacaoB

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibB); //Leitura do PIB da cidade informada e armazenamento do valor na variável pibB

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%u", &ptsTurismoB);   //Leitura do número de pontos turísticos da cidade informados e armazenamento do valor na variável ptsTurismoB 
    */

    // Cadastro de informações apenas para facilitar a execução do desafio

    estadoA = "Espírito Santo";
    codA = "ES";
    cidadeA = "Serra";
    areaA = 234.6;
    populacaoA = 324000;
    pibA = 23.2;
    ptsTurismoA = 97;

    estadoB = "Bahia";
    codB = "BA";
    cidadeB = "Salvador";
    areaB = 134.6;
    populacaoB = 424000;
    pibB = 13.2;
    ptsTurismoB = 197;    


    // Cálculo da Densidade Demográfica
    densidadeDemograficaA = populacaoA / areaA;
    densidadeDemograficaB = populacaoB / areaB;

    // Cálculo PIB Per Capita
    perCapitaA = (pibA * 1000000000) / populacaoA;
    perCapitaB = (pibB * 1000000000) / populacaoB;

    //Calculo super poder da carta
    superPoderA = populacaoA + areaA + pibA + perCapitaA + ptsTurismoA + (1 / densidadeDemograficaA);
    superPoderB = populacaoB + areaB + pibB + perCapitaB + ptsTurismoB + (1 / densidadeDemograficaB);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
