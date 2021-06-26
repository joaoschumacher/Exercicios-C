#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração das variáveis
    char str[200];
    int i,j;

    // Pede a frase
    printf("Digite uma frase: ");
    gets(str);

    // FOR para passar pela string
    for(i=0; str[i]!='\0'; i++){
        // FOR para escrever o número certo de caracteres por vez
        // se baseando na variável j
        for(j=0; j<=i; j++){
            printf("%c", str[j]);
        }
        // '\n' para quebrar a linha
        printf("\n");
    }

    printf("\nAUTOR: JOAO PEDRO SCHUMACHER");

    return 0;
}