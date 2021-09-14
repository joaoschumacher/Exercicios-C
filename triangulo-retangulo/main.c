#include <stdio.h>
#include <stdlib.h>

// Função para calcular o valor que falta
int triangulo_retangulo(float *oposto, float *adjacente, float *hipotenusa) {
    // Caso nao saiba o valor do oposto
    if(*oposto == 0){
        *oposto = sqrt(pow(*hipotenusa,2)-pow(*adjacente,2));
        return 0;
    // Caso nao saiba o valor do adjacente
    } else if (*adjacente == 0){
        *adjacente = sqrt(pow(*hipotenusa,2)-pow(*oposto,2));
        return 0;
    // Caso nao saiba o valor da hipotenusa
    } else if (*hipotenusa == 0){
        *hipotenusa = sqrt(pow(*oposto,2)+pow(*adjacente,2));
        return 0;
    } else {
        return -1;
    }

}

int main()
{
    // Variáveis
    float Co=0, Ca=0, h=0;
    int ret=0;

    // Pede o valor pro usuário
    printf("Triangulo retangulo (valor desconhecido como '0')\n");
    printf("Digite o valor do cateto oposto: ");
    scanf("%f", &Co);

    printf("Digite o valor do cateto adjacente: ");
    scanf("%f", &Ca);

    printf("Digite o valor do hipotenusa: ");
    scanf("%f", &h);

    // Chama a função e coloca o return dentro de "ret"
    ret = triangulo_retangulo(&Co, &Ca, &h);

    // Verifica se a função conseguiu comprir o que é necessario

    // Se sim ele mostra todos os valores
    if(ret == 0){
        printf("\n\nCateto oposto: %.2f", Co);
        printf("\nCateto adjacente: %.2f", Ca);
        printf("\nHipotenusa: %.2f", h);

    // Se não ele mostra Erro de parametro
    } else if (ret == -1){
        printf("Erro de parametro!!!");
    }

    printf("\n\n\nAutor: Joao Pedro Schumacher");
    return 0;
}
