#include <stdio.h>

int fatorial(int n) { 
    // caso base: quando a função deve parar de se chamar
    if (n == 0 || n == 1) {
        return 1;
    }
    // caso recursivo: parte da função que se chama novamente até chegar ao caso base.
    else {
        return n * fatorial(n - 1);
    }    
}

int main() {
    int numero = 5; 
    printf("O fatorial de %d é: %d\n", numero, fatorial(numero));
    return 0;
}