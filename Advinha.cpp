#include <iostream>
#include <locale>
#include <ctime>


int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    srand(time(NULL));

    const int N = rand() % 50 + 1;
    bool acertou = false;
    int chuteUsuario;
    int tentativas = 0;

    while (!acertou) {

        std::cout << "Faça um palpite: " << std::endl;
        std::cin >> chuteUsuario;

        if (chuteUsuario == N) {
            acertou = true;
        }else if (chuteUsuario > N) {
            std::cout << "\nO numero secreto é menor que " << chuteUsuario << std::endl;
            std::cout << "Total de tentativas: " << tentativas << "\n" << std::endl;
            tentativas += 1;
        }else {
            std::cout << "\nO numero secreto é maior que " << chuteUsuario << std::endl;
            std::cout << "Total de tentativas: " << tentativas << "\n" << std::endl;
            tentativas += 1;
        }
    }std::cout << "\n Correto!! Bem jogado! \n" << std::endl;

    system("Pause");
    return 0;
}