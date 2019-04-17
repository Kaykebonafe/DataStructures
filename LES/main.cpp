#include <iostream>

using namespace std;

class No{
  public:

    int val;
    No* proximo;

};

class LDE{
  public:
    LDE(): primeiro(NULL), n(0){}

  void insere(int x){
    No* novo = new No;
    novo->val = x;
    novo->proximo = NULL;
    No* anterior = NULL;
    No* proximo = primeiro;

    while(proximo && proximo->val < x){
      anterior = proximo;
      proximo = proximo->proximo;
    }

    if(anterior)
      anterior->proximo = novo;
    else
      primeiro = novo;

    novo->proximo = proximo;
    n++;

  }

  No* busca(int val){
    No* atual = primeiro;
    while (atual && atual->val <= val){
        if(atual->val == val)
            return atual;
        atual = atual->proximo;
    }
    return NULL;
  }

  void imprime(){
    No* atual = primeiro;
    while(atual){
        cout << atual->val << " ";
        atual = atual->proximo;
    }
    cout << "\n";
  }

  bool remove(int idx) {
      No *atual = primeiro;
      No *anterior = NULL;
      int i;
      for (i = 0; i < idx && atual != NULL; i++) {
          anterior = atual;
          atual = atual->proximo;
      }
      if (atual == NULL)
          return false;
      if (anterior)
          anterior->proximo = atual->proximo;
      else
          primeiro = atual->proximo;

      delete atual;
      return true;
  }

    virtual ~LDE() {
        No *atual = primeiro, *prox = NULL;
        while (atual) {
            prox = atual->proximo;
            delete atual;
            atual = prox;
        }
    }
private:
    No* primeiro;
    int n;

};

int main() {

    LDE* l = new LDE();
    for (int i = 0; i < 50; i++)
        l->insere(i);

    l->imprime();

    for (int i = 0; i <49; i++)
        l->remove(0);

    l->imprime();

    delete l;
}
