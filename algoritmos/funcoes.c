// esqueleto de um procedimento em C (não retorna um valor);

#include <stdio.h>

void saudacao() {
    printf("Olá mundo!");
}

int main() {
    saudacao(); // chamada do procedimento
    return 0; 
}

// esqueleto de uma função em C (retorna um valor);      

int soma(int num1, int num2) {
    return num1 + num2
}

int main() {
    int resultado = soma(10, 11); // chamando função e armazenando resultado
    printf("O resultado da soma é: %d\n", resultado);
    return 0;
}