#include <iostream>
using namespace std;


class Pessoa  {
    public:
        int idade;
        string nome; 
};

class Carro {
    public:
        string brand;
        string model;
        int year;
};

int main() {
    Pessoa p;

    p.idade = 20;
    p.nome = "Maria";

    cout << "Idade de Pessoa: " << p.idade << endl;
    cout << "Nome de Pessoa: " << p.nome << endl;

    /* Multiplos Objetos */

    /*carro1*/
    Carro at;
    at.brand = "Toyota";
    at.model = "Etios";
    at.year = 2015;

    /*carro2*/
    Carro at2;
    at2.brand = "Ford";
    at2.model = "Mustang";
    at2.year = 2016;

    cout << at.brand << " " << at.model << " " << at.year << endl;
    cout << at2.brand << " " << at2.model << " " << at2.year << endl;

    return 0;
}