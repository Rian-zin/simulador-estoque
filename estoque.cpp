#include <iostream>

int main() {
    int CaixasPapelao = 50;
    int FitasAdesivas = 120;
    int Bobinas = 15;
    int Escolha;
    int ItemSelecionado;
    int QuantidadeMovimentada;

    while (true) {
        std::cout << "Estoque atual: \n";
        std::cout << "Caixas de papelao: " << CaixasPapelao << "\n";
        std::cout << "Fitas adesivas: " << FitasAdesivas << "\n";
        std::cout << "Bobinas: " << Bobinas << "\n";
        std::cout << " [1] Registrar entrada de material \n [2] Registrar saida de material \n [3] Encerrar expediente \n Digite o numero referente a opcao de sua escolha: ";
        std::cin >> Escolha;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Entrada invalida\n";
        } else if (Escolha == 1) {

        } else if (Escolha == 2) {

        } else if (Escolha == 3) {
            std::cout << "Encerrando expediente...";
            break;
        } else {
            std::cout << "Opcao invalida\n";
        }
    }
}