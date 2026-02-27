#include <iostream>
#include <string>
using namespace std;

class Livro {
private:
    string titulo;
    int numeroPaginas;
    
public:
    Livro(string titulo, int numeroPaginas) {
        this->titulo = titulo;
        this->numeroPaginas = numeroPaginas;
    }
    
    string getTitulo() {
        return this->titulo;
    }
    
    void setTitulo(string novoTitulo) {
        this->titulo = novoTitulo;
    }
    
    int getNumeroPaginas() {
        return this->numeroPaginas;
    }
    
    void setNumeroPaginas(int novoNumeroPaginas) {
        this->numeroPaginas = novoNumeroPaginas;
    }
    
    void imprimirDetalhes() {
        cout << "Titulo: " << this->titulo << endl;
        cout << "Numero de Paginas: " << this->numeroPaginas << endl;
    }
    
    void adicionarSubtitulo(string subtitulo) {
        if (!subtitulo.empty()) {
            this->titulo = this->titulo + ": " + subtitulo;
        }
    }
    
    void adicionarPaginas(int paginas) {
        this->numeroPaginas += paginas;
    }
};

int main() {
    string tituloInicial;
    int numeroPaginasInicial;
    
    getline(cin, tituloInicial);
    cin >> numeroPaginasInicial;
    cin.ignore();
    
    Livro livro(tituloInicial, numeroPaginasInicial);
    
    cout << "Detalhes iniciais do livro:" << endl;
    livro.imprimirDetalhes();
    
    string subtitulo;
    getline(cin, subtitulo);
    livro.adicionarSubtitulo(subtitulo);
    livro.adicionarPaginas(50);
    
    cout << "Detalhes modificados do livro:" << endl;
    livro.imprimirDetalhes();
    
    return 0;
}
