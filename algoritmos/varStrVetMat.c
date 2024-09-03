#include <stdio.h> 
#include <string.h>

int main(){
    char saudacao[] = "Olá";
    char nome [20];

    printf("Digite o seu nome: ")
    scanf("%s", nome); 

    // função strcat é utilizada em C para concatenar duas strings
    strcat(saudacao, nome);
    printf("%s\n", saudacao);

    //Vetores 
    int numeros[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    return 0; 

    //Matrizes          
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
} 


