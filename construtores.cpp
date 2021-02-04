#include <iostream>
using namespace std;


class Pessoa {
    public:
        /*Definindo Construtor da Classe*/
        Pessoa() {
            cout << "Olá Mundo! C++" << endl;
        }
};


class Car {
    public:
        string brand;
        string model;
        int year;

        Car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }
};


class City {
    public:
        string pais;
        string cidade;
        int ano;
        City(string x, string y, int z);
};

City::City(string country, string town, int year){
    pais = country;
    cidade = town;
    ano = year;
}

int main() {
    Pessoa pessoa;
    Car carro1("Chevrolet", "Corvette", 2020);
    Car carro2("Ford", "Mustang", 1980);
    City city1("Alemanha", "Frankfurt", 2022);
    City city2("Suécia", "Malmö", 2022);

    cout << "Marca: " << carro1.brand << " - Modelo: " << carro1.model << " - Ano: " << carro1.year << endl;
    cout << "Marca: " << carro2.brand << " - Modelo: " << carro2.model << " - Ano: " << carro2.year << endl;

    cout << endl;

    cout << "País: " << city1.pais << " Cidade: " << city1.cidade << " Ano: " << city1.ano << endl;
    cout << "País: " << city2.pais << " Cidade: " << city2.cidade << " Ano: " << city2.ano << endl;

    return 0;
}
