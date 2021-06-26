#include <stdio.h>
#include <stdlib.h>

void str_copia(char str2[], char str1[]){
    int i;
    // FOR para copiar a string de str1 para str2
    for(i=0; str1[i]!='\0'; i++){
        str2[i] = str1[i];
    }
    // Adiciona o '\0' para determinar o final da string
    str2[i] = '\0'; 
    // Retorna os valores das strings
    return str2, str1;
}

int main()
{
    // Declaração das variáveis
    char s1[200], s2[200];

    // Pede uma string
    printf("Digite uma string:\n");
    gets(s1);

    // Chama a função str_copia para copiar o valor de s1 em s2
    str_copia(s2,s1);

    // Escreve o valor de s1 e s2
    printf("\nA string '%s' de S1 foi copiada em S2: %s", s1,s2);

    printf("\n\nAUTOR: JOAO PEDRO SCHUMACHER");
    return 0;
}