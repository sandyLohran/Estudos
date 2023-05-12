#include <iostream>

int main() {
    int numero;
    int fatorial = 1;
    
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;
    
    if (numero < 0) {
        std::cout << "O fatorial não está definido para números negativos." << std::endl;
    } else {
        for (int i = 1; i <= numero; ++i) {
            fatorial *= i;
        }
        
        std::cout << "O fatorial de " << numero << " é: " << fatorial << std::endl;
    }
    
    return 0;
}
