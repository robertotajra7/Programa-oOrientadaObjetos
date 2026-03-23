#include "ListApontador.hpp"

int main() {
    Lista l;
    init(l);

    inserir(l, 5);
    inserir(l, 15);
    inserir(l, 25);

    cout << "Lista: ";
    mostrar(l);

    cout << "Buscar 15: " 
         << (buscar(l, 15) ? "Encontrado" : "Nao encontrado") 
         << endl;

    cout << "Lista vazia? " 
         << (vazia(l) ? "Sim" : "Nao") 
         << endl;

    return 0;
}