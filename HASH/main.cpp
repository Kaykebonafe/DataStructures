#include <iostream>
#include <cstdlib>
#include "HASH.h"

using namespace std;

int main() {
    HASH<int, 10> t;
    LDE<int> l;




    t.adiciona(2);
    t.adiciona(5);
    t.adiciona(0);
    t.adiciona(3);
    t.adiciona(6);
    t.adiciona(4);
    t.adiciona(48);
    t.adiciona(20);
    t.adiciona(51);
    t.adiciona(95);
    t.adiciona(352);
    t.adiciona(352);
    t.adiciona(352);
    //t.imprime();
    t.expurga(2);
    t.expurga(5);
    t.expurga(0);
    t.expurga(3);
    t.expurga(6);
    t.expurga(4);
    t.expurga(48);
    t.expurga(20);
    t.expurga(51);
    t.expurga(95);
    t.expurga(352);
    t.imprime();


    return 0;
}