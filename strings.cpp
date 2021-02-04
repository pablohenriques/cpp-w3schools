#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Concatenação */
    string nome = "John";
    string sobrenome = "Doe";
    string nomeCompleto = nome + sobrenome;
    cout << "Nome Completo:" << nomeCompleto << endl;
    nomeCompleto = nome + " " + sobrenome;
    cout << "Nome Completo (correto): " << nomeCompleto << endl;
    nomeCompleto = nomeCompleto.append(" Sousa");
    cout << "Nome com último sobrenome: " << nomeCompleto << endl;

    /* Concatenação (+)  */
    string n1 = "10";
    string n2 = "00";
    string concat = n1 + n2;
    cout << "Número Mil (em string): " << concat << endl;

    /* Comprimento de uma string */
    string txt1 = "StringSemEspaço";
    string txt2 = "String Com Espaço";
    cout << "Tamanho da String "<< txt1 <<" sem espaço: " << txt1.length() << endl;
    cout << "Tamanho da String "<< txt2 <<" com espaço: " << txt2.length() << endl;

    /* String de Acesso */
    string cidade="Palmas";
    cout << "Primeira letra da String cidade:" << cidade[0] << endl;
    cidade[0] = 'C';
    cout << "Primeira letra da String cidade alterada:" << cidade << endl;

    /* String de entrada do usuário */
    string nomeUsuario;
    cout << "Digite seu primeiro nome:";
    //cin >> nomeUsuario;
    //cout << "Nome digitado pelo usuário: " << nomeUsuario << endl;
    //cout << "Capturando todo nome do usuário:";
    getline (cin, nomeUsuario);
    cout << "Nom Completo digitado pelo usuário: " << nomeUsuario << endl;

    /* Caso o namespace seja alterado */
    std::string greeting="Hello";
    std::cout << greeting;

    return 0;
}
