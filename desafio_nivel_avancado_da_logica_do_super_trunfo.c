#include <stdio.h>
#include <string.h>

    int main(){
        
        //Variaveis da carta 1 
        char estado1;
        char codigo1[20];
        char nome1[20];
        int populacao1;
        float area1;
        float pib1;
        int turismo1;
        
        
        //Variavel para calculo de densidade populacional e PIB per capital da carta 1
        float dp1;
        float pibpc1;
        
        
        //Variaveis da carta 2
        char estado2;
        char codigo2[20];
        char nome2[20];
        int populacao2;
        float area2;
        float pib2;
        int turismo2;
        
        
        //Variavel para calculo de densidade populacional e PIB per capital da carta 2
        float dp2;
        float pibpc2;
        
        
        //Variavel de comparação
        int comparacao1;
        int comparacao2;
        
        //Variavel de Resultado
        int resultado1;
        int resultado2;


        //Definição da carta 1
        printf("***Por favor, preencha os dados da primeira cidade.***\n");//Somente para estetica
        
        printf("Digite a letra do estado: ");
        scanf("%c", &estado1);

        printf("Digite o código da cidade: ");
        scanf("%s", codigo1);
        getchar();
        
        printf("Digite o nome da cidade: ");
        fgets(nome1, sizeof(nome1), stdin);
        nome1[strcspn(nome1, "\n")] = 0;

        printf("Digite a quantidade de habitantes: ");
        scanf("%d", &populacao1);

        printf("Digite a área da cidade: ");
        scanf("%f", &area1);
        
        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib1);

        printf("Digite o numero de pontos turísticos: ");
        scanf("%d", &turismo1);

        
        //Calculo da densidade populacional e do pib per capital da carta 1
        dp1 = populacao1 / area1;
        pibpc1 = pib1 / populacao1;

        
        //Exibição da carta 1
        printf("***Especificações da carta número 1***\n");
        
        printf("Estado: %c\n", estado1);
 
        printf("Código: %s\n", codigo1);
 
        printf("Nome da cidade: %s\n", nome1);
 
        printf("População: %d\n", populacao1);
        
        printf("Área: %f\n", area1);
        
        printf("PIB: %f\n", pib1);

        printf("Número de Pontos Turísticos: %d\n", turismo1);

        printf("Densidade Populacional: %f\n", dp1);
       
        printf("PIB per capital: %f\n", pibpc1);

        
        //Definição da carta 2
        printf("***Certo. Agora preencha os dados da segunda cidade.***\n");//Somente para estetica

        printf("Digite a letra do estado da segunda cidade: ");
        scanf(" %c", &estado2);

        printf("Digite o código da segunda cidade: ");
        scanf("%s", codigo2);
        getchar();
        
        printf("Digite o nome da segunda cidade: ");
        fgets(nome2, sizeof(nome2), stdin);
        nome2[strcspn(nome2, "\n")] = 0;

        printf("Digite a quantidade de habitantes da segunda cidade: ");
        scanf("%d", &populacao2);

        printf("Digite a área da segunda cidade: ");
        scanf("%f", &area2);

        printf("Digite o PIB da segunda cidade: ");
        scanf("%f", &pib2);

        printf("Digite o numero de pontos turísticos da segunda cidade: ");
        scanf("%d", &turismo2);

        
        //Calculo da densidade populacional e do pib per capital da carta 2
        dp2 = populacao2 / area2;
        pibpc2 = pib2 / populacao2;

        
        //Exibição da carta 2
        printf("***Especificações da carta número 2***\n");
        
        printf("Estado: %c\n", estado2);

        printf("Código: %s\n", codigo2);

        printf("Nome da cidade: %s\n", nome2);

        printf("População: %d\n", populacao2);
        
        printf("Área: %f\n", area2);

        printf("PIB: %f\n", pib2);

        printf("Número de Pontos Turísticos: %d\n", turismo2);

        printf("Densidade Populacional: %f\n", dp2);
    
        printf("PIB per capital: %f\n", pibpc2);

        
        //Primeira comparacão das cartas
        printf("***Primeiro duelo das cartas***\n");
        printf("Agora você deve selecionar qual atributo deve duelar na primeira rodada.\n");
        printf("Digite 1 para comparar a população\n");
        printf("Digite 2 para comparar a área\n");
        printf("Digite 3 para comparar o PIB\n");
        printf("Digite 4 para comparar o número de pontos turisticos\n");
        printf("Digite 5 para comparar a densidade populacional\n");
        printf("Digite 6 para comparar o PIB per capital\n");
        scanf("%d", &comparacao1);
        
        
        switch (comparacao1)
        {
        
        case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        
        printf("***Comparação do atributo população***\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n", nome1, populacao1, nome2, populacao2);
        if(resultado1 == 1){
            printf("Resultado: Carta 1 venceu no atributo população!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo população!\n");
        } 
            break;
        
        
        case 2:
        resultado1 = area1 > area2 ? 1 : 0;
        
        printf("***Comparação do atributo Área***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, area1, nome2, area2);
        if( resultado1 == 1){
            printf("Resultado: Carta 1 venceu no atributo Área!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo Área!\n");
        }
            break;
        
        
        case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
        
        printf("***Comparação do atributo PIB***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, pib1, nome2, pib2);
        if(resultado1 == 1){
            printf("Resultado: Carta 1 venceu no atributo PIB!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo PIB!\n");
        } 
            break;
    
        
        case 4:
        resultado1 = turismo1 > turismo2 ? 1 : 0;
        
        printf("***Comparação do atributo Número de Pontos Turísticos***\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n", nome1, turismo1, nome2, turismo2);
        if(resultado1 == 1){
            printf("Resultado: Carta 1 venceu no atributo Número de Pontos Turísticos!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo Número de Pontos Turísticos!\n");
        }
            break;
    
        
        case 5:
        resultado1 = dp1 < dp2 ? 1 : 0;
        
        printf("***Comparação do atributo Densidade Populacional***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, dp1, nome2, dp2);
        if(resultado1 == 1){
            printf("Resultado: Carta 1 venceu no atributo Densidade Populacional!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo Densidade Populacional!\n");
        } 
            break;
    
        
        case 6:
        resultado1 = pibpc1 > pibpc2 ? 1 : 0;
        
        printf("***Comparação do atributo PIB per capital***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, pibpc1, nome2, pibpc2);
        if(resultado1 == 1){
            printf("Resultado: Carta 1 venceu no atributo PIB per capital!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo PIB per capital!\n");
        } 
            break;
        
        
        default:
        printf("Você digitou um comando invalido\n");
            break;
        }
    
        //Segunda comparacão das cartas
        printf("***Segundo duelo das cartas***\n");
        printf("Agora você deve selecionar qual atributo deve duelar na segunda rodada.\n");
        printf("Digite 1 para comparar a população\n");
        printf("Digite 2 para comparar a área\n");
        printf("Digite 3 para comparar o PIB\n");
        printf("Digite 4 para comparar o número de pontos turisticos\n");
        printf("Digite 5 para comparar a densidade populacional\n");
        printf("Digite 6 para comparar o PIB per capital\n");
        scanf("%d", &comparacao2);
        
        if (comparacao1 == comparacao2){
            printf ("Você selecionou o mesmo atributo da rodada anterior\n");
        }   else{
        switch (comparacao2)
        {
        
        case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        
        printf("***Comparação do atributo população***\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n", nome1, populacao1, nome2, populacao2);
        if(resultado2 == 1){
            printf("Resultado: Carta 1 venceu no atributo população!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo população!\n");
        }
            break;
        
        
        case 2:
        resultado2 = area1 > area2 ? 1 : 0;
        
        printf("***Comparação do atributo Área***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, area1, nome2, area2);
        if(resultado2 == 1){
            printf("Resultado: Carta 1 venceu no atributo Área!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo Área!\n");
        }
            break;
        
        
        case 3:
        resultado2 = pib1 > pib2 ? 1 : 0;
        
        printf("***Comparação do atributo PIB***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, pib1, nome2, pib2);
        if(resultado2 == 1){
            printf("Resultado: Carta 1 venceu no atributo PIB!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo PIB!\n");
        }
            break;
    
        
        case 4:
        resultado2 = turismo1 > turismo2 ? 1 : 0;
        
        printf("***Comparação do atributo Número de Pontos Turísticos***\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n", nome1, turismo1, nome2, turismo2);
        if(resultado2 == 1){
            printf("Resultado: Carta 1 venceu no atributo Número de Pontos Turísticos!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo Número de Pontos Turísticos!\n");
        }
            break;
    
        
        case 5:
        resultado2 = dp1 < dp2 ? 1 : 0;
        
        printf("***Comparação do atributo Densidade Populacional***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, dp1, nome2, dp2);
        if(resultado2 == 1){
            printf("Resultado: Carta 1 venceu no atributo Densidade Populacional!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo Densidade Populacional!\n");
        }
            break;
    
        
        case 6:
        resultado2 = pibpc1 > pibpc2 ? 1 : 0;
        
        printf("***Comparação do atributo PIB per capital***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, pibpc1, nome2, pibpc2);
        if(resultado2 == 1){
            printf("Resultado: Carta 1 venceu no atributo PIB per capital!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo PIB per capital!\n");
        }
            break;
        
        
        default:
        printf("Você digitou um comando invalido\n");
            break;
        }
        
        //Resultado final
        printf("***Resultado final do jogo***\n");
        
        if (resultado1 == 1 && resultado2 == 1){
            printf ("A carta 1 venceu o jogo!!!\n");
        } else if (resultado1 != resultado2){
            printf ("O jogo empatou!!!\n");
        } else{
            printf ("A carta 2 venceu o jogo!!!\n");
          }
        
        
        }
    
        
        
        
    
    
    
    
    return 0;


    
}