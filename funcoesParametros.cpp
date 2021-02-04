#include <iostream>
using namespace std;

void apresentaNome(string nome) {
    cout << "Olá " << nome << endl;    
}

void apresentaPais(string country="Germany") {
    cout << country << endl;
}

void apresentaPessoa(string nome, int idade) {
    cout << "Olá " << nome << ", você tem " << idade << " anos de idade." << endl;
}

int somarNumeros(int numero1, int numero2) {
    return numero1 + numero2;
}

void trocaNumeros(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {

    /*Parametros e Argumentos*/
    apresentaNome("Jhonny");
    apresentaNome("Mary");
    apresentaNome("Paul");
    cout << endl;

    /*Parametro Padrao*/
    apresentaPais("Canada");
    apresentaPais("Sweden");
    apresentaPais();
    cout << endl;

    /*Parametros Multiplos*/
    apresentaPessoa("Jhonny", 35);
    apresentaPessoa("Mary", 27);
    apresentaPessoa("Paul", 29);
    cout << endl;

    /*Valores Retornados*/
    cout << "Resultado da função soma: " << somarNumeros(5, 6) << endl;
    int novoResultado = somarNumeros(10, -5);
    cout << "Novo resultado da função soma: " << novoResultado << endl;

    /*Passagem por Referencia*/
    int primeiroNumero = 10;
    int segundoNumero = 20;

    cout << "Antes da troca --- " << endl;
    cout << "Primeiro número: " << primeiroNumero << endl;
    cout << "Segundo número: " << segundoNumero << endl;
    cout << "\n";
    trocaNumeros(primeiroNumero, segundoNumero);
    cout << "Depois da troca --- " << endl;
    cout << "Primeiro número: " << primeiroNumero << endl;
    cout << "Segundo número: " << segundoNumero << endl;

    return 0;
}