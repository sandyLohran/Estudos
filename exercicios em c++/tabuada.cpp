#include <iostream>

int main() {
    int numero;
    
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;
    
    for (int i = 1; i <= 10; ++i) {
        int resultado = numero * i;
        std::cout << numero << " x " << i << " = " << resultado << std::endl;
    }
    
    return 0;
}
