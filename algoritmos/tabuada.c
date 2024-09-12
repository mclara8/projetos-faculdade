#include <stdio.h>
#include <math.h>
#include <string.h> 

int main(){

    int tabuada;
    int resultado;
    int count = 1; 

    printf("Deseja acessar a tabuada de qual número? ");
    scanf("%d", &tabuada);
    
    while(count <= 10){
        resultado = tabuada * count;

        printf("%d x %d = %d\n", tabuada, count, resultado);

        count++;
    }

}