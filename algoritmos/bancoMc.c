#include <stdio.h>

// Armazena dados da conta 
struct Conta {
    int numero;
    char titular[50];
    float saldo;
}; 

// função para acrescentar valor do depósito na conta do titular
void deposito(struct Conta *conta, float valor) {
    conta -> saldo += valor;
}

// Verifica se o valor na conta é suficiente para efetuar o saque
int saque(struct Conta *conta, float valor) {
    if (conta -> saldo >= valor) {
        conta -> saldo -= valor;
        return 1; // Saque bem-sucedido
    } else {
        printf("Saldo insuficiente para realizar o saque. \n");
        return 0; // Saque mal-sucedido
    }    
}

// Define a origem do valor e o destino do valor 
int transferencia(struct Conta *origem, struct Conta *destino, float valor) {
    if(saque(origem, valor)) {
        deposito(destino, valor);
        return 1; // transferência bem-sucedida
    } else {
        printf("Transferência mal-sucedida. \n");
        return 0; 
    }
}

int main() {
    // Criação de duas instâncias da struct Conta
    struct Conta contas[2] = {{1, "Cliente 1", 1000.0}, {2, "Cliente 2", 2000.0}};

    // Criando variáveis de operação, conta de origem e conta de destino 
    int op, cc, cc2; 
    float valor;

    // Menu de Início
    do{
        printf("\n BANCO M.C.\n\n");

        printf("Saldo Conta 1: R$.2f\n", contas[0].saldo);
        printf("Saldo Conta 2: R$.2f\n", contas[1]. saldo);

        printf(" 1 - Depósito\n");
        printf(" 2 - Saque\n");
        printf(" 3 - Transferência\n"); 
        printf(" 4 - Sair\n"); 

        printf("\n Escolha uma operação: "); 
        scanf("%d", &op);

        // Opções de operações disponíveis em estrutura Switch Case
        switch (op)
        {
            case 1: 
                printf("\n Qual a conta para depósito? "); 
                scanf("%d", &cc);
                printf("Digite o valor para deposito: ");
                scanf("%f", &valor); 
                deposito(&contas[cc-1], valor);
                break;

            case 2: 
                printf("\n Qual a conta para saque? ");
                scanf("%d", &cc);
                printf("Digite o valor: "); 
                scanf("%f", &valor); 
                saque(&contas[cc-1], valor);
                break;
            
            case 3: 
                printf("\n Qual a conta de origem? ");
                scanf("%d", &cc);
                printf("Qual a conta de destino? "); 
                scanf("%d", &cc2); 
                printf("Digite o valor: ");
                scanf("%f", valor);
                transferencia(&contas[cc-1], &contas[cc2-1], valor);
                break
            
            default: 
                break; 
        }  
    // Os comandos acima serão executados enquanto as operações forem menores que 4
    } while (op < 4); 

    return 0;
}

