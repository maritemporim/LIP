// EX02 << Métodos sem Retorno
// Aluna << Mariana Temporim Ferreira

#include <iostream>
using namespace std;

class Livro {
public:
    string autor;
    string titulo;
};

int main(){
    Livro meuLivro;

    getline(cin, meuLivro.titulo);
    getline(cin, meuLivro.autor);

    cout << "Titulo: " << meuLivro.titulo;
    cout << "\nAutor: " << meuLivro.autor;

}