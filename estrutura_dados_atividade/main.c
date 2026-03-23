#include <stdio.h>
#include <stdlib.h>
#include "N_Racional.h"

int main(int argc, char *argv[]) {

    if (argc != 5) {
        printf("Uso: num1 den1 num2 den2\n");
        return 1;
    }

    Racional *r1, *r2, *res;
    int num, den;

    r1 = cria_rac();
    r2 = cria_rac();
    res = cria_rac();

    atribui_rac(r1, atoi(argv[1]), atoi(argv[2]));
    atribui_rac(r2, atoi(argv[3]), atoi(argv[4]));

    // soma
    soma_rac(r1, r2, res);
    simplifica_rac(res);
    acessa_rac(res, &num, &den);
    printf("Soma: %d/%d\n", num, den);

    // subtração
    subtrai_rac(r1, r2, res);
    simplifica_rac(res);
    acessa_rac(res, &num, &den);
    printf("Subtracao: %d/%d\n", num, den);

    // divisão
    divide_rac(r1, r2, res);
    simplifica_rac(res);
    acessa_rac(res, &num, &den);
    printf("Divisao: %d/%d\n", num, den);

    libera_rac(r1);
    libera_rac(r2);
    libera_rac(res);

    return 0;
}