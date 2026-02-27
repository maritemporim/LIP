//Mariana Temporim Ferreira
#include <iostream>
#include <vector>

using namespace std;

// Classe base abstrata
class Animal {
public:
    // Método virtual puro - torna a classe abstrata
    virtual void fazerSom() = 0;
    
    // Método que chama fazerSom() (usa polimorfismo)
    void imprimirSom() {
        fazerSom();
    }
    
    // Destrutor virtual para hierarquia de classes
    virtual ~Animal() {}
};

// Subclasse Cachorro
class Cachorro : public Animal {
public:
    // Implementação do método virtual puro
    void fazerSom() override {
        cout << "O cachorro faz: Au Au!" << endl;
    }
};

// Subclasse Gato
class Gato : public Animal {
public:
    // Implementação do método virtual puro
    void fazerSom() override {
        cout << "O gato faz: Miau!" << endl;
    }
};

// Função de polimorfismo fora das classes
void emitirSons(const vector<Animal*>& animais) {
    cout << "Emitindo sons dos animais:" << endl;
    for (int i = 0; i < animais.size(); i++) {
        animais[i]->imprimirSom();
    }
}

int main() {
    vector<Animal*> animais;
    int opcao;
    
    // Menu interativo
    while (true) {
        cin >> opcao;
        
        if (opcao == 1) {
            // Adicionar Cachorro
            animais.push_back(new Cachorro());
        }
        else if (opcao == 2) {
            // Adicionar Gato
            animais.push_back(new Gato());
        }
        else if (opcao == 3) {
            // Parar de adicionar animais
            break;
        }
    }
    
    // Emitir sons dos animais na ordem em que foram adicionados
    emitirSons(animais);
    
    // Liberando a memória alocada dinamicamente
    for (int i = 0; i < animais.size(); i++) {
        delete animais[i];
    }
    
    return 0;
}