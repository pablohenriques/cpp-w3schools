#include <iostream>
using namespace std;

int main() {

    for(int numero=0; numero<10; numero++) {
        if(numero==4) {
            break;
        }
        cout << "Número: " << numero << endl;
    }

    cout << "\n" << endl;

    for(int number=0; number<10; number++) {
        if(number==4) {
            continue;
        }
        cout << "Número: " << number << endl;
    }

    cout << "\n" << endl;

    int indice=0;
    while(indice<10){
        cout << "Índice: " << indice << endl;
        indice++;

        if(indice==4) {
            break;
        }
    }

    int idx=0;
    while(idx < 10){
        if(idx==4) {
            idx++;
            continue;
        }
        cout << "Idx: " << idx << endl;
        idx++;
    }

    return 0;
}