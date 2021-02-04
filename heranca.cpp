#include <iostream>
using namespace std;

/*Herança*/
class Pessoa {
    public:
        string nome = "Tony Stark";

        void retornaNome() {
            cout << "Nome: " << nome << endl;
        }
};

class Funcionario: public Pessoa {
    public:
        string cargo = "Gerente";
};

/*Herança Multinível*/

class Moradia {
    public:
        void significado() {
            cout << "Um lugar para morar ..." << endl;
        }
};

class Apartamento: public Moradia {

};

class Comodo: public Apartamento {

};

/*Multipla Herança*/
class Animal {
    public:
        void classificacao() {
            cout << "Animal";
        }
};

class Passaro {
    public:
        void tipo() {
            cout << "Pássaro";
        }
};

class Tucano: public Animal, public Passaro {
    public:
        void nome() {
            cout << "Tucano";
        }
};

/*Especificadores de Acesso*/
class Emprego {
    protected:
        int salario;
};

class Programador: public Emprego {
    public:
        int bonus;

        void setSalario(int s){
            salario = s;
        }

        int getSalario() {
            return salario;
        }
};

int main() {
    Funcionario f;
    cout << "Nome do Funcionário: " << f.nome << endl;
    cout << "Cargo do Funcinário: " << f.cargo << endl;

    Comodo c;
    c.significado();

    Tucano t;
    t.classificacao();
    t.tipo();
    t.nome();

    Programador p;
    p.setSalario(70000);
    p.bonus = 15000;
    cout << "Salário: " << p.getSalario() << endl;
    cout << "Bônus: " << p.getSalario() << endl;

    return 0;
}