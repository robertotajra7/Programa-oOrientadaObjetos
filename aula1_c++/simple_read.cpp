#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s; //faz **uma** leitura da string, ou seja, lê até o primeiro espaço em branco
    cout << "[" << s << "]" << endl;
    int i; 
    // Faz leituras enquanto as variáveis de entrada respeitem o tempo especificado.
    while (cin >> i) { 
        cout << "[ " << i << " ]" << endl;
    }
}