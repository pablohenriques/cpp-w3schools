#include <iostream>
using namespace std;


class Animal {
    public:
        void sonsAnimais() {
            cout << "O som dos animais ..." << endl;
        }
};

class Pig : public Animal {
    public:
        void sonsAnimais() {
            cout << "O porco faz: oin oin ..." << endl;
        }
};

class Dog : public Animal {
    public:
        void sonsAnimais() {
            cout << "O cão faz: au au ..." << endl;
        }
};

int main() {
    Animal animal;
    Pig porco;
    Dog cao;

    animal.sonsAnimais();
    porco.sonsAnimais();
    cao.sonsAnimais();
    
    return 0;
}