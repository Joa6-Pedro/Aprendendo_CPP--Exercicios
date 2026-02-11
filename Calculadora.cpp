#include <iostream>
#include <locale>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    bool rodando = true;

    while (rodando) {

        int operacao, n1, n2, resultado;

        std::cout << "\n 1 = Soma \n 2 = Subtração \n 3 = Multiplicação \n 4 = Divisão \n 0 = Encerrar \n" << std::endl;
        std::cin >> operacao;

        if (operacao == 0) {
            std::cout << "\nPrograma Encerrado \n" << std::endl;
            break;
        }else {
            std::cout << "\nDigite o primeiro valor: " << std::endl;
            std::cin >> n1;

            std::cout << "\nDigite o segundo valor: " << std::endl;
            std::cin >> n2;

            switch (operacao) {
                case 1:
                    resultado = n1 + n2;
                    break;

                case 2:
                    resultado = n1 - n2;
                    break;

                case 3:
                    resultado = n1 * n2;
                    break;
                    
                case 4:
                    if (n2 == 0) {
                        std::cout << "Erro: divisao por zero!\n";
                    }else{
                        resultado = n1 / n2;
                    }break;    

            }if (operacao == 4 && n2 == 0) {
                resultado = NULL;
            }else {
                std::cout << "\nResultado = " << resultado << "\n" << std::endl;
            }
        }

    }
    system("Pause");
    return 0;
}