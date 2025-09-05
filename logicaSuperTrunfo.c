#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Definição de variáveis

    //Definição das variáveis da carta 1
    char estadoA[15];
    char codA[4];
    char cidadeA[15];
    unsigned long int populacaoA;
    unsigned int ptsTurismoA;
    float areaA;
    float pibA;
    float perCapitaA;
    float densidadeDemograficaA;
    float superPoderA;

    //Definição das variáveis da carta 2
    char estadoB[15];
    char codB[4];
    char cidadeB[15];
    unsigned long int populacaoB;
    unsigned int ptsTurismoB;
    float areaB;
    float pibB;
    float perCapitaB;
    float densidadeDemograficaB;
    float superPoderB;

    // Outras variáveis - criadas para possibilitar a criação do menu interativo, a escolha de cartas e a comparacao entre jogadores
    int carta, cartaJogador, opcao, atributo;

    // Menu interativo
    printf("--- JOGO SUPER TRUNFO ---\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras do Jogo\n");
    printf("3. SAIR\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            //Cadastro de duas cartas para modo jogo inserir informações das cartas em tempo real
            //Cadastro da carta 1
            printf("Cadastro da Carta 1\n");

            //Ao digitar o nome do estado, utilizar _ no lugar do espaço em nomes compostos. Ex.: Sao_Paulo; Rio_de_Janeiro
            printf("Informe o estado: ");  
            scanf("%s", estadoA); //Leitura do nome informado e armazenamento do valor na variável estadoA

            //Usar como código a sigla do estado. Ex.: Sao_Paulo - SP; Bahia - BA
            printf("Informe o código da cidade: ");
            scanf("%s", codA); //Leitura do código informado e armazenamento do valor na variável codA    

            //Ao digitar o nome da cidade, utilizar _ no lugar do espaço em nomes compostos. Ex.: Sao_Paulo; Rio_de_Janeiro
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

            //Escolha da carta pelo Jogador
            printf("*** Escolha sua carta ***\n");
            printf("1. CARTA 1\n");
            printf("2. CARTA 2\n");
            printf("Escolha sua carta (1 ou 2): ");
            scanf("%d", &carta);

            if (carta == 1) {
                cartaJogador = carta;
            } else if (carta == 2) {
                cartaJogador = carta;
            } else {
                cartaJogador = 0;
                //printf("Você não escolheu a carta!\n");
            }

            // Escolha do atributo para comparação
            printf("*** ATRIBUTOS ***\n");
            printf("1. POPULAÇÃO\n");
            printf("2. ÁREA\n");
            printf("3. PIB\n");
            printf("4. PONTOS TURÍSTICOS\n");
            printf("5. DENSIDADE DEMOGRÁFICA\n");
            printf("6. SUPERPODER\n");
            printf("Escolha o atributo: ");
            scanf("%d", &atributo);

            // Comparação entre atributos
            switch (atributo){
                case 1:
                //codigo comparacao populacao
                printf("Atributo escolhido: POPULAÇÃO\n");
                printf("CARTA 1: %s - %s: %lu habitantes.\n", cidadeA, codA, populacaoA);
                printf("CARTA 2: %s - %s: %lu habitantes.\n", cidadeB, codB, populacaoB);
                if(cartaJogador == 0){
                    if(populacaoA > populacaoB){
                        printf("CARTA 1 Venceu!\n");
                    } else if(populacaoA < populacaoB){
                        printf("CARTA 2 Venceu!\n");
                    } else{
                        printf("EMPATOU!\n");
                    }
                }
                if(cartaJogador == 1){
                    if(populacaoA > populacaoB){
                        printf("CARTA 1 Venceu!\n");
                        printf("Parabéns! Você ganhou!\n");
                    } else if(populacaoA < populacaoB){
                        printf("CARTA 2 Venceu!\n");
                        printf("Você perdeu!\n");
                    } else{
                        printf("EMPATOU!\n");
                    }
                }
                if(cartaJogador == 2){
                    if(populacaoA > populacaoB){
                        printf("CARTA 1 Venceu!\n");
                        printf("Você perdeu!\n");
                    } else if(populacaoA < populacaoB){
                        printf("CARTA 2 Venceu!\n");
                        printf("Parabéns! Você ganhou!\n");
                    } else{
                        printf("EMPATOU!\n");
                    }
                }
                break;

                case 2:
                    //codigo comparacao área
                    printf("Atributo escolhido: ÁREA\n");
                    printf("CARTA 1: %s - %s: %.2f km2.\n", cidadeA, codA, areaA);
                    printf("CARTA 2: %s - %s: %.2f km2.\n", cidadeB, codB, areaB);
                    if(cartaJogador == 0){
                        if(areaA > areaB){
                            printf("CARTA 1 Venceu!\n");
                        } else if(areaA < areaB){
                            printf("CARTA 2 Venceu!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                    if(cartaJogador == 1){
                        if(areaA > areaB){
                            printf("CARTA 1 Venceu!\n");
                            printf("Parabéns! Você ganhou!\n");
                        } else if(areaA < areaB){
                            printf("CARTA 2 Venceu!\n");
                            printf("Você perdeu!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                    if(cartaJogador == 2){
                        if(areaA > areaB){
                            printf("CARTA 1 Venceu!\n");
                            printf("Você perdeu!\n");
                        } else if(areaA < areaB){
                            printf("CARTA 2 Venceu!\n");
                            printf("Parabéns! Você ganhou!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                break;
                
                case 3:
                    //codigo comparacao PIB
                    printf("Atributo escolhido: PIB\n");
                    printf("CARTA 1: %s - %s: R$ %.2f bi de reais.\n", cidadeA, codA, pibA);
                    printf("CARTA 2: %s - %s: R$ %.2f bi de reais.\n", cidadeB, codB, pibB);
                    if(cartaJogador == 0){
                        if(pibA > pibB){
                            printf("CARTA 1 Venceu!\n");
                        } else if(pibA < pibB){
                            printf("CARTA 2 Venceu!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                    if(cartaJogador == 1){
                        if(pibA > pibB){
                            printf("CARTA 1 Venceu!\n");
                            printf("Parabéns! Você ganhou!\n");
                        } else if(pibA < pibB){
                            printf("CARTA 2 Venceu!\n");
                            printf("Você perdeu!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                    if(cartaJogador == 2){
                        if(pibA > pibB){
                            printf("CARTA 1 Venceu!\n");
                            printf("Você perdeu!\n");
                        } else if(pibA < pibB){
                            printf("CARTA 2 Venceu!\n");
                            printf("Parabéns! Você ganhou!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                break;

                case 4:
                    //codigo comparacao pontos turisticos
                    printf("Atributo escolhido: PONTOS TURÍSTICOS\n");
                    printf("CARTA 1: %s - %s: %u.\n", cidadeA, codA, ptsTurismoA);
                    printf("CARTA 2: %s - %s: %u.\n", cidadeB, codB, ptsTurismoB);
                    if(cartaJogador == 0){
                        if(ptsTurismoA > ptsTurismoB){
                            printf("CARTA 1 Venceu!\n");
                        } else if(ptsTurismoA < ptsTurismoB){
                            printf("CARTA 2 Venceu!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                    if(cartaJogador == 1){
                        if(ptsTurismoA > ptsTurismoB){
                            printf("CARTA 1 Venceu!\n");
                            printf("Parabéns! Você ganhou!\n");
                        } else if(ptsTurismoA < ptsTurismoB){
                            printf("CARTA 2 Venceu!\n");
                            printf("Você perdeu!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                    if(cartaJogador == 2){
                        if(ptsTurismoA > ptsTurismoB){
                            printf("CARTA 1 Venceu!\n");
                            printf("Você perdeu!\n");
                        } else if(ptsTurismoA < ptsTurismoB){
                            printf("CARTA 2 Venceu!\n");
                            printf("Parabéns! Você ganhou!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                break;

                case 5:
                    // Cálculo da Densidade Demográfica
                    densidadeDemograficaA = populacaoA / areaA;
                    densidadeDemograficaB = populacaoB / areaB;

                    //codigo comparacao densidade demografica
                    printf("Atributo escolhido: DENSIDADE DEMOGRÁFICA\n");
                    printf("CARTA 1: %s - %s: %.2f hab/km2.\n", cidadeA, codA, densidadeDemograficaA);
                    printf("CARTA 2: %s - %s: %.2f hab/km2.\n", cidadeB, codB, densidadeDemograficaB);
                    if(cartaJogador == 0){
                        if(densidadeDemograficaA < densidadeDemograficaB){
                            printf("CARTA 1 Venceu!\n");
                        } else if(densidadeDemograficaA > densidadeDemograficaB){
                            printf("CARTA 2 Venceu!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                    if(cartaJogador == 1){
                        if(densidadeDemograficaA < densidadeDemograficaB){
                            printf("CARTA 1 Venceu!\n");
                            printf("Parabéns! Você ganhou!\n");
                        } else if(densidadeDemograficaA > densidadeDemograficaB){
                            printf("CARTA 2 Venceu!\n");
                            printf("Você perdeu!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                    if(cartaJogador == 2){
                        if(densidadeDemograficaA < densidadeDemograficaB){
                            printf("CARTA 1 Venceu!\n");
                            printf("Você perdeu!\n");
                        } else if(densidadeDemograficaA > densidadeDemograficaB){
                            printf("CARTA 2 Venceu!\n");
                            printf("Parabéns! Você ganhou!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                break;

                case 6:
                    //Calculo super poder da carta
                    superPoderA = populacaoA + areaA + pibA + perCapitaA + ptsTurismoA + (1 / densidadeDemograficaA);
                    superPoderB = populacaoB + areaB + pibB + perCapitaB + ptsTurismoB + (1 / densidadeDemograficaB);

                    //codigo comparacao superpoder
                    printf("Atributo escolhido: SUPER PODER\n");
                    printf("CARTA 1: %s - %s: %.2f.\n", cidadeA, codA, superPoderA);
                    printf("CARTA 2: %s - %s: %.2f.\n", cidadeB, codB, superPoderB);
                    if(cartaJogador == 0){
                        if(superPoderA > superPoderB){
                            printf("CARTA 1 Venceu!\n");
                        } else if(superPoderA < superPoderB){
                            printf("CARTA 2 Venceu!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                    if(cartaJogador == 1){
                        if(superPoderA > superPoderB){
                            printf("CARTA 1 Venceu!\n");
                            printf("Parabéns! Você ganhou!\n");
                        } else if(superPoderA < superPoderB){
                            printf("CARTA 2 Venceu!\n");
                            printf("Você perdeu!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                    if(cartaJogador == 2){
                        if(superPoderA > superPoderB){
                            printf("CARTA 1 Venceu!\n");
                            printf("Você perdeu!\n");
                        } else if(superPoderA < superPoderB){
                            printf("CARTA 2 Venceu!\n");
                            printf("Parabéns! Você ganhou!\n");
                        } else{
                            printf("EMPATOU!\n");
                        }
                    }
                break;

                default:
                    printf("Opção inválida!\n");
                break;
            }
        break;

        case 2:
            printf("Como jogar:\n");
            printf(". Cadastre as cartas;\n");
            printf(". Escolha uma carta;\n");
            printf(". Escolha um atributo;\n");
            printf(". Divirta-se!\n");
        break;

        case 3:
            printf("Você saiu do jogo. Obrigado por jogar!\n");
        break;

        default:
            printf("Opção inválida!\n");
        break;
    }
    
/*




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

    //*** Nível Novato:
/*    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    printf("\n*** COMPARAÇÃO DE CARTAS (Atributo: PIB per Capita)*** \n");
    printf("Carta 1 - %s (%s): R$ %.2f reais \n", cidadeA, codA, perCapitaA);
    printf("Carta 2 - %s (%s): R$ %.2f reais \n", cidadeB, codB, perCapitaB);

    if (perCapitaA > perCapitaB){
        printf("Resultado: Carta 1 (%s - %s) venceu!\n", cidadeA, codA);
    } else{
        printf("Resultado: Carta 2 (%s - %s) venceu!\n", cidadeB, codB);        
    }
*/

    //*** Nível Aventureiro:
    //Estrutura do menu interativo





    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;

}
