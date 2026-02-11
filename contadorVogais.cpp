#include <iostream>
#include <string>

int main () {

    std::string palavra;
    int nLetras;

    std::cout << "Digite uma palavra" << std::endl;
    std::cin >> palavra;

    nLetras = palavra.length();
    int nA = 0;
    int nE = 0;
    int nI = 0;
    int nO = 0;
    int nU = 0; 
    int nVogais = 0;

    for (int i = 0; i< nLetras; i++) {
        char letraAtual = std::toupper(palavra[i]);
        

        switch (letraAtual) {
            case 'A':
                nA += 1;
                nVogais += 1;
                break;

            case 'E':
                nE += 1;
                nVogais += 1;
                break;

            case 'I':
                nI += 1;
                nVogais += 1;
                break;

            case 'O':
                nO += 1;
                nVogais += 1;
                break;

            case 'U':
                nU += 1;
                nVogais += 1;
                break;

            default:
                continue;
        }
    }

    std::cout << "\nTotal de letras: " << nLetras <<"\n Numero de Vogais: " << nVogais << "\n Numero de A = " << nA << "\n Numero de E = " << nE << "\n Numero de I = " << nI << "\n Numero de O = " << nO << "\n Numero de U = " << nU << std::endl;
    

    system("Pause");
    return 0;
}