#include <stdio.h>
#include <stdlib.h>
#include "N_Racional.h"

struct racional {
    int num;
    int den;
};

// (MDC)
int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

Racional* cria_rac() {
    Racional* r = (Racional*) malloc(sizeof(Racional));
    return r;
}

void libera_rac(Racional* r) {
    free(r);
}

int atribui_rac(Racional* r, int num, int den) {
    if (r == NULL || den == 0) return 0;

    r->num = num;
    r->den = den;
    return 1;
}

int acessa_rac(Racional* r, int* num, int* den) {
    if (r == NULL) return 0;

    *num = r->num;
    *den = r->den;
    return 1;
}

int soma_rac(Racional* r1, Racional* r2, Racional* r3) {
    if (!r1 || !r2 || !r3) return 0;

    r3->den = r1->den * r2->den;
    r3->num = r1->num * r2->den + r2->num * r1->den;

    return 1;
}

int subtrai_rac(Racional* r1, Racional* r2, Racional* r3) {
    if (!r1 || !r2 || !r3) return 0;

    r3->den = r1->den * r2->den;
    r3->num = r1->num * r2->den - r2->num * r1->den;

    return 1;
}

int multiplica_rac(Racional* r1, Racional* r2, Racional* r3) {
    if (!r1 || !r2 || !r3) return 0;

    r3->num = r1->num * r2->num;
    r3->den = r1->den * r2->den;

    return 1;
}

int divide_rac(Racional* r1, Racional* r2, Racional* r3) {
    if (!r1 || !r2 || !r3 || r2->num == 0) return 0;

    r3->num = r1->num * r2->den;
    r3->den = r1->den * r2->num;

    return 1;
}

int simplifica_rac(Racional* r) {
    if (!r) return 0;

    int d = mdc(r->num, r->den);

    r->num /= d;
    r->den /= d;

    return 1;
}