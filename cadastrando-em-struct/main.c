#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    struct aep {
        int matricula;
        char nome[100];
        float nota1;
        float nota2;
        float nota3;
        float media;
        char resultado[10];
    }aluno[19];

    int i=0; 
    int alunos=0;
    int maior1=0, maior2=0, maior3=0, maior_media=0, menor_media=0;
    float v_m1=0,v_m2=0,v_m3=0, v_maior_media=0, v_menor_media=11;
    char apr[10] = {'a','p','r','o','v','a','d','o','\0'};
    char rep[10] = {'r','e','p','r','o','v','a','d','o','\0'};
    
    printf("Quantos alunos? (maximo 20) ");
    scanf("%i", &alunos);

    for(i=0; i < alunos; i++) {
        printf("\nDADOS ALUNO %i", i+1);

        printf("\nMatricula: ");
        scanf("%i", &aluno[i].matricula);

        printf("Nome: ");
        scanf("%s",&aluno[i].nome);
        do {
        printf("Nota da prova 1: ");
        scanf("%f", &aluno[i].nota1);

        printf("Nota da prova 2: ");
        scanf("%f", &aluno[i].nota2);

        printf("Nota da prova 3: ");
        scanf("%f", &aluno[i].nota3);
        if (aluno[i].nota1 <= 10 && aluno[i].nota1 >= 0 && aluno[i].nota2 <= 10 && aluno[i].nota2 >= 0 && aluno[i].nota3 <= 10 && aluno[i].nota3 >= 0){
            break;
        } else {
            printf("\n-----ENTRE COM NOTAS DE 0 A 10!-----\n");
        }
        } while (1);

        aluno[i].media = (aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3;
        
        printf("\n---------------------------------------------------\n");
        
        if (aluno[i].nota1>v_m1) {
            maior1 = i;            
            v_m1 = aluno[i].nota1;
        }
        if (aluno[i].nota2>v_m2) {
            maior2 = i;
            v_m2 = aluno[i].nota2;
        }
        if (aluno[i].nota3>v_m3) {
            maior3 = i;
            v_m3 = aluno[i].nota3;
        }
        if (aluno[i].media>v_maior_media) {
            maior_media = i;
            v_maior_media = aluno[i].media;
        }
        if (aluno[i].media<v_menor_media) {
            menor_media = i;
            v_menor_media = aluno[i].media;
        }
        if (aluno[i].media >= 6){
            strcpy(aluno[i].resultado, apr);
        } else {
            strcpy(aluno[i].resultado, rep);
        }
    }
 
    
    printf("\n\n\n\n-------------------------------------------RESULTADOS-------------------------------------------\n");
    printf("\nMAIOR NOTA DA PRIMEIRA PROVA\n");
    printf("Matricula: %i\nNome: %s\nNota: %.2f",aluno[maior1].matricula, aluno[maior1].nome, aluno[maior1].nota1);
    
    printf("\nMAIOR NOTA DA SEGUNDA PROVA\n");
    printf("Matricula: %i\nNome: %s\nNota: %.2f",aluno[maior2].matricula, aluno[maior2].nome, aluno[maior2].nota2);    

    printf("\nMAIOR NOTA DA TERCEIRA PROVA\n");
    printf("Matricula: %i\nNome: %s\nNota: %.2f",aluno[maior3].matricula, aluno[maior3].nome, aluno[maior3].nota3);
    printf("\n---------------------------------------------------\n");
    printf("\nALUNO COM MAIOR MEDIA\n");
    printf("Nome: %s\nNotas: %.2f, %.2f e %.2f\nMedia: %.2f", aluno[maior_media].nome, aluno[maior_media].nota1, aluno[maior_media].nota2, aluno[maior_media].nota3, aluno[maior_media].media);
    printf("\n---------------------------------------------------\n");
    printf("\nALUNO COM MENOR MEDIA\n");
    printf("Nome: %s\nNotas: %.2f, %.2f e %.2f\nMedia: %.2f", aluno[menor_media].nome, aluno[menor_media].nota1, aluno[menor_media].nota2, aluno[menor_media].nota3, aluno[menor_media].media);
    printf("\n---------------------------------------------------\n");
        printf("\nRESULTADOS INDIVIDUAIS\n");
    for(i=0; i < alunos; i++) {
        printf("\n|Nome: %s      Media: %.2f      Resultado: %s  |", aluno[i].nome, aluno[i].media, aluno[i].resultado);
        printf("\n---------------------------------------------------\n");
    }
    
    printf("\nAUTOR: JOAO PEDRO SCHUMACHER\n");
    return 0;
}