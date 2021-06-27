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
        float media;
    }aluno[19];

    int i=0; 
    int alunos=0;
    int maior1=0, maior2=0, maior3=0;
    float m1=0,m2=0,m3=0;
    
    printf("Quantos alunos? (maximo 20) ");
    scanf("%i", &alunos);

    for(i=0; i < alunos; i++) {
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
        
        if (aluno[i].nota1>=m1) {
            maior1 = i;            
            m1 = aluno[i].nota1;
        }
        if (aluno[i].nota2>=m2) {
            maior2 = i;
            m2 = aluno[i].nota1;
        }
        if (aluno[i].nota3>=m3) {
            maior3 = i;
            m3 = aluno[i].nota1;
        }
    }
    for (int i = 0; i < alunos; i++)
    {
        printf("\n%i",aluno[i].nota1);
        printf("\n%i",aluno[i].nota2);
        printf("\n%i",aluno[i].nota3);
        printf("\n-------------");
    }
    

    printf("\nMAIOR NOTA DA PRIMEIRA PROVA\n");
    printf("Matricula: %i\nNome: %s\nNota: %f",aluno[maior1].matricula, aluno[maior1].nome, aluno[maior1].nota1);
    
    printf("\nMAIOR NOTA DA SEGUNDA PROVA\n");
    printf("Matricula: %i\nNome: %s\nNota: %f",aluno[maior2].matricula, aluno[maior2].nome, aluno[maior2].nota2);    

    printf("\nMAIOR NOTA DA TERCEIRA PROVA\n");
    printf("Matricula: %i\nNome: %s\nNota: %f",aluno[maior3].matricula, aluno[maior3].nome, aluno[maior3].nota3);

    return 0;
}