#include <iostream>

int encontrarMaiorNumero(int numero1, int numero2, int numero3) {
    int maior = numero1;
    
    if (numero2 > maior) {
        maior = numero2;
    }
    
    if (numero3 > maior) {
        maior = numero3;
    }
    
    return maior;
}

int main() {
    int numero1, numero2, numero3;
    
    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;
    
    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;
    
    std::cout << "Digite o terceiro número: ";
    std::cin >> numero3;
    
    int maiorNumero = encontrarMaiorNumero(numero1, numero2, numero3);
    
    std::cout << "O maior número é: " << maiorNumero << std::endl;
    
    return 0;
}
