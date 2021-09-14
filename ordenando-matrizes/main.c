#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variaveis
    int matriz[6][6];
    int x,y;

    // Pede os números pra matriz
    printf("Escreva os valores da matriz 6x6\n");
    for(x=0; x<6; x++){
        for(y=0; y<6; y++){
            printf(">");
            scanf("%i",&matriz[x][y]);
        }
    }

    // Mostra a matriz original
    printf("Matriz Original\n");
    for(x=0; x<6; x++){
        for(y=0; y<6; y++){
            printf("%i\t",matriz[x][y]);
        }
        printf("\n\n");
    }
    printf("\n\n");

    // Variaveis
    int temp,troca = 1;
    int vet[36], i=0;

    // Transforma a matriz em vetor
    for(x=0; x<6; x++){
        for(y=0; y<6; y++,i++){
            vet[i] = matriz[x][y];
        }
    }

    // LOOP para ordenanr o vetor
    while(troca==1){
        troca = 0;
        for (x=0; x<35; x++){
            if (vet[x] > vet[x + 1]){
                troca = 1;
                temp = vet[x];
                vet[x] = vet[x + 1];
                vet[x + 1] = temp;
            }
        }
    }

    // Transforma o vetor em matriz
    i=0;
    for(x=0; x<6; x++){
        for(y=0; y<6; y++,i++){
            matriz[x][y] = vet[i];
        }
    }

    // Mostra a matriz ordenada
    printf("Matriz Ordenada\n");
    for(x=0; x<6; x++){
        for(y=0; y<6; y++){
            printf("%i\t",matriz[x][y]);
        }
        printf("\n\n");
    }
    printf("AUTOR: JOAO PEDRO SCHUMACHER\n");
    return 0;
}
