#include "ListArrays.hpp"

int main() {
    Lista l;
    init(l);

    inserir(l, 10);
    inserir(l, 20);
    inserir(l, 30);

    mostrar(l);

    remover(l, 1);
    mostrar(l);

    return 0;
}