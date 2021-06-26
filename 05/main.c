#include <stdio.h>
#include <stdlib.h>

int bissexto (int ano) {
	return (ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0));
}

int main()
{
    struct dma {
        int dia;
        int mes;
        int ano;
    }data1, data2;
    
    int dias=0,i,c,mes;
    int ndias[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int bdias[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("\nESCREVA A DATA MAIS ANTIGA: \n");
    printf("Digite um dia: ");
    scanf("%i", &data1.dia);
    printf("Digite um mes: ");
    scanf("%i", &data1.mes);
    printf("Digite um ano: ");
    scanf("%i", &data1.ano);

    printf("%i/%i/%i", data1.dia, data1.mes, data1.ano);
    
    printf("\nESCREVA A DATA MAIS RECENTE: ");
    printf("\nDigite um dia: ");
    scanf("%i", &data2.dia);
    printf("Digite um mes: ");
    scanf("%i", &data2.mes);
    printf("Digite um ano: ");
    scanf("%i", &data2.ano);

    printf("%i/%i/%i", data2.dia, data2.mes, data2.ano);

    if (data1.ano > 0 && data2.ano > 0 && data1.ano < 9999 && data2.ano < 9999 && data1.mes > 0 && data2.mes > 0 && data1.mes <= 12 && data2.mes <= 12 && data1.dia > 0 && data2.dia > 0 && data1.dia <= 30 && data2.dia <= 30)  {

        for(i=data1.ano; i<=data2.ano; i++){
            if (bissexto(i) == 0) {
                mes = 12;
                c = 1;
                if(data1.mes == data2.mes && data1.ano == data2.ano){
                    mes = data2.mes;
                    c = data1.mes;
                } else if (data1.ano == i) {
                    c=data1.mes;
                } else if (i == data2.ano) {
                    mes = data2.mes;
                    c=1;
                } else {
                    mes = 12;
                    c = 1;
                }                    

                for(c; c<=mes; c++) {

                    dias += ndias[c]; 
                   
                    if (data1.ano == i && c == data1.mes) {
                        dias -= data1.dia;
                    } else if (data2.ano == i && c == data2.mes) {
                        dias -= (ndias[c]-data2.dia);
                    } else if (data1.mes == data2.mes && data1.ano == data2.ano) {
                        dias = (data2.dia - data1.dia);
                    }
                }
            } else if (bissexto(i) == 1) {
                mes = 12;
                c = 1;
                if(data1.mes == data2.mes && data1.ano == data2.ano){
                    mes = data2.mes;
                    c = data1.mes;
                } else if (data1.ano == i) {
                    c=data1.mes;
                } else if (i == data2.ano) {
                    mes = data2.mes;
                    c=1;
                } else {
                    mes = 12;
                    c = 1;
                }                   
                for(c; c<=mes; c++) {
                    dias += bdias[c]; 
                   
                    if (data1.ano == i && c == data1.mes) {
                        dias -= data1.dia;
                    } else if (data2.ano == i && c == data2.mes) {
                        dias -= (bdias[c]-data2.dia);
                    } else if (data1.mes == data2.mes && data1.ano == data2.ano) {
                        dias = (data2.dia - data1.dia);
                    }
                }
            }
        }
        printf("\n\n Entre %i/%i/%i e %i/%i/%i ha %i dias", data1.dia, data1.mes, data1.ano, data2.dia, data2.mes, data2.ano, dias);

    }
    else {
        printf("\nData invalida!");
    }

    printf("AUTOR: JOAO PEDRO SCHUMACHER");

    return 0;
}