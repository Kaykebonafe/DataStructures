#include <iostream>
#include "ArvoreBin.h"

using std::cout;
using std::endl;

int main() {
    ArvoreBin<float> a;

    a.insere(10);
    a.insere(20);
    a.insere(19);
    a.insere(18);
    a.insere(17);
    a.insere(16);
    a.insere(22);

    a.imprime();
    cout << endl;
    a.remove(16);
    a.remove(18);
    a.remove(20);
    a.imprime();
    cout << endl;
    a.remove(10);
    a.imprime();

    return 0;
}