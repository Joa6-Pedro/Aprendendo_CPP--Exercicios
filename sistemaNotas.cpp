#include <iostream>

int main () {

    const int n = 5;

    float notas[n];
    float media = 0;


    std::cout << "Digite 5 notas com espaco entre elas: " << std::endl;

    for (int i = 0; i < n; i++) {
        std::cin >> notas[i];
        
        media += notas[i];
    }

    int menor = notas[0];
    int maior = notas[0];

    for (int j = 0; j < n; j++) {
        if (menor > notas[j]) {
            menor = notas[j];
        }
        else if (maior < notas[j]) {
            maior = notas[j];
        }
    }

    media = media / n;

    std::cout << "\nMedia: " << media << "\nMenor: " << menor << "\nMaior: " << maior << std::endl;



    system("Pause");
    return 0;
}