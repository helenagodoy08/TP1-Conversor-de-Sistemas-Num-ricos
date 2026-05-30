# Conversor Universal de Bases Numéricas
GCC241 – Introdução à Computação | UFLA | 2026/1 | Turma 14A;

Feito por: Helena de Godoy e Júlia Abreu de Araújo;

Projeto em C++ (padrão C++11 ou superior);

Link do vídeo explicativo:;

## Funções

-Conversor universal entre bases binária (2), octal (8), decimal(10) e hexadecimal (16);

-Calculadora de máximo representável dado uma quantidade de bits;

-Modo quiz com 5 níveis de dificuldade;

## Arquivos do repositório

```
TP1 Durelli/
├── src/
│   ├── conversores.cpp       # algoritmos de conversão
│   ├── conversores.hpp       # declaração dos algoritmos de conversão
│   ├── formatador.cpp        # declarações do parser de entrada
│   ├── formatador.hpp        # leitura, validação e parsing de entrada
│   ├── formatador.hpp        # declarações do formatador de saída
│   ├── main.cpp              # impressão, modo batch, quiz e calculadora
│   ├── parser.cpp            # código da função de separador 
│   ├── parser.hpp            # declaração da função de separador de números fracionários
│   ├── quiz.cpp              # menu do quiz e implementação das funções de conversão
│   └── quiz.hpp              # declaração das funcões do modo quiz
├── tests/
│   └── testes.cpp            # suíte de testes automatizados
├── entrada.csv               # exemplo de arquivo de entrada para o modo batch
└── README.md
```
---

## Instruções de execução

Certifique-se de ter o compilador 'g++' instalado;
Para compilar:;

```bash
g++ main.cpp conversores.cpp formatador.cpp parser.cpp quiz.cpp -o main.exe
```
Para executar:;

```bash
./main.exe
```
## Como utilizar

Após a execução, o programa deve exibir um menu com três opções:



## Exemplos

## Limitações do projeto

-Modo quiz não suporta números fracionários;

