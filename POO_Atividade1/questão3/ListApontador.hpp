#ifndef LISTA_PONTEIRO_HPP
#define LISTA_PONTEIRO_HPP

#include <iostream>
using namespace std;

struct Node {
    int valor;
    Node* prox;
};

struct Lista {
    Node* inicio;
};

// Inicializar
void init(Lista &l) {
    l.inicio = nullptr;
}

// Inserir no final
void inserir(Lista &l, int valor) {
    Node* novo = new Node{valor, nullptr};

    if (l.inicio == nullptr) {
        l.inicio = novo;
    } else {
        Node* atual = l.inicio;
        while (atual->prox != nullptr) {
            atual = atual->prox;
        }
        atual->prox = novo;
    }
}

// Buscar
bool buscar(Lista l, int valor) {
    Node* atual = l.inicio;
    while (atual != nullptr) {
        if (atual->valor == valor) return true;
        atual = atual->prox;
    }
    return false;
}

// Verificar se está vazia
bool vazia(Lista l) {
    return l.inicio == nullptr;
}

// Mostrar lista
void mostrar(Lista l) {
    Node* atual = l.inicio;
    while (atual != nullptr) {
        cout << atual->valor << " ";
        atual = atual->prox;
    }
    cout << endl;
}

#endif