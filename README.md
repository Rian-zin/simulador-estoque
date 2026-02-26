# Simulador de Controle de Estoque (CLI)

Um sistema de linha de comando desenvolvido em C++ para simular a gestão logística e o controle de fluxo de materiais em um almoxarifado. 

Este projeto não foca apenas na sintaxe da linguagem, mas na aplicação rigorosa de **regras de negócio** e **validação de domínio** para garantir a integridade dos dados, traduzindo processos logísticos do mundo real para a engenharia de software.

## 🛠️ Regras de Negócio Implementadas

O motor do sistema foi arquitetado com múltiplas camadas de segurança para evitar falhas humanas e corrupção de dados:

* **Type Safety (Proteção de Fluxo):** Implementação de contenção de falha via `std::cin.fail()`. O sistema purga o buffer de memória automaticamente se o operador inserir caracteres inválidos (letras no lugar de números), impedindo o travamento (*crash*) da aplicação.
* **Barreira Antifraude:** Bloqueio matemático estrito que impede o registro de movimentações com valores negativos, tanto para entradas quanto para saídas.
* **Prevenção de Ruptura de Estoque:** Na operação de saída, o sistema calcula previamente se a dedução resultará em saldo negativo. Caso a quantidade solicitada seja maior que o estoque físico disponível, a transação é bloqueada, protegendo a economia do sistema.
* **Segregação de Roteamento:** Estrutura condicional de exclusão mútua (`if / else if / else`) garantindo que falhas de digitação em menus não gerem falsos positivos ou encerramentos acidentais.

## 💻 Tecnologias Utilizadas

* **Linguagem:** C++ (C++11 ou superior)
* **Bibliotecas:** `<iostream>` (Standard Template Library)
* **Compilador:** GCC (MinGW)

## 🚀 Como Compilar e Executar

Para rodar este simulador localmente, você precisará de um compilador C++ instalado (como o G++).

1. Clone o repositório:

git clone [https://github.com/Rian-zin/simulador-estoque/blob/main/estoque.cpp]

2. Navegue até o diretório do projeto:
cd simulador-estoque

3. Compile o código:
g++ estoque.cpp -o estoque.exe

4. Execute o sistema:
.\estoque.exe
