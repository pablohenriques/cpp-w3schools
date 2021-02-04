#include <iostream>
using namespace std;

int main() {

    string food="Pizza";
    string &meal=food;      //Variavel de referencia

    cout << "Comida (food) : " << food << endl;
    cout << "Comida (&meal): " << meal << endl;

    // Obtendo endereco de memoria atraves de referencia
    string melhorComida="Pizza";
    cout << "Referencia de memoria: " << &melhorComida << endl;


    return 0;
}