#include <iostream>
using namespace std;

void myFunction() {
    cout << "Executando a função" << endl;
}

void myFunction2();

int main() {
    /*Primeira Chamada*/
    myFunction();
    /*Segunda Chamada*/
    myFunction();
    /*Terceira Chamada*/
    myFunction();

    /*Chamando uma função após o main*/
    myFunction2();

    return 0;
}

void myFunction2() {
    cout << "Executando uma função após o main" << endl;
}