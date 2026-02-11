#include <iostream>
#include <string>

int main () {

    const std::string LOGIN_CORRETO = "VascoDaGama";
    const std::string SENHA_CORRETA = "Vegetti";
    int erros = 0;

    for (int tentativas = 3; tentativas !=0; tentativas--) {
        
        std::string inputLogin, inputSenha;

        std::cout << "Digite Seu Login:" << std::endl;
        getline(std::cin, inputLogin);

        std::cout << "Digite sua senha:" << std::endl;
        getline(std::cin, inputSenha);

        if (inputLogin == LOGIN_CORRETO && inputSenha == SENHA_CORRETA) {
            break;
        } else if (inputLogin != LOGIN_CORRETO || inputSenha != SENHA_CORRETA) {

            if (erros < 2) {
                std::cout << "Login incorreto! Tente novamente." << std::endl << 2-erros << " Tentativas restantes. \n" << std::endl;
            }else {
                std::cout << "Login incorreto! \n" << std::endl;
            }erros += 1;

        }
    }if (erros == 3){
        std::cout << "Acesso bloqueado." << std::endl;
    }else {
        std::cout << "\n Login concluido!" << std::endl;
    }

    system("Pause");
    return 0;
}