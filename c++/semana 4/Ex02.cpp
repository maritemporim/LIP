//Mariana Temporim Ferreira
#include <iostream>
using namespace std;

// Classe Base: Conta
class Conta {
private:
    float saldo;

public:
    // Construtor
    Conta(float saldoInicial = 0) : saldo(saldoInicial) {}
    
    // Método para depositar
    void depositar(float valor) {
        if (valor > 0) {
            saldo += valor;
        }
    }
    
    // Método para sacar
    virtual bool sacar(float valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            return true;
        }
        return false;
    }
    
    // Getter para o saldo
    float getSaldo() const {
        return saldo;
    }
    
    // Setter para o saldo (protegido para uso das subclasses)
protected:
    void setSaldo(float novoSaldo) {
        saldo = novoSaldo;
    }
};

// Subclasse: ContaCorrente
class ContaCorrente : public Conta {
private:
    float limite;
    float limiteUtilizado;

public:
    // Construtor
    ContaCorrente(float saldoInicial = 0, float limiteCredito = 0) 
        : Conta(saldoInicial), limite(limiteCredito), limiteUtilizado(0) {}
    
    // Sobrescrita do método sacar
    bool sacar(float valor) override {
        if (valor <= 0) {
            return false;
        }
        
        float saldoAtual = getSaldo();
        float saldoDisponivel = saldoAtual + (limite - limiteUtilizado);
        
        if (valor <= saldoDisponivel) {
            if (valor <= saldoAtual) {
                // Saque usando apenas o saldo
                setSaldo(saldoAtual - valor);
            } else {
                // Saque usando saldo + limite
                float valorDoLimite = valor - saldoAtual;
                setSaldo(0);
                limiteUtilizado += valorDoLimite;
            }
            return true;
        }
        return false;
    }
    
    // Sobrescrita do método depositar para considerar o limite utilizado
    void depositar(float valor) {
        if (valor > 0) {
            if (limiteUtilizado > 0) {
                if (valor >= limiteUtilizado) {
                    // Deposito cobre todo o limite utilizado
                    float sobra = valor - limiteUtilizado;
                    limiteUtilizado = 0;
                    setSaldo(getSaldo() + sobra);
                } else {
                    // Deposito cobre apenas parte do limite utilizado
                    limiteUtilizado -= valor;
                }
            } else {
                // Limite não está sendo utilizado, deposita normalmente
                setSaldo(getSaldo() + valor);
            }
        }
    }
    
    // Getters
    float getLimite() const {
        return limite;
    }
    
    float getLimiteUtilizado() const {
        return limiteUtilizado;
    }
};

int main() {
    // Operações com Conta comum
    float saldoInicial;
    cin >> saldoInicial;
    
    Conta conta(saldoInicial);
    
    int numMovimentacoes;
    cin >> numMovimentacoes;
    
    for (int i = 0; i < numMovimentacoes; i++) {
        int operacao;
        float valor;
        cin >> operacao >> valor;
        
        if (operacao == 1) { // Depósito
            conta.depositar(valor);
        } else if (operacao == 2) { // Saque
            if (!conta.sacar(valor)) {
                cout << "Saque invalido. Saldo insuficiente ou valor invalido." << endl;
            }
        }
        cout << "Saldo Atual:" << conta.getSaldo() << endl;
    }
    
    // Operações com ContaCorrente
    float saldoInicialCC, limiteCC;
    cin >> saldoInicialCC >> limiteCC;
    
    ContaCorrente contaCorrente(saldoInicialCC, limiteCC);
    
    int numMovimentacoesCC;
    cin >> numMovimentacoesCC;
    
    for (int i = 0; i < numMovimentacoesCC; i++) {
        int operacao;
        float valor;
        cin >> operacao >> valor;
        
        if (operacao == 1) { // Depósito
            contaCorrente.depositar(valor);
        } else if (operacao == 2) { // Saque
            if (!contaCorrente.sacar(valor)) {
                cout << "Saque invalido. Saldo insuficiente e/ou limite excedido." << endl;
            }
        }
        cout << "Saldo Atual:" << contaCorrente.getSaldo() 
             << " Limite:" << contaCorrente.getLimite() 
             << " Limite utilizado:" << contaCorrente.getLimiteUtilizado() << endl;
    }
    
    cout << "Saldo Atual:" << contaCorrente.getSaldo() << endl;
    
    return 0;
}