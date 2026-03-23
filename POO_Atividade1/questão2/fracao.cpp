#include <iostream>
using namespace std;

struct Fracao {
    int num;
    int den;
};

// Criar fracao
Fracao criar(int n, int d) {
    Fracao f;
    f.num = n;
    f.den = d;
    return f;
}

// Soma
Fracao soma(Fracao a, Fracao b) {
    return {a.num * b.den + b.num * a.den, a.den * b.den};
}

// Subtracao
Fracao sub(Fracao a, Fracao b) {
    return {a.num * b.den - b.num * a.den, a.den * b.den};
}

// Multiplicacao
Fracao mult(Fracao a, Fracao b) {
    return {a.num * b.num, a.den * b.den};
}

// Divisao
Fracao divi(Fracao a, Fracao b) {
    return {a.num * b.den, a.den * b.num};
}

int main() {
    Fracao f1 = criar(1, 2);
    Fracao f2 = criar(3, 4);

    Fracao resultadoSoma = soma(f1, f2);
    cout << "Soma: " << resultadoSoma.num << "/" << resultadoSoma.den << endl;

    Fracao resultadoSub = sub(f1, f2);
    cout << "Subtracao: " << resultadoSub.num << "/" << resultadoSub.den << endl;

    Fracao resultadoMult = mult(f1, f2);
    cout << "Multiplicacao: " << resultadoMult.num << "/" << resultadoMult.den << endl;

    Fracao resultadoDivi = divi(f1, f2);
    cout << "Divisao: " << resultadoDivi.num << "/" << resultadoDivi.den << endl;

    return 0;
}