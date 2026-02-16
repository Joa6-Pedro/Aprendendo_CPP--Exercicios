#include <iostream>
#include <locale>
#include <string>

struct pessoa {
    std::string nome;
    int idade;
    float altura;
    char gen;
};

void newPessoa (pessoa pessoas[], int N, int i) {
    if (i < N) {


        std::cout << "Digite o nome da pessoa: " << std::endl;
        getline(std::cin, pessoas[i].nome);
        std::cout << "\nDigite a idade da pessoa: " << std::endl;
        std::cin >> pessoas[i].idade;
        std::cout << "\nDigite a altura da pessoa: " << std::endl;
        std::cin >> pessoas[i].altura;
        std::cout << "\nDigite o genero da pessoa (M ou F): " << std::endl;
        std::cin >> pessoas[i].gen;
    }
    
}

void outAll (pessoa pessoas[], int i) {

    if (i == 0) {
    std::cout << "Nenhuma pessoa cadastrada." << std::endl;
    return;
}

    for (int j = 0; j < i; j++) {
        std::cout 
        << "\nPessoa: " << pessoas[j].nome 
        << "\n  Idade: " << pessoas[j].idade 
        << "\n  Altura: " << pessoas[j].altura 
        << "\n  Genêro: " << pessoas[j].gen << std::endl;
    }
}

void outMediaIdade (pessoa pessoas[], int i) {

    if (i == 0) {
        std::cout << "Nenhuma pessoa cadastrada." << std::endl;
        return;
    }

    float media = 0;

    for (int j = 0; j < i; j++) {
        media += pessoas[j].idade;
    }
    media = media / i;

    std::cout << "A media de idade das pessoas cadastradas é: " << media << std::endl;
}

void outMediaAltura (pessoa pessoas[], int i) {

    if (i == 0) {
        std::cout << "Nenhuma pessoa cadastrada." << std::endl;
        return;
    }

    float media = 0;

    for (int j = 0; j < i; j++) {
        media += pessoas[j].altura;
    }
    media = media / i;

    std::cout << "A media de altura das pessoas cadastradas é: " << media << std::endl;
}

void outOldest (pessoa pessoas[], int i) {

    if (i == 0) {
    std::cout << "Nenhuma pessoa cadastrada." << std::endl;
    return;
}

    int indexOldest = 0;
    for (int j = 1; j < i; j++) {
        if (pessoas[j].idade >= pessoas[indexOldest].idade) {
            indexOldest = j;
        }
    }

    std::cout << "A pessoa mais velha dentre as cadastradas é: " << pessoas[indexOldest].nome << std::endl;
}

void outNewest (pessoa pessoas[], int i) {

    if (i == 0) {
    std::cout << "Nenhuma pessoa cadastrada." << std::endl;
    return;
}

    int indexNewest = 0;
    for (int j = 1; j < i; j++) {
        if (pessoas[j].idade <= pessoas[indexNewest].idade) {
            indexNewest = j;
        }
    }

    std::cout << "A pessoa mais nova dentre as cadastradas é: " << pessoas[indexNewest].nome << std::endl;
}

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i = 0;
    const int N = 5;
    pessoa pessoas[N];

    int opc;
    bool rodando = true;
    bool maxPessoas = false;

    while (rodando) {

    std::cout << "Selecione uma opção:\n 1 - Cadastrar pessoas\n 2 - Exibir todas as pessoas cadastradas\n 3 - Exibir a média de idade das pessoas cadastradas\n 4 - Exibir a média de altura das pessoas cadastradas\n 5 - Exibir a pessoa mais nova cadastrada\n 6 - Exibir a pessoa mais velha cadastrada\n 0 - Encerrar o programa" << std::endl;
    std::cin >> opc;
    std::cin.ignore();

        switch (opc) {
            case 1: 
                if (i < N) {
                    newPessoa(pessoas, N, i);
                    i++; 
                }else {
                    std::cout << "\nERRO!! Número máximo de pessoa cadastradas!" << std::endl;
                }
                break;
            case 2:
                outAll(pessoas, i);
                break;
            case 3:
                outMediaIdade(pessoas, i);
                break;
            case 4:
                outMediaAltura(pessoas, i);
                break;
            case 5:
                outNewest(pessoas, i);
                break;
            case 6:
                outOldest(pessoas, i);
                break;
            case 0:
                rodando = false;
                break;
        }
 
    }

    system("Pause");
    return 0;
}