#ifndef NRACIONAL_H
#define NRACIONAL_H

typedef struct racional Racional;

// criação e liberação
Racional* cria_rac();
void libera_rac(Racional* r);

// operações básicas
int atribui_rac(Racional* r, int num, int den);
int acessa_rac(Racional* r, int* num, int* den);

// operações matemáticas
int soma_rac(Racional* r1, Racional* r2, Racional* r3);
int subtrai_rac(Racional* r1, Racional* r2, Racional* r3);
int multiplica_rac(Racional* r1, Racional* r2, Racional* r3);
int divide_rac(Racional* r1, Racional* r2, Racional* r3);

// simplificação
int simplifica_rac(Racional* r);

#endif