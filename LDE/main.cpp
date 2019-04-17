#include <iostream>
#include "LDE.h"

int main() {

    LDE<int> l;
    for (int i = 0; i < 50; i++)
        l.insere(i);

    l.imprime();

    for (int i = 0; i <49; i++)
        l.remove(0);

    l.imprime();


}
