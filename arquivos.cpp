#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ofstream arquivo("nomes.txt");
    arquivo << "Maria";
    arquivo.close();

    string txt;
    ifstream arq("nomes.txt");
    while(getline(arq, txt)){
        cout << txt << endl;
    }
    arq.close();

    return 0;
}