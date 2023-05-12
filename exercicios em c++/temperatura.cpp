#include <iostream>

double converterCelsiusParaFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double temperaturaCelsius;
    
    std::cout << "Digite a temperatura em graus Celsius: ";
    std::cin >> temperaturaCelsius;
    
    double temperaturaFahrenheit = converterCelsiusParaFahrenheit(temperaturaCelsius);
    
    std::cout << "A temperatura em graus Fahrenheit é: " << temperaturaFahrenheit << std::endl;
    
    return 0;
}
