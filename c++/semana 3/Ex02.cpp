//Mariana Temporim Ferreira
//Ex02 - Encapsulamento
#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
private:
    float saldo;
    string nomeCliente;

public:
    ContaBancaria(string nome) {
        nomeCliente = nome;
        saldo = 0.0;
    }
    
    void setSaldo(float novoSaldo) {
        if (novoSaldo >= 0) {
            saldo = novoSaldo;
        }
    }
    
    float getSaldo() {
        return saldo;
    }
    
    void depositar(float valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Depositado: " << valor << endl;
        }
    }
    
    void sacar(float valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            cout << "Sacado: " << valor << endl;
        } else {
            cout << "Valor de saque invalido ou saldo insuficiente!" << endl << endl;
        }
    }
    
    void imprimirDados() {
        cout << "Dados da conta apos as movimentacoes:" << endl;
        cout << "Nome do Cliente: " << nomeCliente << endl;
        cout << "Saldo Atual: " << saldo << endl;
    }
};

int main() {
    string nomeCliente;
    int numMovimentacoes;
    
    getline(cin, nomeCliente);
    
    ContaBancaria conta(nomeCliente);
    
    cin >> numMovimentacoes;
    
    for (int i = 0; i < numMovimentacoes; i++) {
        int opcao;
        cin >> opcao;
        
        if (opcao == 1) {
            float valor;
            cin >> valor;
            conta.depositar(valor);
        } else if (opcao == 2) {
            // Sacar
            float valor;
            cin >> valor;
            conta.sacar(valor);
        } else {
            cout << "Opcao invalida!" << endl;
        }
    }
    
    conta.imprimirDados();
    
    return 0;
}