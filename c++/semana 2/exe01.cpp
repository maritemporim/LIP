// Autor: Mariana Temporim Ferreira
// Exe 01 - Construtores e Destrutores

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

class produto{
private:

public:

    string n;
    float p;
    produto(){
        if(cin.peek() == '\n') cin.ignore();
        getline(cin,n);
        n.erase(std::remove(n.begin(), n.end(), '\r'), n.end());
        n.erase(std::remove(n.begin(), n.end(), '\r'), n.end());
        cin >> p; 
    }

        ~produto(){}
};

int main(){
    produto p;
    cout << "Produto criado: " << p.n << " - Preco: " << fixed << setprecision(2) << p.p;
    cout << "\nProduto destruido: " << p.n;

    return 0;
}
