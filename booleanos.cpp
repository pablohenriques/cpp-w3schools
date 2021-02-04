#include <iostream>
using namespace std;

int main() {
    /*Tipo de dado booleano*/

    bool cppiscool = true;
    bool cppbettercobol = false;

    /*A saída para estes condicionais é 0 ou 1*/
    cout << "C++ é legal: " << cppiscool << endl;
    cout << "C++ é melhor que Cobol: " << cppbettercobol << endl;

    /*Expressoes booleanas*/
    int x=10;
    int y=15;
    cout << "10 é maior que 15: " << (x>y) << endl;
    cout << "15 é maior que 10: " << (y>x) << endl;
    cout << "10 é igual a 15: " << (x==y) << endl;
    cout << "10 é igual a 10: " << (x==10) << endl;

    return 0;
}