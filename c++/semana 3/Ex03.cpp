//Mariana Temporim Ferreira
//Ex03 - Encapsulamento
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Produto {
private:
    string nome;
    float preco;
    
public:
    Produto(string nome, float preco) {
        this->nome = nome;
        this->preco = preco;
    }
    
    string getNome() {
        return this->nome;
    }
    
    void setNome(string novoNome) {
        this->nome = novoNome;
    }
    
    float getPreco() {
        return this->preco;
    }
    
    void setPreco(float novoPreco) {
        this->preco = novoPreco;
    }
    
    void imprimirDetalhes() {
        cout << "Nome: " << this->nome << endl;
        cout << fixed << setprecision(2) << "Preco: " << this->preco << endl;
    }
    
    void aumentarPreco(float porcentagem) {
        this->preco = this->preco * (1 + porcentagem / 100);
    }
};

int main() {
    string nomeInicial;
    float precoInicial;
    
    getline(cin, nomeInicial);
    cin >> precoInicial;
    
    Produto produto(nomeInicial, precoInicial);
    
    cout << "Detalhes iniciais do produto:" << endl;
    produto.imprimirDetalhes();
    
    cin.ignore(); 
    string novoNome;
    getline(cin, novoNome);
    produto.setNome(novoNome);
    
    produto.aumentarPreco(10);
    
    cout << "Detalhes modificados do produto:" << endl;
    produto.imprimirDetalhes();
    
    return 0;
}