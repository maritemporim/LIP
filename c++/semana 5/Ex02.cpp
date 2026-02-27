//Mariana Temporim Ferreira
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Classe base abstrata
class Funcionario {
public:
    // Método virtual puro - torna a classe abstrata
    virtual double calcularSalario() = 0;
    
    // Método que imprime o salário (usa polimorfismo)
    void imprimirSalario() {
        cout << "Salario: " << fixed << setprecision(2) << calcularSalario() << endl;
    }
    
    // Destrutor virtual para hierarquia de classes
    virtual ~Funcionario() {}
};

// Subclasse Vendedor
class Vendedor : public Funcionario {
private:
    double salarioBase;
    double comissao;
    
public:
    // Construtor
    Vendedor(double sb, double c) : salarioBase(sb), comissao(c) {}
    
    // Implementação do método virtual puro
    double calcularSalario() override {
        return salarioBase + comissao;
    }
};

// Subclasse Freelancer
class Freelancer : public Funcionario {
private:
    double valorHora;
    double horasTrabalhadas;
    
public:
    // Construtor
    Freelancer(double vh, double ht) : valorHora(vh), horasTrabalhadas(ht) {}
    
    // Implementação do método virtual puro
    double calcularSalario() override {
        return valorHora * horasTrabalhadas;
    }
};

int main() {
    int numFuncionarios;
    vector<Funcionario*> funcionarios;
    
    // Lendo o número de funcionários
    cin >> numFuncionarios;
    
    // Lendo os dados de cada funcionário
    for (int i = 0; i < numFuncionarios; i++) {
        int tipo;
        cin >> tipo;
        
        if (tipo == 1) { // Vendedor
            double salarioBase, comissao;
            cin >> salarioBase;
            cin >> comissao;
            funcionarios.push_back(new Vendedor(salarioBase, comissao));
        }
        else if (tipo == 2) { // Freelancer
            double valorHora, horasTrabalhadas;
            cin >> valorHora;
            cin >> horasTrabalhadas;
            funcionarios.push_back(new Freelancer(valorHora, horasTrabalhadas));
        }
    }
    
    // Exibindo os dados dos funcionários
    cout << "Dados dos Funcionarios:" << endl;
    double salarioTotal = 0.0;
    
    for (int i = 0; i < funcionarios.size(); i++) {
        funcionarios[i]->imprimirSalario();
        salarioTotal += funcionarios[i]->calcularSalario();
    }
    
    // Exibindo o salário total
    cout << "Salario total de todos os funcionarios: " 
         << fixed << setprecision(2) << salarioTotal << endl;
    
    // Liberando a memória alocada dinamicamente
    for (int i = 0; i < funcionarios.size(); i++) {
        delete funcionarios[i];
    }
    
    return 0;
}