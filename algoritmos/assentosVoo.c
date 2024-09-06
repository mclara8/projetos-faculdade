#include <stdio.h>
#include <stdbool.h>

#define TOTAL_PRIMEIRA_CLASSE 10
#define TOTAL_EXECUTIVA 30
#define TOTAL_ECONOMICA 150

// Estrutura para armazenar informações dos passageiros
typedef struct {
    char nome[50];
    int classe;
    bool necessidade_especial;
    char preferencia_assento; // W para janela, A para corredor, C para central
} Passageiro;

// Função para verificar se há assentos disponíveis em uma classe
bool haAssentosDisponiveis(int assentosDisponiveis) {
    return assentosDisponiveis > 0;
}

// Função para alocar passageiros em assentos disponíveis
void alocarPassageiros(Passageiro passageiros[], int totalPassageiros, int *assentosPrimeiraClasse, int *assentosExecutiva, int *assentosEconomica) {
    for (int i = 0; i < totalPassageiros; i++) {
        switch (passageiros[i].classe) {
            case 1: // Primeira Classe
                if (haAssentosDisponiveis(*assentosPrimeiraClasse)) {
                    (*assentosPrimeiraClasse)--;
                    printf("Passageiro %s alocado na Primeira Classe.\n", passageiros[i].nome);
                } else {
                    printf("Sem assentos na Primeira Classe para %s.\n", passageiros[i].nome);
                }
                break;
            case 2: // Classe Executiva
                if (haAssentosDisponiveis(*assentosExecutiva)) {
                    (*assentosExecutiva)--;
                    printf("Passageiro %s alocado na Classe Executiva.\n", passageiros[i].nome);
                } else {
                    printf("Sem assentos na Classe Executiva para %s.\n", passageiros[i].nome);
                }
                break;
            case 3: // Classe Econômica
                if (haAssentosDisponiveis(*assentosEconomica)) {
                    (*assentosEconomica)--;
                    printf("Passageiro %s alocado na Classe Econômica.\n", passageiros[i].nome);
                } else {
                    printf("Sem assentos na Classe Econômica para %s.\n", passageiros[i].nome);
                }
                break;
            default:
                printf("Classe inválida para o passageiro %s.\n", passageiros[i].nome);
                break;
        }
    }
}

int main() {
    int assentosPrimeiraClasse = TOTAL_PRIMEIRA_CLASSE;
    int assentosExecutiva = TOTAL_EXECUTIVA;
    int assentosEconomica = TOTAL_ECONOMICA;

    // Exemplo de passageiros
    Passageiro passageiros[5] = {
        {"Ana", 1, false, 'W'},
        {"Bruno", 2, true, 'A'},
        {"Carlos", 3, false, 'C'},
        {"Daniela", 3, false, 'W'},
        {"Eduardo", 2, true, 'C'}
    };

    int totalPassageiros = sizeof(passageiros) / sizeof(passageiros[0]);

    alocarPassageiros(passageiros, totalPassageiros, &assentosPrimeiraClasse, &assentosExecutiva, &assentosEconomica);

    // Exibe assentos restantes após alocação
    printf("Assentos restantes na Primeira Classe: %d\n", assentosPrimeiraClasse);
    printf("Assentos restantes na Classe Executiva: %d\n", assentosExecutiva);
    printf("Assentos restantes na Classe Econômica: %d\n", assentosEconomica);

    return 0;
}