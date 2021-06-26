#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração das variáveis
    char str[200],str2[200], c;
    int i;

    // Pede uma frase
    printf("Digite uma frase: ");
    gets(str);

    // FOR para passar por toda a frase até o '\0'
    for(i=0; str[i]!='\0'; i++){
        // Se o caractere for minúsculo adiciona o caractere menos 32 (que é o equivalente maiúsculo) 
        // Se for maiúsculo ele só adiciona o caractere normal
        if(str[i] >= 97 && str[i] <= 122){
            str2[i] = str[i]-32;
        } else {
            str2[i] = str[i];
        }
    }
    
    // Coloca o '\0' no final da string
    str2[i] = '\0';

    // Escreve o resultado final
    printf("%s", str2);

    printf("\nAUTOR: JOAO PEDRO SCHUMACHER");

    return 0;
}