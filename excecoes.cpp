#include <iostream>
using namespace std;


int main() {

    try {
        int idade = 17;

        if (idade >= 18){
            cout << "Acesso permitido" << endl;
        } else {
            throw (idade);
        }
    } 
    /*catch (int anosIdade) {
        cout << "Acesso Negado" << endl;
        cout << "Idade: " << anosIdade << endl;
    }*/

    /*tratando qualquer excecao*/

    catch(...) {
        cout << "Acesso Negado" << endl;
    }

    return 0;
}