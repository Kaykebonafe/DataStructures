#include <iostream>
#include "ArvoreBin.h"

using std::cout;
using std::endl;

int main() {
    ArvoreBin<float> a;
    for (int i = 0; i < 10; i++)
        a.insere(i/2);

    No<float>* x = a.busca(2);

    cout << x->getValor() << endl;

    return 0;
}