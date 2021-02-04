#include <iostream>
using namespace std;

int main() {

    /*Criando ponteiros*/
    string food="Pizza";
    string* ptr=&food;

    cout << "Food: " << food << endl;
    cout << "Endereço de Memória: " << &food << endl;
    cout << "Ponteiro: " << ptr << endl;

    /*Desreferencia*/
    string newFood="Pamonha";
    string* newPtr=&newFood;

    cout << "\nReferencia -> Ponteiro: " << newPtr << endl;
    cout << "Desreferencia -> Ponteiro: " << *newPtr << endl;

    /*Modificando ponteiros*/
    string food2="hambuguer";
    string* ponteiro=&food2;

    cout << "\nComida: " << food2 << endl;
    cout << "Endereço de memoria -> Comida: " <<  &food2 << endl;
    cout << "Referencia -> Comida:" << ponteiro << endl;
    cout << "Valor da vairiavel -> Comida: " << *ponteiro << endl;
    *ponteiro="Salada";
    cout << "Referecia -> Comida (Modificada):" << *ponteiro << endl;
    cout << "Comida (Alterada): " << food2 << endl;
    cout << "Nova referencia de comida: " << ponteiro << endl;

    return 0;
}