#include <iostream>
#include <locale>

void altArray (float valores[], int N) {

    std::cout << "Digite " << N << " valores: " << std::endl;

    for(int i = 0; i < N; i++) {
        std::cin >> valores[i];
    }
}

void outValores(float valores[], int N) {
    
    std::cout << "Valores :";
    for (int i = 0; i < N; i++) {
        std::cout << valores[i] << " ";
    }std::cout << "\n" << std::endl;

}

void outSoma(float valores[], int N) {
    float soma = 0;

    for (int i = 0; i < N; i++) {
        soma += valores[i];
    }std::cout << "\nA soma dos valores é igual a: " << soma << std::endl;

}

void fndMaior (float valores[], int N) {
    float maior = valores[0];
    
    for (int i = 1; i < N; i++) {
        if (maior < valores[i]) {
            maior = valores[i];
        }
    }
    std::cout << "\nO maior valor dentro do vetor é: " << maior << std::endl;
}

void fndMenor (float valores[], int N) {
    float menor = valores[0];
    
    for (int i = 1; i < N; i++) {
        if (menor > valores[i]) {
            menor = valores[i];
        }
    }
    std::cout << "\nO menor valor dentro do vetor é: " << menor << std::endl;
}

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    bool rodando = true;
    int opc;
    const int N = 5;
    float valores[N];

    while (rodando) {

        std::cout << "O que deseja fazer?\n 1 - Inserir valores no vetor\n 2 - Exibir todos os valores armazenados\n 3 - Calcular e exibir a soma dos valores\n 4 - Identificar e exibir o maior valor\n 5 - Identificar e exibir o menor valor\n 0 - Encerrar o programa \n" << std::endl;
        std::cin >> opc;

       switch (opc) {
        case 1: 
            std::cout << "\nInserir valores no vetor" << "\n";
            altArray(valores, N);
            break;
        case 2:
            std::cout << "\nExibir todos os valores armazenados" << "\n";
            outValores(valores, N);
            break;
        case 3:
            std::cout << "\nCalcular e exibir a soma dos valores" << "\n";
            outSoma(valores, N);
            break;
        case 4:
            std::cout << "\nIdentificar e exibir o maior valor" << "\n";
            fndMaior(valores, N);
            break;
        case 5:
            std::cout << "\nIdentificar e exibir o menor valor" << "\n";
            fndMenor(valores, N);
            break;
        case 0:
            rodando = false;
            break;
       }
    }

    return 0;
}