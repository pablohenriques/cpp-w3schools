#include <iostream>
using namespace std;

int main() {
    /*Condicionais e declarações*/

    /*Declaração IF*/
    if(20 > 18) {
        cout << "20 é maior que 18" << endl;
    }

    int x=10;
    int y=15;
    if(y>x) {
        cout << "y é maior que x" << endl;
    }

    /*Declaração IF/ELSE*/
    int time=20;
    if (time<18) {
        cout << "Bom dia" << endl;
    } else {
        cout << "Boa noite" << endl;
    }

    /*Declaração ELSE-IF*/
    int newTime = 19;
    if (time < 10) {
        cout << "Boa manhã" << endl;
    } else if(time < 20) {
        cout << "Bom dia" << endl;
    } else {
        cout << "Boa noite" << endl;
    }

    /*Short Hand If-Else (Operador Ternário)*/
    int newTime2 = 20;
    string resultado = (time < 18) ? "Good day" : "Good evening";
    cout << resultado << endl;

    return 0;
}