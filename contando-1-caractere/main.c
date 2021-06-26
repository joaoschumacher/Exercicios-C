#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração das variáveis
    char str[100], caractere; 
    int i, count=0;           

    // Pede uma frase
    printf("Digite uma frase (ate 100 caracteres): "); 
    gets(str);

    // Pede um caractere
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    // Repetição até chegar no fim da string
    for(i=0; str[i]!='\0'; i++){
        // If que testa se a letra da string é igual ao caractere escolhido
        if(str[i] == caractere){
            // Se sim conta 1
            count++;
        }
    }

    // Mostra o resultado do programa
    printf("\nNa frase '%s' a letra '%c' aparece: %i vezes\n", str, caractere, count);

    printf("\nAUTOR: JOAO PEDRO SCHUMACHER");
    return 0;
}