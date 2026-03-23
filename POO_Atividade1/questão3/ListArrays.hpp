#ifndef LISTA_ARRAY_HPP
#define LISTA_ARRAY_HPP

#include <iostream>
using namespace std;

#define MAX 100

struct Lista {
    int dados[MAX];
    int tamanho;
};

void init(Lista &l) {
    l.tamanho = 0;
}

void inserir(Lista &l, int valor) {
    if (l.tamanho < MAX) {
        l.dados[l.tamanho++] = valor;
    }
}

void remover(Lista &l, int i) {
    if (i >= 0 && i < l.tamanho) {
        for (int j = i; j < l.tamanho - 1; j++) {
            l.dados[j] = l.dados[j + 1];
        }
        l.tamanho--;
    }
}

bool vazia(Lista l) {
    return l.tamanho == 0;
}

bool buscar(Lista l, int valor) {
    for (int i = 0; i < l.tamanho; i++) {
        if (l.dados[i] == valor) return true;
    }
    return false;
}

void mostrar(Lista l) {
    for (int i = 0; i < l.tamanho; i++) {
        cout << l.dados[i] << " ";
    }
    cout << endl;
}

#endif