#include <iostream>
using namespace std;

int main() {
    int soma = 100 + 500;
    int soma2 = soma + 100;
    int soma3 = soma2 + 100;
    cout << "Soma: " << soma << endl;
    cout << "Soma 2: " << soma2 << endl;
    cout << "Soma 3: " << soma3 << endl;
    int x = 1;
    int x0 = (x << 2);
    int x1 = (x >> 1);
    cout << "Numero:" << x << endl;
    cout << "Deslocamento left:" << x0 << endl;
    cout << "Deslocamento right:" << x1 << endl;
    /*maior igual*/
    int impar=5; 
    int par=6;
    cout << (impar>par) << endl;

    return 0;
}