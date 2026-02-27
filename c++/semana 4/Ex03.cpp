#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Funcionario {
private:
    string nome;
    float salario;

public:
    void setNome(string nome) {
        this->nome = nome;
    }

    string getNome() {
        return this->nome;
    }

    void setSalario(float salario) {
        this->salario = salario;
    }

    float getSalario() {
        return this->salario;
    }

    void imprime() {
        cout << "Dados do Funcionario:" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Salario: " << fixed << setprecision(2) << salario << endl;
    }
};

class Gerente : public Funcionario {
private:
    float bonus;

public:
    void setBonus(float bonus) {
        this->bonus = bonus;
    }

    float getBonus() {
        return this->bonus;
    }

    void imprime() {
        Funcionario::imprime();
        cout << "Bonus Gerente: " << fixed << setprecision(2) << bonus << endl;
    }
};

int main() {
    string nomeFunc, nomeGer;
    float salarioFunc, salarioGer, bonusGer;

    // Entrada do funcionario
    getline(cin, nomeFunc);
    cin >> salarioFunc;
    cin.ignore(); 

    // Entrada do gerente
    getline(cin, nomeGer);
    cin >> salarioGer >> bonusGer;

    // Criando e configurando objetos
    Funcionario f;
    f.setNome(nomeFunc);
    f.setSalario(salarioFunc);

    Gerente g;
    g.setNome(nomeGer);
    g.setSalario(salarioGer);
    g.setBonus(bonusGer);

    // Imprimindo resultados
    f.imprime();
    g.imprime();

    return 0;
}
