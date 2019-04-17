#ifndef LES_HPP
#define LES_HPP

#include <iostream>
using namespace std;

template<typename T, int MAX>
class LES{
	public:
		LES(): n(0){};
		bool insere(T x){
            if(n==MAX)
			    return false;
			int i;
			for(i=0; i<n && v[i]<x; i++);
			for(int j=n; j>i ; j--)
				v[j] = v[j-1];

			v[i] = x;
			n++;

			return true;
		}
		void imprime(){
			for(int i=0;i<n;i++){
				cout << v[i] << " ";
			}
			cout << endl;
		}
		
 		int busca(int x){
			for(int i = 0; i < n && v[i] <= x; i++){
				if(v[i] == x){
					return i;
				}
		   	}
		   	return -1;
		}
		
		bool remove(int i){
			if(n == 0 || i >= n){
				return false;
			}
			
			for(int k = i; k < n; k++){
				v[k] = v[k+1];
			}
			n--;
			return true;
		}

		T operator[](int i){
			if(i<0 || i>=n){
				cout << "ERRO!: Passou os limites do vetor" << endl;
				return v[0];
			}
			return v[i];
		}
		void operator<<(T x){
			insere(x);
		}
		
	private:
		int n;
		T v[MAX];
};

#endif
