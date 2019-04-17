#include <iostream>
#include <cstdlib>
#include "LDDE.h"

using namespace std;

int main() {

    LDDE<float> l;
    l.insere(5.4);
    l.insere(2.1);
    l.insere(2.9);
    l.insere(5);
    for(int i=0; i<8;i++)
        l.insere(i/2.0);
    l.remove(l.busca(5.4));
    l.remove(l.busca(2.3));
    l.imprime();
    l.remove(0); // remove o primeiro nó
    l.remove(1); // remove o segundo nó
    l.imprime();

    system("pause");
    return 0;
}
