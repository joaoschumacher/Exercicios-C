#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct aep {
        int matricula;
        char nome[100];
        float nota1;
        float nota2;
        float nota3;
    }aluno[20];

    int i=0; 
    int alunos=0;

    printf("\nMatricula: ");
    scanf("%i", &aluno[1].matricula);

    printf("Nome: ");
    gets(aluno[1].nome);

    printf("Nota da prova 1: ");
    scanf("%f", &aluno[1].nota1);

    printf("Nota da prova 2: ");
    scanf("%f", &aluno[1].nota2);
    
    printf("Nota da prova 3: ");
    scanf("%f", &aluno[1].nota3);

    printf("\nMatricula: ");
    scanf("%i", &aluno[2].matricula);

    printf("Nome: ");
    gets(aluno[2].nome);

    printf("Nota da prova 1: ");
    scanf("%f", &aluno[2].nota1);

    printf("Nota da prova 2: ");
    scanf("%f", &aluno[2].nota2);
    
    printf("Nota da prova 3: ");
    scanf("%f", &aluno[2].nota3);
    
    //printf("Quantos alunos? (maximo 20) ");
    //scanf("%i", &alunos);

    /*for(i=1; i < 3; i++) {
        printf("\nDADOS ALUNO %i", i+1);

        printf("\nMatricula: ");
        scanf("%i", &aluno[i].matricula);

        printf("Nome: ");
        scanf("%s",&aluno[i].nome);

        printf("Nota da prova 1: ");
        scanf("%f", &aluno[i].nota1);

        printf("Nota da prova 2: ");
        scanf("%f", &aluno[i].nota2);

        printf("Nota da prova 3: ");
        scanf("%f", &aluno[i].nota3);
        printf("\n---------------------------------------------------\n");
        printf("Matricula: %i\nNome: %s\nn1: %f\nn2: %f\nn3: %f\n", aluno[i].matricula, aluno[i].nome, aluno[i].nota1, aluno[i].nota2, aluno[i].nota3);
    }*/
    
    return 0;
}