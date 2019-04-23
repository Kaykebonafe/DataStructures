#include <iostream>
#include "ArvoreBin.h"

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    int v[] = {20,5,50,1,7,25,70,22,27,60,79,55,62,54,57,2,3,4};


    ArvoreBin<int> a;

    for(int i=0;i<18;i++)
        a.insere(v[i]);

//a.imprime();
    a.remove(4);
    a.remove(2);
//a.remove(2);
    a.remove(50);
    a.imprime();
    cout << endl;
    a.imprimeEDR();

    cout << "removendo tudo!!" << endl;
    while(a.remove(a.getRaiz())){
        a.imprime();
        a.imprimeEDR();
        cout << "\n";
    }

    system("pause");
    return 0;
}