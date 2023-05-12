#include <iostream>
#include <vector>

int buscarNumero(const std::vector<int>& vetor, int numero) {
    for (int i = 0; i < vetor.size(); ++i) {
        if (vetor[i] == numero) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    std::vector<int> vetor = {2, 5, 10, 7, 3};
    int numeroBuscado;
    
    std::cout << "Digite um número inteiro: ";
    std::cin >> numeroBuscado;
    
    int posicao = buscarNumero(vetor, numeroBuscado);
    
    if (posicao != -1) {
        std::cout << "O número " << numeroBuscado << " foi encontrado na posição " << posicao << " do vetor." << std::endl;
    } else {
        std::cout << "O número " << numeroBuscado << " não está presente no vetor." << std::endl;
    }
    
    return 0;
}
