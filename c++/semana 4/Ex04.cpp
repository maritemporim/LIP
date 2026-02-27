#include <iostream>
#include <string>
using namespace std;

// Classe base Produto
class Produto {
private:
    string nome;
    float preco;

public:
    Produto(string n, float p) {
        nome = n;
        preco = p;
    }

    string getNome() {
        return nome;
    }

    void setNome(string n) {
        nome = n;
    }

    float getPreco() {
        return preco;
    }

    void setPreco(float p) {
        preco = p;
    }

    void imprime() {
        cout << "Dados do Produto:" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Preco: " << preco << endl;
    }
};

// Subclasse ProdutoEletronico
class ProdutoEletronico : public Produto {
private:
    int garantia;

public:
    ProdutoEletronico(string n, float p, int g) : Produto(n, p) {
        garantia = g;
    }

    int getGarantia() {
        return garantia;
    }

    void setGarantia(int g) {
        garantia = g;
    }

    void estenderGarantia(int meses) {
        garantia += meses;
    }

    void imprime() {
        Produto::imprime();
        cout << "Garantia: " << garantia << " meses" << endl;
    }
};

int main() {
    string nomeProduto;
    float precoProduto;

    // Produto comum
    getline(cin, nomeProduto);
    cin >> precoProduto;
    cin.ignore(); // limpar o '\n'

    Produto p(nomeProduto, precoProduto);

    // Produto eletrônico
    string nomeEletronico;
    float precoEletronico;
    int garantiaInicial, garantiaExtra;

    getline(cin, nomeEletronico);
    cin >> precoEletronico >> garantiaInicial >> garantiaExtra;

    ProdutoEletronico pe(nomeEletronico, precoEletronico, garantiaInicial);

    // Impressão inicial
    p.imprime();
    pe.imprime();

    // Extensão da garantia
    pe.estenderGarantia(garantiaExtra);
    pe.imprime();

    return 0;
}
