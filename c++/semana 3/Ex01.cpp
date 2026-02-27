//Mariana Temporim Ferreira
//Ex01 - Encapsulamento

#include <iostream>
#include <string>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:
    Pessoa(string n, int i) {
        nome = n;
        idade = i;
    }
    
    string getNome() {
        return nome;
    }
    
    int getIdade() {
        return idade;
    }
    
    void setNome(string n) {
        nome = n;
    }
    
    void setIdade(int i) {
        idade = i;
    }
};

int main() {
    string nomeInicial;
    int idadeInicial;
    string sobrenome;
    
    cin >> nomeInicial;
    cin >> idadeInicial;
    cin >> sobrenome;
    
    Pessoa pessoa(nomeInicial, idadeInicial);
    
    // Imprimindo dados iniciais
    cout << "Dados iniciais da pessoa:" << endl;
    cout << "Nome: " << pessoa.getNome() << endl;
    cout << "Idade: " << pessoa.getIdade() << endl;
    
    string nomeCompleto = pessoa.getNome() + " " + sobrenome;
    pessoa.setNome(nomeCompleto);
    pessoa.setIdade(pessoa.getIdade() + 1);
    
    cout << "Dados modificados da pessoa:" << endl;
    cout << "Nome: " << pessoa.getNome() << endl;
    cout << "Idade: " << pessoa.getIdade() << endl;
    
    return 0;
}