//Mariana Temporim Ferreira
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Veiculo {
protected:
    int velocidade;

public:
    Veiculo() : velocidade(0) {}
    virtual ~Veiculo() {}

    virtual void acelerar(int valor) = 0;
    virtual void frear(int valor) = 0;
    virtual string tipo() const = 0;

    void exibirVelocidade(int indice) const {
        cout << "[" << indice << "] Velocidade atual:" << velocidade << " km/h" << endl;
    }

    void exibirFinal(int indice) const {
        cout << "Veiculo: " << tipo() << " [" << indice << "] Velocidade atual:" << velocidade << " km/h" << endl;
    }
};

// Subclasse Carro
class Carro : public Veiculo {
public:
    void acelerar(int valor) override {
        velocidade += valor;
    }

    void frear(int valor) override {
        velocidade -= valor;
        if (velocidade < 0) velocidade = 0;
    }

    string tipo() const override {
        return "Carro";
    }
};

// Subclasse Bicicleta
class Bicicleta : public Veiculo {
public:
    void acelerar(int valor) override {
        velocidade += valor;
    }

    void frear(int valor) override {
        velocidade -= valor;
        if (velocidade < 0) velocidade = 0;
    }

    string tipo() const override {
        return "Bicicleta";
    }
};

// Acelerar ou frear veículo selecionado
void controlarVeiculo(vector<Veiculo*>& veiculos, int indice, int operacao, int valor) {
    if (indice >= 0 && indice < veiculos.size()) {
        if (operacao == 1) {
            veiculos[indice]->acelerar(valor);
        } else if (operacao == 2) {
            veiculos[indice]->frear(valor);
        }
        veiculos[indice]->exibirVelocidade(indice);
    }
}

// Exibir velocidade de todos os veículos
void exibirTodos(const vector<Veiculo*>& veiculos) {
    cout << "Velocidade atual de todos os veiculos:" << endl;
    for (int i = 0; i < veiculos.size(); ++i) {
        veiculos[i]->exibirFinal(i);
    }
}

int main() {
    vector<Veiculo*> veiculos;
    int entrada;

    // Fase de criação dos veículos
    while (true) {
        cin >> entrada;
        if (entrada == 1) {
            veiculos.push_back(new Carro());
            cout << "Carro adicionado." << endl;
        } else if (entrada == 2) {
            veiculos.push_back(new Bicicleta());
            cout << "Bicicleta adicionada." << endl;
        } else if (entrada == 3) {
            break;
        }
    }

    // Fase de controle dos veículos
    while (true) {
        int indice, operacao, valor;
        cin >> entrada;
        if (entrada < 0) break;

        indice = entrada;
        cin >> operacao;
        if (operacao == 3) {
            exibirTodos(veiculos);
        } else {
            cin >> valor;
            controlarVeiculo(veiculos, indice, operacao, valor);
        }
    }

    // Exibir velocidades finais
    exibirTodos(veiculos);

    // Liberação de memória
    for (Veiculo* v : veiculos) {
        delete v;
    }

    return 0;
}
