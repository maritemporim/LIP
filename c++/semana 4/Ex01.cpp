//Mariana Temporim Ferreira

#include <iostream>
#include <string>
using namespace std;

// Classe base Veiculo
class Veiculo {
private:
    // Atributos privados
    string marca;
    int anoFabricacao;
    
public:
    // Construtor padrão
    Veiculo() {
        marca = "";
        anoFabricacao = 0;
    }
    
    // Construtor com parâmetros
    Veiculo(string marca, int anoFabricacao) {
        this->marca = marca;
        this->anoFabricacao = anoFabricacao;
    }
    
    // Métodos get e set para marca
    string getMarca() {
        return this->marca;
    }
    
    void setMarca(string novaMarca) {
        this->marca = novaMarca;
    }
    
    // Métodos get e set para anoFabricacao
    int getAnoFabricacao() {
        return this->anoFabricacao;
    }
    
    void setAnoFabricacao(int novoAno) {
        this->anoFabricacao = novoAno;
    }
    
    // Método para imprimir dados do veículo
    void imprimirDados() {
        cout << "Marca: " << this->marca << endl;
        cout << "Ano de Fabricacao: " << this->anoFabricacao << endl;
    }
};

// Classe derivada Carro (herda de Veiculo)
class Carro : public Veiculo {
private:
    // Atributo adicional específico de Carro
    int numeroPortas;
    
public:
    // Construtor padrão
    Carro() : Veiculo() {
        numeroPortas = 0;
    }
    
    // Construtor com parâmetros
    Carro(string marca, int anoFabricacao, int numeroPortas) : Veiculo(marca, anoFabricacao) {
        this->numeroPortas = numeroPortas;
    }
    
    // Métodos get e set para numeroPortas
    int getNumeroPortas() {
        return this->numeroPortas;
    }
    
    void setNumeroPortas(int novoNumeroPortas) {
        this->numeroPortas = novoNumeroPortas;
    }
    
    // Método para imprimir todos os dados do carro (sobrescrevendo o método da classe base)
    void imprimirDados() {
        cout << "Marca: " << getMarca() << endl;
        cout << "Ano de Fabricacao: " << getAnoFabricacao() << endl;
        cout << "Numero de Portas: " << this->numeroPortas << endl;
    }
};

int main() {
    // Criando e trabalhando com objeto da classe Veiculo
    Veiculo veiculo;
    
    string marcaVeiculo;
    int anoVeiculo;
    
    getline(cin, marcaVeiculo);
    veiculo.setMarca(marcaVeiculo);
    
    cin >> anoVeiculo;
    veiculo.setAnoFabricacao(anoVeiculo);
    cin.ignore(); // Limpa o buffer
    
    cout << "Dados do Veiculo:" << endl;
    veiculo.imprimirDados();
    
    // Criando e trabalhando com objeto da classe Carro
    Carro carro;
    
    string marcaCarro;
    int anoCarro, portasCarro;
    
    getline(cin, marcaCarro);
    carro.setMarca(marcaCarro);
    
    cin >> anoCarro;
    carro.setAnoFabricacao(anoCarro);
    
    cin >> portasCarro;
    carro.setNumeroPortas(portasCarro);
    
    cout << "Dados do Carro:" << endl;
    carro.imprimirDados();
    
    return 0;
}