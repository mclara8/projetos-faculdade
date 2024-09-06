// Exemplo utilizando desvio condicional Switch Case

#include <stdio.h>

int main(){

    int cardapio; 

    printf("OPÇÕES DO DIA - FRUTOS DO MAR\n");
    printf("1 - Lagosta ao molho rosé\n"); 
    printf("2 - Salmão grelhado\n");
    printf("3 - Mariscada\n"); 
    printf("4 - Casquinha de siri grelhada\n");

    printf("Digite o número da opção desejada: \n");
    scanf("%d", &cardapio);

    switch (cardapio){
        case 1:
            printf("Você escolheu lagosta ao molho rosé\n");
        break;
        case 2: 
            printf("Você escolheu salmão grelhado\n");
        break;
        case 3: 
            printf("Você escolheu mariscada\n");
        break;
        case 4: 
            printf("Você escolheu casquinha de siri grelhada\n");
        break
        default: 
            printf("Opção inválida. Escolha um número de 1 a 4\n");
    }

    return 0; 

}

