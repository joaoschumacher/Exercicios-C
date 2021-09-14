#include <stdio.h>
#include <stdlib.h>

int ordena(int *n1, int *n2, int *n3, char ordem){
    int temp;
    if(ordem == 'c' || ordem == 'C'){
        if( *n1 > *n2 ){
            temp = *n1;
            *n1 = *n2;
            *n2 = temp;
        }
        if( *n2 > *n3 ){
            temp = *n2;
            *n2 = *n3;
            *n3 = temp;
        }
        if( *n1 > *n2 ){
            temp = *n1;
            *n1 = *n2;
            *n2 = temp;
        }
        return 0;
    } else if (ordem == 'd' || ordem == 'D'){
        if( *n1 < *n2 ){
            temp = *n1;
            *n1 = *n2;
            *n2 = temp;
        }
        if( *n2 < *n3 ){
            temp = *n2;
            *n2 = *n3;
            *n3 = temp;
        }
        if( *n1 < *n2 ){
            temp = *n1;
            *n1 = *n2;
            *n2 = temp;
        }
        return 0;
    } else {
        return -1;
    }
}

int main (void) {
    // Variaveis
    int n1, n2, n3;
    char ordem;
    int res;

    // Pede 3 valores
    printf("Digite o valor de n1, n2 e n3: \n");
    scanf("%i""%i""%i", &n1, &n2, &n3);

    // Pede a letra pra crescente ou decrescente
    printf("Ordenar em ordem crescente(c) ou decrescente(d)?\n");
    getchar();
    ordem = getchar();

    // Mostra os valores antes de ordenar
    printf("Valores antes da ordenacao: %i, %i, %i\n", n1,n2,n3);

    // Chama a funcao para ordenar
    res = ordena(&n1,&n2,&n3,ordem);

    if(res == 0){
        // Mostra os valores depois de ordenar
        printf("Valores depois da ordenacao: %i, %i, %i\n", n1,n2,n3);
    } else {
        printf("\n\n\n\n\nERRO DE PARAMETRO\n\n\n\n\n");
    }

    printf("\nAUTOR: JOAO PEDRO SCHUMACHER");

    return 0;
}
