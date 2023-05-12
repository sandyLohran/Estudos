#include <iostream>
#include <string>

class Veiculo {
protected:
    std::string marca;
    std::string modelo;
    int ano;
    
public:
    Veiculo(const std::string& marca, const std::string& modelo, int ano)
        : marca(marca), modelo(modelo), ano(ano) {}
    
    void exibirDados() {
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Ano: " << ano << std::endl;
    }
};

class Carro : public Veiculo {
private:
    int numPortas;
    
public:
    Carro(const std::string& marca, const std::string& modelo, int ano, int numPortas)
        : Veiculo(marca, modelo, ano), numPortas(numPortas) {}
    
    void exibirDados() {
        Veiculo::exibirDados();
        std::cout << "Número de Portas: " << numPortas << std::endl;
    }
};

class Moto : public Veiculo {
private:
    std::string tipo;
    
public:
    Moto(const std::string& marca, const std::string& modelo, int ano, const std::string& tipo)
        : Veiculo(marca, modelo, ano), tipo(tipo) {}
    
    void exibirDados() {
        Veiculo::exibirDados();
        std::cout << "Tipo: " << tipo << std::endl;
    }
};

int main() {
    Carro carro("Fiat", "Palio", 2020, 4);
    Moto moto("Honda", "CBR500R", 2022, "Esportiva");
    
    std::cout << "Dados do Carro:" << std::endl;
    carro.exibirDados();
    
    std::cout << std::endl;
    
    std::cout << "Dados da Moto:" << std::endl;
    moto.exibirDados();
    
    return 0;
}
