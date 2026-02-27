//Mariana Temporim Ferreira
//Ex04 - Encapsulamento

#include <iostream>
#include <string>
using namespace std;

class Carro {
private:
    string marca;
    int ano;
    
public:
    Carro(string marca, int ano) {
        this->marca = marca;
        this->ano = ano;
    }
    
    string getMarca() {
        return this->marca;
    }
    
    void setMarca(string novaMarca) {
        this->marca = novaMarca;
    }
    
    int getAno() {
        return this->ano;
    }
    
    void setAno(int novoAno) {
        this->ano = novoAno;
    }
    
    void imprimirDetalhes() {
        cout << "Marca: " << this->marca << endl;
        cout << "Ano: " << this->ano << endl;
    }
    
    void proximoAno() {
        this->ano++;
    }
};

int main() {
    string marcaInicial;
    int anoInicial;
    
    getline(cin, marcaInicial);
    cin >> anoInicial;
    
    Carro carro(marcaInicial, anoInicial);
    
    cout << "Detalhes iniciais do carro:" << endl;
    carro.imprimirDetalhes();
    
    cin.ignore();
    string novaMarca;
    getline(cin, novaMarca);
    carro.setMarca(novaMarca);
    
    carro.proximoAno();
    
    cout << "Detalhes modificados do carro:" << endl;
    carro.imprimirDetalhes();
    
    return 0;
}
