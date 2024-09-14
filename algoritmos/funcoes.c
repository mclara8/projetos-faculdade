#include <stdio.h>

// função sem retorno
void saudacao() {
    printf("Olá mundo!");
}

// função com retorno
int soma(int num1, int num2) {
    return num1 + num2
}

int main() {

    saudacao(); // chamada do procedimento 

    int resultado = soma(10, 11); // chamando função e armazenando resultado
    printf("O resultado da soma é: %d\n", resultado);
    
    return 0;
}