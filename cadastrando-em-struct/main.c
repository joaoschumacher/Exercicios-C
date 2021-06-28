#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Declarando struc com os dados dos alunos 
    struct aep {
        int matricula;  // Matricula do aluno
        char nome[100]; // Nome do aluno
        float nota1;    // Nota 1 
        float nota2;    // Nota 2
        float nota3;    // Nota 3
        float media;    // Média entre as três provas
        char resultado[10]; // Aprovado ou não
    }aluno[19];

    // Declaração de variáveis
    int i=0; 
    int alunos=0;
    int maior1=0, maior2=0, maior3=0, maior_media=0, menor_media=0;
    float v_m1=0,v_m2=0,v_m3=0, v_maior_media=0, v_menor_media=11;
    char apr[10] = {'a','p','r','o','v','a','d','o','\0'};
    char rep[10] = {'r','e','p','r','o','v','a','d','o','\0'};
    
    // Pergunta quantos alunos serão cadastrados com um número máximo de 20 alunos
    printf("Quantos alunos? (maximo 20) ");
    scanf("%i", &alunos);


    // FOR para passar por cada aluno de acordo com o valor definido na variável "alunos"
    for(i=0; i < alunos; i++) {
        printf("\nDADOS ALUNO %i", i+1);

        // Pede a matrícula
        printf("\nMatricula: ");
        scanf("%i", &aluno[i].matricula);

        // Pede o nome
        printf("Nome: ");
        scanf("%s",&aluno[i].nome);

        // Loop para verificar se as notas estão entre 0 e 10
        do {
        // Pede a primeira nota
        printf("Nota da prova 1: ");
        scanf("%f", &aluno[i].nota1);

        // Pede a segunda nota
        printf("Nota da prova 2: ");
        scanf("%f", &aluno[i].nota2);

        // Pede a terceira nota
        printf("Nota da prova 3: ");
        scanf("%f", &aluno[i].nota3);

        if (aluno[i].nota1 <= 10 && aluno[i].nota1 >= 0 && aluno[i].nota2 <= 10 && aluno[i].nota2 >= 0 && aluno[i].nota3 <= 10 && aluno[i].nota3 >= 0){
            // Se os valores das notas estiverem dentro do intervalo definido o loop é finalizado
            break;
        } else {
            // Se os valores estiverem fora do intervalo, o programa pede as notas de novo
            printf("\n-----ENTRE COM NOTAS DE 0 A 10!-----\n");
        }
        } while (1);

        // Calcula a media do aluno
        aluno[i].media = (aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3;
        
        printf("\n---------------------------------------------------\n");
        
        // IF para identificar a maior nota na primeira prova
        if (aluno[i].nota1>v_m1) {
            maior1 = i;            
            v_m1 = aluno[i].nota1;
        }
        // IF para identificar a maior nota na segunda prova
        if (aluno[i].nota2>v_m2) {
            maior2 = i;
            v_m2 = aluno[i].nota2;
        }
        // IF para identificar a maior nota na terceira prova
        if (aluno[i].nota3>v_m3) {
            maior3 = i;
            v_m3 = aluno[i].nota3;
        }
        // IF para identificar a maior média
        if (aluno[i].media>v_maior_media) {
            maior_media = i;
            v_maior_media = aluno[i].media;
        }
        // IF para identificar a menor média
        if (aluno[i].media<v_menor_media) {
            menor_media = i;
            v_menor_media = aluno[i].media;
        }
        // IF para caso a média seja menor que 6 o aluno receba em seu resultado "REPROVADO"
        // e caso ele tire maior ou igual a 6 ele recebe "APROVADO"
        if (aluno[i].media >= 6){
            strcpy(aluno[i].resultado, apr);
        } else {
            strcpy(aluno[i].resultado, rep);
        }
    }
 
    
    printf("\n\n\n\n-------------------------------------------RESULTADOS-------------------------------------------\n");
    // Os dados do aluno com a maior nota na primeira prova
    printf("\nMAIOR NOTA DA PRIMEIRA PROVA\n");
    printf("Matricula: %i\nNome: %s\nNota: %.2f",aluno[maior1].matricula, aluno[maior1].nome, aluno[maior1].nota1); 
    
    // Os dados do aluno com a maior nota na segunda prova
    printf("\nMAIOR NOTA DA SEGUNDA PROVA\n");
    printf("Matricula: %i\nNome: %s\nNota: %.2f",aluno[maior2].matricula, aluno[maior2].nome, aluno[maior2].nota2);    

    // Os dados do aluno com a maior nota na terceira prova
    printf("\nMAIOR NOTA DA TERCEIRA PROVA\n");
    printf("Matricula: %i\nNome: %s\nNota: %.2f",aluno[maior3].matricula, aluno[maior3].nome, aluno[maior3].nota3);
    printf("\n---------------------------------------------------\n");

    // Os dados do aluno com a maior média
    printf("\nALUNO COM MAIOR MEDIA\n");
    printf("Nome: %s\nNotas: %.2f, %.2f e %.2f\nMedia: %.2f", aluno[maior_media].nome, aluno[maior_media].nota1, aluno[maior_media].nota2, aluno[maior_media].nota3, aluno[maior_media].media);
    printf("\n---------------------------------------------------\n");

    // Os dados do aluno com a menor média
    printf("\nALUNO COM MENOR MEDIA\n");
    printf("Nome: %s\nNotas: %.2f, %.2f e %.2f\nMedia: %.2f", aluno[menor_media].nome, aluno[menor_media].nota1, aluno[menor_media].nota2, aluno[menor_media].nota3, aluno[menor_media].media);
    printf("\n---------------------------------------------------\n");
    

    printf("\nRESULTADOS INDIVIDUAIS\n");
    for(i=0; i < alunos; i++) {
        // Resultados individuais de cada aluno contendo o nome, média e resultado final
        printf("\n|Nome: %s      Media: %.2f      Resultado: %s  |", aluno[i].nome, aluno[i].media, aluno[i].resultado);
        printf("\n---------------------------------------------------\n");
    }
    
    printf("\nAUTOR: JOAO PEDRO SCHUMACHER\n");
    return 0;
}