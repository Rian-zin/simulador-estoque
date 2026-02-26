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
        std::cout << " [1] Registrar entrada de material \n [2] Registrar saida de material \n [3] Encerrar expediente \n Digite o numero referente a opcao de sua escolha: \n";
        std::cin >> Escolha;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Entrada invalida\n";
        } else if (Escolha == 1) {
            std::cout << " [1] Caixas \n [2] Fitas \n [3] Bobinas \n Selecione qual item deseja registrar: \n";
            std::cin >> ItemSelecionado;
            if (ItemSelecionado < 1 || ItemSelecionado > 3) {
                std::cout << "Erro: Item inexistente!\n";
            } else {
                std::cout << "Digite a quantidade a ser movimentada: \n";
                std::cin >> QuantidadeMovimentada;
                if (QuantidadeMovimentada < 0) {
                    std::cout << "Erro: A quantidade nao pode ser negativa\n";
                } else {
                    if (ItemSelecionado == 1) {
                        CaixasPapelao = CaixasPapelao + QuantidadeMovimentada;
                    } else if (ItemSelecionado == 2) {
                        FitasAdesivas = FitasAdesivas + QuantidadeMovimentada;
                    } else if (ItemSelecionado == 3) {
                        Bobinas = Bobinas + QuantidadeMovimentada;
                    } std::cout << "Entrada registrada com sucesso!\n";
                }
            }
        } else if (Escolha == 2) {
            std::cout << "[1] Caixas \n [2] Fitas \n [3] Bobinas \n Selecione qual item deseja registrar: \n";
            std::cin >> ItemSelecionado;
            if (ItemSelecionado < 1 || ItemSelecionado > 3) {
                std::cout << "Erro: Item inexistente!\n";
            } else {
                std::cout << "Digite a quantidade a ser movimentada: \n";
                std::cin >> QuantidadeMovimentada;
                if (QuantidadeMovimentada < 0) {
                    std::cout << "Erro: Quantidade nao pode ser negativa\n";
                } else {
                    if (ItemSelecionado == 1) {
                        if (QuantidadeMovimentada > CaixasPapelao) {
                            std::cout << "Erro: Estoque insuficiente de caixas\n";
                        } else {
                            CaixasPapelao = CaixasPapelao - QuantidadeMovimentada;
                            std::cout << "Saida registrada com sucesso.\n";
                        }
                    } else if (ItemSelecionado == 2) {
                        if (QuantidadeMovimentada > FitasAdesivas) {
                            std::cout << "Erro: Estoque insuficiente de fitas\n";
                        } else {
                            FitasAdesivas = FitasAdesivas - QuantidadeMovimentada;
                            std::cout << "Saida registrada com sucesso.\n";
                        }
                    } else if (ItemSelecionado == 3) {
                        if (QuantidadeMovimentada > Bobinas) {
                            std::cout << "Erro: Estoque insuficiente de bobinas\n";
                        } else {
                            Bobinas = Bobinas - QuantidadeMovimentada;
                            std::cout << "Saida registrada com sucesso.\n";
                        }
                    }
                }
            }
        } else if (Escolha == 3) {
            std::cout << "Encerrando expediente...";
            break;
        } else {
            std::cout << "Opcao invalida\n";
        }
    }
}