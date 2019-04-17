//
// Created by unifkluca on 29/03/2019.
//

#ifndef PES_PES_H
#define PES_PES_H


#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;


template <typename T,int MAX> class PES{
public:
    PES (): n(0){}

    bool empilha(T x){
        if(n >= MAX)
            return false;

        v[n++] = x;
        return true;
    }

    bool desempilha(T* x = NULL){
        if (n ==0)
            return false;

        n--;

        if (x)
            *x = v[n];

        return true;
    }

    void print(){
        for (int i = n-1; i >= 0; i--)
            cout << v[i] << " ";
        cout << endl;
    }

    void limpa(){
        n = 0;
    }

    PES<T, MAX>& operator << (const T& x){
        this->empilha(x);
        return *this;
    }

    PES<T, MAX>& operator >> (T& x){
        this->desempilha(&x);
        return *this;
    }

private:
    int n;
    T v[MAX];

};

#endif //PES_PES_H
