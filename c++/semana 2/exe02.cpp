// Autor: Mariana Temporim Ferreira
// Exe 02 - Construtores e Destrutores

#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

class produto
{
private:
    
public:
    string n;
    float p;

    produto(){
        if(cin.peek() == '\n') cin.ignore();
        getline(cin,n);
        n.erase(std::remove(n.begin(), n.end(), '\r'), n.end());
        cin >> p;
    }

    produto(string n, float p){
        this->n = n;
        this->p = p;
    }
    ~produto(){
    };
};

int main(){
    produto p1;
    produto p2;

    cout << "Produto criado: " << p1.n;
    printf("\nPreco: %.2f\n", p1.p);

    cout << "Produto criado: " << p2.n;
    printf("\nPreco: %.2f", p2.p);

    cout << "\nProduto destruido: " << p2.n;
    cout << "\nProduto destruido: " << p1.n;

    return 0;
}




