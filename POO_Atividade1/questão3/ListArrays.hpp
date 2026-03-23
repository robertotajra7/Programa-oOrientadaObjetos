#define MAX 100

struct Lista
{
    int dados[MAX];
    int tamanho;
};

//inicializar
void init(Lista &l) {
    l.tamanho = 0;
}

//inserir
void enter(Lista &l, int valor) {
    if (l.tamanho < MAX) {
        l.dados[l.tamanho] = valor;
        l.tamanho++;
    }
}

//remover i-ésimo elemento
void remove(Lista &l, int pos) {
    if (pos >= 0 && pos < l.tamanho) {
        for (int i = pos; i < l.tamanho - 1; i++) {
            l.dados[i] = l.dados[i + 1];
        }
        l.tamanho--;
    }
}

//verificar se a lista está vazia
bool isEmpty(const Lista &l) {
    return l.tamanho == 0;
}

//buscar item
int search(const Lista &l, int valor) {
    for (int i = 0; i < l.tamanho; i++) {
        if (l.dados[i] == valor) {
        return i; // Retorna a posição do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}
