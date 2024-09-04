#include <stdio.h> 

int main() {
    int temperatura = 25;

    // Declaração do ponteiro que irá apontar para a variável temperatura
    int *ptrTemperatura = &temperatura;

    // Exibir o valor inicial de temperatura 
    printf("Temperatura inicial: %d graus Celsius\n", temperatura);

    // Atribuindo novo valor à temperatura 
    *ptrTemperatura = 30; 

    // Exibir o novo valor da temperatura após a modificação
    printf("Nova temperatura: %d graus Celsius\n", temperatura);

    return 0;
}