#include <stdio.h>

main(){
    char cod_prod;

    printf("Por favor forneca o codigo do produto (valores validos de A a D): ");
    scanf(" %c", &cod_prod);

    if(cod_prod == 'A'){
        printf("Lampada 60W e o valor total eh R$%.2f", 1.2*7);
    }else{
        if(cod_prod == 'B'){
                printf("Lampada 100W e o valor total eh R$%.2f", 2.5*5);
        }else{
            if(cod_prod == 'C'){
                printf("Reator de partida lenta e o valor total ehR$%.f", 59.0*3);
            }else{
                if(cod_prod == 'D'){
                    printf("Reator de partida rapida e o valor total eh R$ %.2f", 124.0*2);
                }else{
                    printf("Produto nao disponivel no estoque");
                }


            }

        }
    }
    printf("\n\n");
    if(cod_prod == 'A'){
        printf("Lampada 60W e o valor total eh R$%.2f", 1.2*7);
    }else if(cod_prod == 'B'){
        printf("Lampada 100W e o valor total eh R$%.2f", 2.5*5);
    }else if(cod_prod == 'C'){
        printf("Reator de partida lenta e o valor total eh R$%.f", 59.0*3);
    }else if(cod_prod == 'D'){
        printf("Reator de partida rapida e o valor total eh R$%.2f", 124.0*2);
    }else{
        printf("Produto nao disponivel no estoque");
    }


    printf("\nFIM DO PROGRAMA");
}
