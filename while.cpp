#include <iostream>
using namespace std;

int main() {
    
    /*WHILE*/
    int index=0;
    while(index<5) {
        cout << "Índice:" << index << endl;
        index++;
    }

    /*DO/WHILE*/
    int i=0;
    do {
        cout << "I: " << i << endl;
        i++;
    } while (i<5);

    return 0;
}