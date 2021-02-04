#include<iostream>
using namespace std;


class Pessoa {
    public:
        string nome;
    
    private:
        string endereco;
};

int main() {
    Pessoa p1;
    p1.nome = "Maria";
    //p1.endereco = "Rua 07"; // aqui ocorre um erro, pq o atributo é privado.
    
    return 0;
}