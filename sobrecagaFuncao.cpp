#include <iostream>
using namespace std;

int funcaoSomarInteiros(int x, int y) {
    return x + y;
}

int funcaoSomarDoubles(double x, double y) {
    return x + y;
}

/* Exemplo correto de sobrecarga */
int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}

int main() {
    int somaInteiro = funcaoSomarInteiros(5, 5);
    int somaDouble = funcaoSomarDoubles(4.5, 4.5);

    cout << "Resultado de somaInteiro: " << somaInteiro << endl;
    cout << "Resultado de somaDouble: " << somaDouble << endl;

    int resultadoInteiro = plusFunc(8, 5);
    double resultadoDouble = plusFunc(4.5, 4.9);

    cout << "Resultado da soma de números inteiros: " << resultadoInteiro << endl;
    cout << "Resultado da soma de números double: " << resultadoDouble << endl;

    return 0;
}