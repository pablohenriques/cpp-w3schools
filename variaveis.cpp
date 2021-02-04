#include <iostream>
#include <string>
using namespace std;


int main(){
    int numero = 10;
    cout << "Número sem modificação:" << endl;
    cout << numero << endl;
    numero = 15;
    cout << "Número com modificação:" << endl;
    cout << numero << endl;
    int numeroInteiro = 200;
    double numeroFlutuante = 4.95;
    char caracter = 'P';
    string frase = "Hello World";
    bool valorBooleano = true;
    cout << "Variável do tipo Inteiro:" << numeroInteiro << endl;
    cout << "Variável do tipo Double:" << numeroFlutuante << endl;
    cout << "Variável do tipo Char:" << caracter << endl;
    cout << "Variável do tipo String:" << frase << endl;
    cout << "Variável do tipo Boolean:" << valorBooleano << endl;
    double resultado = numeroInteiro + numeroFlutuante;
    cout << "Soma entre número Int e Double:" << resultado << endl;
    cout << "Declarando múltiplas variáveis" << endl;
    int x=5, y=6, z=7;
    cout << "Saída " << " X:" << x << " Y:"<< y << " Z:" << z << endl;
    cout << "Constantes" << endl;
    const int pi = 3.14;
    cout << "PI: " << pi << endl;
    return 0;
}