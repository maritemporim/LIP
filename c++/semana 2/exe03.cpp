// Autor: Mariana Temporim Ferreira
// Exe 03 - Construtores e Destrutores

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Produto {
private:
    string nome;
    float preco;

public:

    Produto(string n, float p) : nome(n), preco(p) {
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << fixed << setprecision(2) << preco << endl;
    }

    Produto() {
        getline(cin, nome);
        cin >> preco;
        cin.ignore();
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << fixed << setprecision(2) << preco << endl;
    }

    ~Produto() {
        cout << "Produto destruido: " << nome << endl;
    }
};

int main() {
    Produto p1; 
    Produto p2("Kit Teclado e Mouse", 299.90); 

    return 0;
}
