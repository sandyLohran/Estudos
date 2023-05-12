#include <iostream>

int main() {
    float nota1, nota2, nota3;
    
    std::cout << "Digite a primeira nota: ";
    std::cin >> nota1;
    
    std::cout << "Digite a segunda nota: ";
    std::cin >> nota2;
    
    std::cout << "Digite a terceira nota: ";
    std::cin >> nota3;
    
    float media = (nota1 + nota2 + nota3) / 3;
    
    std::cout << "A média das notas é: " << media << std::endl;
    
    return 0;
}