#include <iostream>
using namespace std;



class Apresentacao {
    public:
        void mensagem() {
            cout << "Olá Mundo, C++" << endl;
        }
};

class Cidade {
    public:
        void retornaNomeCidade();
};

void Cidade::retornaNomeCidade() {
    cout << "Quebec" << endl;
}

class Carro {
    public:
        int velocidade(int velocidadeMaxima);
};

int Carro::velocidade(int velocidadeMaxima) {
    return velocidadeMaxima;
}

int main() {
    Apresentacao objeto;
    objeto.mensagem();  

    Cidade city;
    city.retornaNomeCidade();

    Carro carro;
    cout << "Velecidade Máxima do Carro: " << carro.velocidade(300) << endl;
    return 0;
}

