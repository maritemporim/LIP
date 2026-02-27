//Mariana Temporim Ferreira
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Classe base
class ContaBancaria {
protected:
    double saldo;
public:
    ContaBancaria() : saldo(0.0) {}
    virtual ~ContaBancaria() {}

    virtual void depositar(double valor) = 0;
    virtual void retirar(double valor) = 0;
    virtual string tipo() const = 0;

    virtual void exibirSaldo() const {
        cout << fixed << setprecision(2);
        cout << "Tipo de conta: " << tipo() << "; Saldo atual: R$ " << saldo << endl;
    }
};

// Subclasse ContaCorrente
class ContaCorrente : public ContaBancaria {
public:
    void depositar(double valor) override {
        saldo += valor;
    }

    void retirar(double valor) override {
        double total = valor + 1.0; // taxa fixa de R$1.00
        if (saldo >= total)
            saldo -= total;
    }

    string tipo() const override {
        return "Corrente";
    }
};

// Subclasse Poupanca
class Poupanca : public ContaBancaria {
public:
    void depositar(double valor) override {
        saldo += valor * 1.01; // bonus de 1%
    }

    void retirar(double valor) override {
        if (saldo >= valor)
            saldo -= valor;
    }

    string tipo() const override {
        return "Poupanca";
    }
};

// Função polimórfica para exibir todas as contas
void exibirTodas(const vector<ContaBancaria*>& contas) {
    cout << "Saldos e tipos de todas as contas:" << endl;
    for (auto conta : contas) {
        conta->exibirSaldo();
    }
}

int main() {
    vector<ContaBancaria*> contas;
    int entrada;

    // Fase de criação das contas
    while (true) {
        cin >> entrada;
        if (entrada == 1) {
            contas.push_back(new ContaCorrente());
            cout << "Conta Corrente adicionada." << endl;
        } else if (entrada == 2) {
            contas.push_back(new Poupanca());
            cout << "Poupanca adicionada." << endl;
        } else if (entrada == 3) {
            break;
        }
    }

    // Fase de operações
    while (true) {
        cin >> entrada;
        if (entrada == 1) { // operações sobre conta
            int indice;
            cin >> indice;
            int operacao;
            cin >> operacao;
            if (operacao == 3) {
                exibirTodas(contas);
                continue;
            }
            double valor;
            cin >> valor;
            if (indice >= 0 && indice < contas.size()) {
                if (operacao == 1) {
                    contas[indice]->depositar(valor);
                } else if (operacao == 2) {
                    contas[indice]->retirar(valor);
                }
                contas[indice]->exibirSaldo();
            }
        } else if (entrada == 2) { // exibir todas
            exibirTodas(contas);
        } else if (entrada == 3) { // sair
            break;
        }
    }

    // Liberação da memória
    for (auto conta : contas) {
        delete conta;
    }

    return 0;
}
