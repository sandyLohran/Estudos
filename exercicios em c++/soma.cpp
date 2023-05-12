#include <iostream>

int main()
{
    int numero1, numero2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    int soma = numero1 + numero2;

    std::cout << "A soma dos números é: " << soma << std::endl;

    return 0;
}