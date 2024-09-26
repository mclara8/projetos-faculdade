#include <stdio.h>
#include <limits.h>

void maximoMinimo(int valores[], int tamanho, int *maximo, int *minimo) {
    *maximo = INT_MIN; 
    // Inicializa o máximo com o menor valor possível
    *minimo = INT_MAX; 
    // Inicializa o mínimo com o maior valor possível

    for (int i = 0; i < tamanho; i++) {
        if (valores[i] > *maximo) {
            *maximo = valores[i];
        }
        if (valores[i] < *minimo) {
            *minimo = valores[i];
        }
    }
}

int main() {
    const int tamanho = 20; // Quantidade de valores a serem lidos
    int valores[tamanho];
    int maximo, minimo;

    // Leitura dos valores
    printf("Digite 20 valores de potência (em Watts):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Encontrar máximo e mínimo
    maximoMinimo(valores, tamanho, &maximo, &minimo);

    // Exibir resultados
    printf("Potência máxima: %d W\n", maximo);
    printf("Potência mínima: %d W\n", minimo);

    printf("Pressione Enter para sair...");
    getchar();
    getchar();
    
    return 0;
}
