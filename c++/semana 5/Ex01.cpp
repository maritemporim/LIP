//Mariana Temporim Ferreira

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Classe base abstrata
class Forma {
public:
    // Método virtual puro - torna a classe abstrata
    virtual double calcularArea() = 0;
    
    // Método que imprime a área (usa polimorfismo)
    void imprimirArea() {
        cout << fixed << setprecision(2) << calcularArea() << endl;
    }
    
    // Destrutor virtual para hierarquia de classes
    virtual ~Forma() {}
};

// Subclasse Circulo
class Circulo : public Forma {
private:
    double raio;
    
public:
    // Construtor
    Circulo(double r) : raio(r) {}
    
    // Implementação do método virtual puro
    double calcularArea() override {
        return M_PI * raio * raio;
    }
};

// Subclasse Retangulo
class Retangulo : public Forma {
private:
    double largura;
    double altura;
    
public:
    // Construtor
    Retangulo(double l, double a) : largura(l), altura(a) {}
    
    // Implementação do método virtual puro
    double calcularArea() override {
        return largura * altura;
    }
};

int main() {
    double raio, largura, altura;
    
    // Lendo os dados de entrada
    cin >> raio;
    cin >> largura;
    cin >> altura;
    
    // Criando objetos das subclasses
    Circulo circulo(raio);
    Retangulo retangulo(largura, altura);
    
    // Exibindo os resultados
    cout << "Dados do Circulo:" << endl;
    cout << "Area: ";
    circulo.imprimirArea();
    
    cout << "Dados do Retangulo:" << endl;
    cout << "Area: ";
    retangulo.imprimirArea();
    
    return 0;
}