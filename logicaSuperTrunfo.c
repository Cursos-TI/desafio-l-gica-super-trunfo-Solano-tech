#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.


int main() {
    // Definição de variáveis

    // Definição das variáveis da carta 1
    char estadoA[30];
    char codA[4];
    char cidadeA[30];
    unsigned long int populacaoA;
    unsigned int ptsTurismoA;
    float areaA;
    float pibA;
    float perCapitaA;
    float densidadeDemograficaA;
    float superPoderA;

    // Definição das variáveis da carta 2
    char estadoB[30];
    char codB[4];
    char cidadeB[30];
    unsigned long int populacaoB;
    unsigned int ptsTurismoB;
    float areaB;
    float pibB;
    float perCapitaB;
    float densidadeDemograficaB;
    float superPoderB;

    // Outras variáveis - criadas para possibilitar a criação do menu interativo e a comparação entre cartas
    int opcao, atributo, atributo1, atributo2;

    // Cabeçalho do jogo
    printf("--- JOGO SUPER TRUNFO ---\n");
    printf("Nível Novato: Atributo Fixo - Nesta fase será realizada a comparação de um atributo já definido diretamente no código.\n");
    printf("Nível Aventureiro: Menu Interativo - Nesta fase a comparação será realizada com a escolha de um dos atributos.\n");
    printf("Nível Mestre: Técnicas Avançadas - Nesta fase  a comparação será realizada por mais de um atributo escolhido.\n");

    // Cadastro de duas cartas para modo jogo inserir informações das cartas em tempo real
    printf("*** Cadastre as cartas do jogo ***\n");
    // Cadastro da carta 1
    printf("Cadastro da Carta 1\n");

    // Ao digitar o nome do estado, utilizar _ no lugar do espaço em nomes compostos. Ex.: Sao_Paulo; Rio_de_Janeiro
    printf("Informe o estado: ");  
    scanf("%s", estadoA); // Leitura do nome informado e armazenamento do valor na variável estadoA

    // Usar como código a sigla do estado. Ex.: Sao_Paulo - SP; Bahia - BA
    printf("Informe o código da cidade: ");
    scanf("%s", codA); // Leitura do código informado e armazenamento do valor na variável codA    

    // Ao digitar o nome da cidade, utilizar _ no lugar do espaço em nomes compostos. Ex.: Sao_Paulo; Rio_de_Janeiro
    printf("Informe o nome da cidade: ");
    scanf("%s", cidadeA); // Leitura do nome informado e armazenamento do valor na variável cidadeA

    printf("Informe a área da cidade: ");
    scanf("%f", &areaA); // Leitura da área da cidade informada e armazenamento do valor na variável areaA

    printf("Informe a população da cidade: ");
    scanf("%lu", &populacaoA); // Leitura da população da cidade informada e armazenamento do valor na variável populacaoA

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibA); // Leitura do PIB da cidade informada e armazenamento do valor na variável pibA

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%u", &ptsTurismoA);   // Leitura do número de pontos turísticos da cidade informados e armazenamento do valor na variável ptsTurismoA     

    // Cadastro da carta 2
    printf("Cadastro da Carta 2\n");

    printf("Informe o estado: ");
    scanf("%s", estadoB); // Leitura do nome informado e armazenamento do valor na variável estadoB

    printf("Informe o código da cidade: ");
    scanf("%s", codB); // Leitura do código informado e armazenamento do valor na variável codB    

    printf("Informe o nome da cidade: ");
    scanf("%s", cidadeB); // Leitura do nome informado e armazenamento do valor na variável cidadeB

    printf("Informe a área da cidade: ");
    scanf("%f", &areaB); // Leitura da área da cidade informada e armazenamento do valor na variável areaB

    printf("Informe a população da cidade: ");
    scanf("%lu", &populacaoB); // Leitura da população da cidade informada e armazenamento do valor na variável populacaoB

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibB); // Leitura do PIB da cidade informada e armazenamento do valor na variável pibB

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%u", &ptsTurismoB);   // Leitura do número de pontos turísticos da cidade informados e armazenamento do valor na variável ptsTurismoB

    // Cálculo da Densidade Demográfica
    densidadeDemograficaA = populacaoA / areaA;
    densidadeDemograficaB = populacaoB / areaB;

    // Cálculo PIB Per Capita
    perCapitaA = (pibA * 1000000000) / populacaoA;
    perCapitaB = (pibB * 1000000000) / populacaoB;

    // Calculo super poder da carta
    superPoderA = (populacaoA + areaA + pibA + perCapitaA + (ptsTurismoA * 10000) + (1 / densidadeDemograficaA)) / 1000;
    superPoderB = (populacaoB + areaB + pibB + perCapitaB + (ptsTurismoB * 10000) + (1 / densidadeDemograficaB)) / 1000;   

    // Menu interativo para escolha do nível
    printf("*** Iniciar Jogo ***\n");
    printf("1. Nível Novato\n");
    printf("2. Nível Aventureiro\n");
    printf("3. Nível Mestre\n");
    printf("Escolha uma opção acima: ");
    scanf("%d", &opcao);

    // estrutura para comparação das cartas
    switch(opcao){
        case 1:
            // definir atributo e comparar cartas - Nível novato
            printf("\n*** COMPARAÇÃO DE CARTAS (Atributo: PIB per Capita)*** \n");
            printf("Carta 1 - %s (%s): R$ %.2f reais \n", cidadeA, codA, perCapitaA);
            printf("Carta 2 - %s (%s): R$ %.2f reais \n", cidadeB, codB, perCapitaB);
            // Verificar carta vencedora
            if (perCapitaA > perCapitaB){
                printf("Resultado: Carta 1 (%s - %s) venceu!\n", cidadeA, codA);
            } else{
                printf("Resultado: Carta 2 (%s - %s) venceu!\n", cidadeB, codB);        
            }
        break;

        case 2:
            // definir atributo e comparar cartas - Nível aventureiro
            // Escolha do atributo para comparação
            printf("*** ATRIBUTOS ***\n");
            printf("1. POPULAÇÃO\n");
            printf("2. ÁREA\n");
            printf("3. PIB\n");
            printf("4. PONTOS TURÍSTICOS\n");
            printf("5. DENSIDADE DEMOGRÁFICA\n");
            printf("6. SUPERPODER\n");
            printf("Escolha um atributo acima: ");
            scanf("%d", &atributo);

            // Comparação entre atributos
            switch (atributo){
                case 1:
                // codigo comparacao populacao
                printf("Atributo escolhido: POPULAÇÃO\n");
                printf("CARTA 1: %s (%s): %lu habitantes.\n", cidadeA, codA, populacaoA);
                printf("CARTA 2: %s (%s): %lu habitantes.\n", cidadeB, codB, populacaoB);
                if(populacaoA > populacaoB){
                    printf("Resultado: CARTA 1 Venceu!\n");
                } else if(populacaoA < populacaoB){
                    printf("Resultado: CARTA 2 Venceu!\n");
                } else{
                    printf("Resultado: EMPATOU!\n");
                }
                break;

                case 2:
                    // codigo comparacao área
                    printf("Atributo escolhido: ÁREA\n");
                    printf("CARTA 1: %s (%s): %.2f km2.\n", cidadeA, codA, areaA);
                    printf("CARTA 2: %s (%s): %.2f km2.\n", cidadeB, codB, areaB);
                    if(areaA > areaB){
                        printf("Resultado: CARTA 1 Venceu!\n");
                    } else if(areaA < areaB){
                        printf("Resultado: CARTA 2 Venceu!\n");
                    } else{
                        printf("Resultado: EMPATOU!\n");
                    }
                break;
                
                case 3:
                    // codigo comparacao PIB
                    printf("Atributo escolhido: PIB\n");
                    printf("CARTA 1: %s (%s): R$ %.2f bi de reais.\n", cidadeA, codA, pibA);
                    printf("CARTA 2: %s (%s): R$ %.2f bi de reais.\n", cidadeB, codB, pibB);
                    if(pibA > pibB){
                        printf("Resultado: CARTA 1 Venceu!\n");
                    } else if(pibA < pibB){
                        printf("Resultado: CARTA 2 Venceu!\n");
                    } else{
                        printf("Resultado: EMPATOU!\n");
                    }                    
                break;

                case 4:
                    // codigo comparacao pontos turisticos
                    printf("Atributo escolhido: PONTOS TURÍSTICOS\n");
                    printf("CARTA 1: %s (%s): %u.\n", cidadeA, codA, ptsTurismoA);
                    printf("CARTA 2: %s (%s): %u.\n", cidadeB, codB, ptsTurismoB);
                    if(ptsTurismoA > ptsTurismoB){
                        printf("Resultado: CARTA 1 Venceu!\n");
                    } else if(ptsTurismoA < ptsTurismoB){
                        printf("Resultado: CARTA 2 Venceu!\n");
                    } else{
                        printf("Resultado: EMPATOU!\n");
                    }
                break;

                case 5:
                    // codigo comparacao densidade demografica
                    printf("Atributo escolhido: DENSIDADE DEMOGRÁFICA\n");
                    printf("CARTA 1: %s (%s): %.2f hab/km2.\n", cidadeA, codA, densidadeDemograficaA);
                    printf("CARTA 2: %s (%s): %.2f hab/km2.\n", cidadeB, codB, densidadeDemograficaB);
                    if(densidadeDemograficaA < densidadeDemograficaB){
                        printf("Resultado: CARTA 1 Venceu!\n");
                    } else if(densidadeDemograficaA > densidadeDemograficaB){
                        printf("Resultado: CARTA 2 Venceu!\n");
                    } else{
                        printf("Resultado: EMPATOU!\n");
                    }
                break;

                case 6:
                    // codigo comparacao superpoder
                    printf("Atributo escolhido: SUPER PODER\n");
                    printf("CARTA 1: %s (%s): %.2f \n", cidadeA, codA, superPoderA);
                    printf("CARTA 2: %s (%s): %.2f \n", cidadeB, codB, superPoderB);
                    if(superPoderA > superPoderB){
                        printf("Resultado: CARTA 1 Venceu!\n");
                    } else if(superPoderA < superPoderB){
                        printf("Resultado: CARTA 2 Venceu!\n");
                    } else{
                        printf("Resultado: EMPATOU!\n");
                    }
                break;

                default:
                    printf("Opção inválida!\n");
                break;
            }
        break;

        case 3:
            // definir atributo e comparar cartas - Nível mestre
            // Escolha do atributo para comparação
            printf("*** ATRIBUTOS ***\n");
            printf("1. POPULAÇÃO\n");
            printf("2. ÁREA\n");
            printf("3. PIB\n");
            printf("4. PONTOS TURÍSTICOS\n");
            printf("5. DENSIDADE DEMOGRÁFICA\n");
            printf("6. SUPERPODER\n");
            printf("Escolha o primeiro atributo: ");
            scanf("%d", &atributo1);
            printf("Escolha o segundo atributo: ");
            scanf("%d", &atributo2);

            // Verifica se os atributos são iguais
            if (atributo1 == atributo2) {
                printf("Os atributos são iguais! \n");
            } else if (atributo1 > 6 || atributo2 > 6){
                printf("Atributo escolhido não válido!")
            }
            
            
            else {
                // Comparação entre cartas
                switch (atributo1){
                    case 1:
                        resultado1 = (populacaoA > populacaoB) ? 1 : 0;
                    break;
                    case 2:

                    break;
                    case 3:

                    break;
                    case 4:

                    break;
                    case 5:

                    break;
                    case 6:

                    break;
                    default:

                    break;
                }
            }

            printf("Nível Mestre em desenvolvimento! Aguarde...");
        break;

        default:
            printf("Opção inválida!\n");
        break;
    }
    
    return 0;

}
