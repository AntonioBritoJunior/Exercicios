#include <stdio.h>
#include <math.h>

main(){
    float a, b, c, r1, r2, delta;

    printf("ax² + bx + c = 0\n");
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = (b*b -(4*a*c));
    printf("Delta  = %.2f", delta);

    if(delta == 0){
        r1 = ((-b) / (2*a));
        printf("A solucao eh %.2f", r1);
    }else if(delta < 0){
        printf("Nao ha solucoes reais");
    }else{
        r1 = (((-b) + sqrt(delta))/ (2*a));
        r2 = (((-b) - sqrt(delta))/ (2*a));
        printf("As solucoes sao %.2f e %.2f", r1, r2);
    }
}
