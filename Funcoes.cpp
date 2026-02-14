#include <iostream>

void altArray(float valores[], int N) {

    std::cout << "Digite 5 valores: " << std::endl;

    for (int i = 0; i < N; i++) {
        std::cin >> valores[i];
    }
}

float somar(float valores[], int N) {
    float resultSoma = 0;

    for (int i = 0; i < N; i++) {
        resultSoma += valores[i];
    }

    return resultSoma;
}

float identificaMaior(float valores[], int N) {
    float maior = valores[0];

    for (int i = 1; i < N; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    return maior;
}

int main () {
    
    const int N = 5;
    float valores[N];
    
    altArray(valores, N);

    float resultSoma = somar(valores, N);
    float maior = identificaMaior(valores, N);

    std::cout << "\nValores: ";
    for (int i = 0; i < N; i++){
        std::cout << valores[i] << " ";
    }std::cout << std::endl;
    
    std::cout << "Soma: " << resultSoma << "\nMaior: " << maior << "\n" << std::endl;

    system("Pause");
    return 0;
    
}