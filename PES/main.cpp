#include <iostream>
#include <cstdlib>
#include "PES.h"
#include "PDS.h"

using namespace std;

int main() {
    PDS<float> p;

    for (int i = 0; i < 14; i++)
        p.empilha(i);

    p.print();

    float t;
    p.desempilha(&t);

    p.print();

    return 0;
}
