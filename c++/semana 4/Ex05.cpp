//Mariana Temporim Ferreira
#include <iostream>
#include <string>
using namespace std;

// Classe base: Animal
class Animal {
private:
    string nome;

public:
    // Construtor padrão
    Animal() : nome("") {}
    
    // Construtor com parâmetro
    Animal(string n) : nome(n) {}
    
    // Métodos get e set para nome
    string getNome() const {
        return nome;
    }
    
    void setNome(string n) {
        nome = n;
    }
    
    // Método virtual para impressão dos dados
    virtual void imprime() const {
        cout << "Dados do Animal:" << endl;
        cout << "Nome: " << nome << endl;
    }
};

// Subclasse: Cachorro
class Cachorro : public Animal {
private:
    string raca;

public:
    // Construtor padrão - nome "Duque" e raça "Indefinido"
    Cachorro() : Animal("Duque"), raca("Indefinido") {}
    
    // Construtor com parâmetros
    Cachorro(string n, string r) : Animal(n), raca(r) {}
    
    // Métodos get e set para raça
    string getRaca() const {
        return raca;
    }
    
    void setRaca(string r) {
        raca = r;
    }
    
    // Sobrescrita do método imprime
    void imprime() const override {
        // Chama o método imprime da classe base
        Animal::imprime();
        // Adiciona a informação específica do cachorro
        cout << "Raca: " << raca << endl;
    }
};

int main() {
    // Criação dos objetos
    Animal animal;
    Cachorro cachorro; // Usa construtor padrão: nome "Duque", raça "Indefinido"
    
    // Leitura do nome do animal
    string nomeAnimal;
    getline(cin, nomeAnimal);
    animal.setNome(nomeAnimal);
    
    // Exibição dos dados iniciais
    animal.imprime();
    cachorro.imprime();
    
    // Leitura do novo nome e raça para o cachorro
    string novoNomeCachorro, novaRaca;
    getline(cin, novoNomeCachorro);
    cachorro.setNome(novoNomeCachorro);
    
    getline(cin, novaRaca);
    cachorro.setRaca(novaRaca);
    
    // Exibição dos dados atualizados do cachorro
    cachorro.imprime();
    
    return 0;
}