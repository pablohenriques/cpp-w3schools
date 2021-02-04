#include <iostream>
using namespace std;

int main() {
    int day=0;

    switch(day) {
        case 1:
            cout << "Segunda-Feira" << endl;
            break;
        
        case 2:
            cout << "Terça-Feira" << endl;
            break;

        case 3:
            cout << "Quarta-Feira" << endl;
            break;
        
        case 4:
            cout << "Quinta-Feira" << endl;
            break;

        case 5:
            cout << "Sexta-Feira" << endl;
            break;

        case 6:
            cout << "Sábado" << endl;
            break;

        case 7:
            cout << "Domingo" << endl;
            break;

        default:
         cout << "Verifique novamente o dia da semana digitado!" << endl;
    }

    return 0;
}