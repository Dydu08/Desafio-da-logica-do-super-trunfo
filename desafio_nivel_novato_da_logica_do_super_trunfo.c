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

        
        //Comparacão das cartas
        printf("***Duelo das cartas***\n");
        
        
        printf("***Comparação do atributo população***\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n", nome1, populacao1, nome2, populacao2);
        if(populacao1 > populacao2){
            printf("Resultado: Carta 1 venceu no atributo população!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo população!\n");
        }
        
        
        printf("***Comparação do atributo Área***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, area1, nome2, area2);
        if(area1 > area2){
            printf("Resultado: Carta 1 venceu no atributo Área!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo Área!\n");
        }

    
        printf("***Comparação do atributo PIB***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, pib1, nome2, pib2);
        if(pib1 > pib2){
            printf("Resultado: Carta 1 venceu no atributo PIB!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo PIB!\n");
        }

    
        printf("***Comparação do atributo Número de Pontos Turísticos***\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n", nome1, turismo1, nome2, turismo2);
        if(turismo1> turismo2){
            printf("Resultado: Carta 1 venceu no atributo Número de Pontos Turísticos!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo Número de Pontos Turísticos!\n");
        }
        
    
        printf("***Comparação do atributo Densidade Populacional***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, dp1, nome2, dp2);
        if(dp1 < dp2){
            printf("Resultado: Carta 1 venceu no atributo Densidade Populacional!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo Densidade Populacional!\n");
        }
        
    
        printf("***Comparação do atributo PIB per capital***\nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", nome1, pibpc1, nome2, pibpc2);
        if(pibpc1 > pibpc2){
            printf("Resultado: Carta 1 venceu no atributo PIB per capital!\n");
        } else{
            printf("Resultado: Carta 2 venceu no atributo PIB per capital!\n");
        }
    
    
    
    
    
    
    return 0;


    
}