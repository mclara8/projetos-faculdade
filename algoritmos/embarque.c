#include <stdio.h> 
#include <stdbool.h> 

// uma struct pode armazenar de forma organizada diferentes tipos de dados 
struct Passageiro {
    char nome [50];
    int idade;
    int bilhete;
    bool assistencia;
};

int main(){
    // Declarando variável struct Passageiro
    struct Passageiro passageiro;
    // Mensagem introdutória para preenchimento de dados necessários
    printf("Olá, seja bem-vindo(a)! Para embarcar, é necessário que preencha as informações a seguir:\n");
    //Atribuindo valores as variáveis struct através dos dados de entrada 
    printf("Digite o seu nome: \n");
    scanf("%s", passageiro.nome); 
    
    printf("Digite a sua idade: \n");
    scanf("%d", &passageiro.idade);
    
    printf("Digite o número do seu bilhete: \n");
    scanf("%d", &passageiro.bilhete);

    int resposta;
    printf("Será necessário assistência especial? (1 para Sim, 0 para Não): \n");
    scanf("%d", &resposta);
    passageiro.assistencia = resposta == 1;
    
    // Estrutura condicional para filtrar passageiros conforme os parâmetros de idade e necessidade de assistência especial
    if (passageiro.idade >= 18){
        printf("Embarque autorizado! \n");
        
        if (passageiro.assistencia){
            printf("Embarque autorizado com assistência especial! \n");
        }

    } else {
        printf("Embarque negado, idade insuficiente");
    }

    return 0; 
}