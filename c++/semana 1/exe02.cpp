// EX02 << Adicionar Métodos Simples
// Aluna << Mariana Temporim Ferreira

#include <iostream>
using namespace std;

class Livro {
public:
    string autor;
    string titulo;

    void info(){
        cout << "Titulo: " << titulo;
        cout << "\nAutor: " << autor;
    }
};

int main(){
    Livro meuLivro;

    getline(cin, meuLivro.titulo);
    getline(cin, meuLivro.autor);

    meuLivro.info();
}