#include <stdio.h>

int fatorial_tail(int n, int resultado) {
    if(n == 0 || n == 1){
        return resultado;
    }
    else {
        return fatorial_tail(n - 1, * resultado);
    }
}

int fatorial(int n) { 
    return fatorial_tail(n, 1);
}

int main() {
    int numero = 5;
    printf("O fatorial de %d é: %d\n", numero, fatorial(numero)); 
    return 0
}