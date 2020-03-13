#include <stdio.h>
#include <math.h>


main(){
    float A, B, res;
    char opcao;

    printf("---CALCULADORA--- \nDigite o numero A: ");
    scanf("%f", &A);
    printf("Digite o numero B: ");
    scanf("%f", &B);
    printf("ESCOLHA UMA OPERACAO: \n"
    "s -> somar A e B \nb -> subtrair B de A \nm -> multiplicar A e B \n"
    "d -> dividir A por B \nq -> quociente de A por B \nr -> resto da divisao de A por B\n"
    "e -> A elevado a B \nz -> raiz Aesima de B (B elevado a 1/A)\n");
    scanf(" %c", &opcao);


    if(opcao == 's'){
        res = (A + B);
        printf("A + B = %.2f", res);
    }else if(opcao == 'b'){
        res = (A - B);
        printf("A - B = %.2f", res);
    }else if(opcao == 'm'){
        res = (A * B);
        printf("A * B = %.2f", res);
    }else if(opcao == 'd'){
        res = (A / B);
        printf("A / B = %.2f", res);
    }else if(opcao == 'q'){
        res = (((int) A) / ((int) B));
        printf("A / B = %.2f (QUOCIENTE)", res);
    }else if(opcao == 'r'){
        res = (((int) A) % ((int) B));
        printf("A % B = %.2f", res);
    }else if(opcao == 'e'){
        res = (pow(A, B));
        printf("A ^ B = %.2f", res);
    }else if(opcao == 'z'){
        res = (pow(B, 1/A));
        printf("Raiz A de B = %.2f", res);
    }else{
        printf("Opcao invalida");
    }

}

