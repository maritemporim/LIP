// Autor: Mariana Temporim Ferreira
// Exe 04 - Construtores e Destrutores

#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

class Produto {
private:
    string nome;
    float preco;

public:
    static int contador;

    Produto() {
        getline(cin, nome);
        cin >> preco;
        cin.ignore(); 
        contador++;
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << fixed << setprecision(2) << preco << endl;
        cout << "Total de produtos: " << contador << endl;
    }

    Produto(string n, float p) : nome(n), preco(p) {
        contador++;
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << fixed << setprecision(2) << preco << endl;
        cout << "Total de produtos: " << contador << endl;
    }

    ~Produto() {
        cout << "Produto destruido: " << nome << endl;
        contador--;
        cout << "Total de produtos: " << contador << endl;
    }
};

int Produto::contador = 0;

int main() {
    Produto p1; 
    Produto p2("Teclado com fio", 30.50); 

    return 0;
}
