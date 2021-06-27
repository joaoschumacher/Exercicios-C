#include <stdio.h>
#include <stdlib.h>

int bissexto (int ano) { // Função para determinar se o ano é ou não bissexto
    // Retorna 0 em ano normal e 1 em ano bissexto
	return (ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0));
}

int main()
{
    // Struct para as datas
    struct dma {
        int dia;
        int mes;
        int ano;
    }data1, data2;
    

    int dias=0,i,c,mes;

    // Vetor para um ano normal (ndias) e vetor para um ano bissexto (bdias)
    int ndias[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int bdias[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Pede a primeira data e envia para a struct em data1
    printf("\nESCREVA A DATA MAIS ANTIGA: \n");
    printf("Digite um dia: ");
    scanf("%i", &data1.dia);
    printf("Digite um mes: ");
    scanf("%i", &data1.mes);
    printf("Digite um ano: ");
    scanf("%i", &data1.ano);

    printf("%i/%i/%i", data1.dia, data1.mes, data1.ano);
    
    // Pede a segunda data e envia para a struct em data2
    printf("\nESCREVA A DATA MAIS RECENTE: ");
    printf("\nDigite um dia: ");
    scanf("%i", &data2.dia);
    printf("Digite um mes: ");
    scanf("%i", &data2.mes);
    printf("Digite um ano: ");
    scanf("%i", &data2.ano);

    printf("%i/%i/%i", data2.dia, data2.mes, data2.ano);


    // Verifica se as datas são válidas
    if (data1.ano > 0 && data2.ano > 0 && data1.ano < 9999 && data2.ano < 9999 && data1.mes > 0 && data2.mes > 0 && data1.mes <= 12 && data2.mes <= 12 && data1.dia > 0 && data2.dia > 0 && data1.dia <= 30 && data2.dia <= 30)  {

        // FOR para passar pelos anos
        for(i=data1.ano; i<=data2.ano; i++){
            // IF para ver se é ou não bissexto
            if (bissexto(i) == 0) {
                mes = 12;
                c = 1;
                // IF verifica se o ano e o mes das datas são iguais
                if(data1.mes == data2.mes && data1.ano == data2.ano){
                    mes = data2.mes;
                    c = data1.mes;
                  // ELSE IF caso o ano atual do FOR na variável i é igual ao ano inicial
                } else if (data1.ano == i) {
                    c=data1.mes;
                  // ELSE IF caso o ano atual do FOR na variável i é igual ao ano final
                } else if (i == data2.ano) {
                    mes = data2.mes;
                    c=1;
                  // Caso se um mês entre o inicial e o final
                } else {
                    mes = 12;
                    c = 1;
                }                    

                // FOR para passar pelos meses do ano atual do FOR
                for(c; c<=mes; c++) {
                    // Adiciona o valor do mês de acordo com o mês em C
                    dias += ndias[c]; 
                   
                    // Se for o ano inicial e o mês inicial
                    if (data1.ano == i && c == data1.mes) {
                        dias -= data1.dia;
                    // Se for o ano final e o mês final
                    } else if (data2.ano == i && c == data2.mes) {
                        dias -= (ndias[c]-data2.dia);
                    // Se os meses e os anos forem iguais
                    } else if (data1.mes == data2.mes && data1.ano == data2.ano) {
                        dias = (data2.dia - data1.dia);
                    }
                }
              // IF para ver se é ou não bissexto
            } else if (bissexto(i) == 1) {
                mes = 12;
                c = 1;
                // IF verifica se o ano e o mes das datas são iguais
                if(data1.mes == data2.mes && data1.ano == data2.ano){
                    mes = data2.mes;
                    c = data1.mes;
                  // ELSE IF caso o ano atual do FOR na variável i é igual ao ano inicial
                } else if (data1.ano == i) {
                    c=data1.mes;
                  // ELSE IF caso o ano atual do FOR na variável i é igual ao ano final
                } else if (i == data2.ano) {
                    mes = data2.mes;
                    c=1;
                  // Caso se um mês entre o inicial e o final
                } else {
                    mes = 12;
                    c = 1;
                }                

                // FOR para passar pelos meses do ano atual do FOR   
                for(c; c<=mes; c++) {
                    // Adiciona o valor do mês de acordo com o mês em C
                    dias += bdias[c]; 
                   
                    // Se for o ano inicial e o mês inicial
                    if (data1.ano == i && c == data1.mes) {
                        dias -= data1.dia;
                    // Se for o ano final e o mês final
                    } else if (data2.ano == i && c == data2.mes) {
                        dias -= (bdias[c]-data2.dia);
                    // Se os meses e os anos forem iguais
                    } else if (data1.mes == data2.mes && data1.ano == data2.ano) {
                        dias = (data2.dia - data1.dia);
                    }
                }
            }
        }
        // Escreve na tela os resultados
        printf("\n\nEntre %i/%i/%i e %i/%i/%i ha %i dias", data1.dia, data1.mes, data1.ano, data2.dia, data2.mes, data2.ano, dias);

    }
    else {
        printf("\nData invalida!");
    }

    printf("\nAUTOR: JOAO PEDRO SCHUMACHER");

    return 0;
}