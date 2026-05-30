# Conversor Universal de Bases Numéricas
GCC241 – Introdução à Computação | UFLA | 2026/1 | Turma 14A;

Feito por: Helena de Godoy e Júlia Abreu de Araújo;

Projeto em C++ (padrão C++11 ou superior);

Link do vídeo explicativo:;

## Funções

- Conversor universal entre bases binária (2), octal (8), decimal(10) e hexadecimal (16);

- Calculadora de máximo representável dado uma quantidade de bits;

- Modo quiz com 5 níveis de dificuldade;

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
└── README.md                 #descrição instruções do projeto
```
---

## Instruções de execução

Certifique-se de ter o compilador 'g++' instalado;

Para compilar:

```bash
g++ main.cpp conversores.cpp formatador.cpp parser.cpp quiz.cpp -o main.exe
```
Para executar:

```bash
./main.exe
```
## Como utilizar

Após a execução, o programa deve exibir um menu com três opções:

```
1. Conversão de bases
2. Calcular máximos
3. Quiz de conversões

```
Ao selecionar a opção 1, outro menu com as conversões disponíveis é exibido:

```
1. Decimal para binário/octal/hexadecimal.
2. Binário/octal/hexadecimal para decimal.
3. Binário para octal.
4. Octal para binário.
5. Binário para hexadecimal.
6. Hexadecimal para binário.
7. Octal para hexadecimal.
8. Hexadecimal para octal.

```
Ao selecionar opção 2, o programa pede que o usuário informe a quantidade bits para o cálculo do número máximo;

Ao selecionar opção 3, outro menu com as dificuldades do quiz é exibido:

```
Escolha a dificuldade:
1 - Muito fácil
2 - Fácil
3 - Normal
4 - Difícil
5 - Muito difícil

```

## Exemplos de uso

### Conversão simples 

Menu principal -> 1.

Exemplo de conversão decimal -> binário (opção -> 1. no menu secundário)

```
Digite um número para conversão:8
Digite a base para conversão:2
Ativar modo passo a passo? Digite S/N: N

Resultado: 1000
```

### Calculadora de máximos

Menu principal -> 2.

```
Insira a quantidade de bits:8
Ativar modo passo a passo? Digite S/N: N

Maior número binário: 11111111
Maior número octal: 377
Maior número decimal: 255
Maior número hexadecimal: FF

```

### Trace passo a passo 
Menu principal -> 1.

Exemplo de conversão decimal -> binário (opção -> 1. no menu secundário);

```
Digite um número para conversão:8
Digite a base para conversão:2
Ativar modo passo a passo? Digite S/N: S

Número Divisor Quociente Resto
8        2        4        0
4        2        2        0
2        2        1        0
1        2        0        1

Lendo os resultados de baixo para cima:
Resultado: 1000
```

Exemplo calculadora de máximos (opção -> 2 no menu principal);

```
Insira a quantidade de bits:8
Ativar modo passo a passo? Digite S/N: N

Bits Expressão Resultado
8      2^8 - 1      255

Maior número binário: 11111111
Maior número octal: 377
Maior número decimal: 255
Maior número hexadecimal: FF

```

### Base inválida

Menu principal -> 1.

Exemplo de conversão decimal -> binário (opção -> 1. no menu secundário)

```
Digite um número para conversão:8
Digite a base para conversão:3

Erro: base inválida! Tente novamente.
```

### Modo quiz 

Menu principal -> 3.

Exemplo de quiz nível 'muito fácil' (opção ->1. no menu secundário)

```
===Questão 1===
Converta 6 decimal para hexadecimal:
6
Resposta correta!

===Questão 2===
Converta 3 decimal para octal:
4
Errado!
Resposta correta: 3

[...]

=== Resultado Final ===
Pontuação: (quantidade de acertos)/5

```

## Limitações do projeto

- Projeto não suporta números fracionários;
  
- Modo quiz não suporta números fracionários;

- Modo quiz não tem passo a passo das respostas;
