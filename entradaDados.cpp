#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Informe um número inteiro: " << endl;
    cin >> numero;
    cout << "Número digitado: " << numero << endl;

    /*Soma entre dois números*/
    int x, y, soma;
    cout << "Informe o primeiro número para somar:" << endl;
    cin >> x;
    cout << "Informe o segundo número para somar:" << endl;
    cin >> y;
    soma = x + y;
    cout << "Resultado da soma: " << soma << endl;
    return 0;
}