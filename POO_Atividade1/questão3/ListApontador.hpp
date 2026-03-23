struct Node {
    int valor;
    Node* proximo;
};

struct Lista {
    Node* inicio;
};

//inicializar
void init(Lista &l) {
    l.inicio = nullptr;
}

//inserir
void enter(Lista &l, int valor) {
    Node* novo = new Node;
    novo->valor = valor;
    novo->proximo = l.inicio;
    l.inicio = novo;
}

//remover i-ésimo elemento
void remove(Lista &l, int pos) {
    if (pos < 0) return;

    Node* atual = l.inicio;
    Node* anterior = nullptr;

    for (int i = 0; atual != nullptr && i < pos; i++) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == nullptr) return; // Posição fora do alcance

    if (anterior == nullptr) {
        l.inicio = atual->proximo; // Remover o primeiro elemento
    } else {
        anterior->proximo = atual->proximo; // Bypass o elemento a ser removido
    }

    delete atual; // Liberar memória
}

//verificar se a lista está vazia
bool isEmpty(const Lista &l) {
    return l.inicio == nullptr;
}

//buscar item
int search(const Lista &l, int valor) {
    Node* atual = l.inicio;
    int pos = 0;

    while (atual != nullptr) {
        if (atual->valor == valor) {
            return pos; // Retorna a posição do elemento encontrado
        }
        atual = atual->proximo;
        pos++;
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}