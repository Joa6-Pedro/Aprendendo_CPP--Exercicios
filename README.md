# Exercícios de Prática em C++

Repositório com exercícios de programação em **C++**, feitos como parte da prática e aprendizado da linguagem.  
Todos os exercícios foram implementados por mim, seguindo uma progressão natural de conceitos — desde operações básicas até uso de structs e funções.

Data de início: 11/02/2026

---

## Visão Geral

Este repositório contém uma série de programas em C++ que abordam:

- Entrada e saída de dados  
- Estruturas de controle (`if`, `switch`, `while`, `for`)  
- Funções  
- Vetores (arrays)  
- Manipulação de strings  
- Uso de `struct`

Cada arquivo implementa um exercício com foco em um conceito específico.

---

## Lista de Exercícios

### 1. Calculadora  
Solicita ao usuário uma operação matemática básica, lê dois valores e exibe o resultado.  
Permite repetição até o usuário encerrar.

### 2. Jogo de Adivinhação  
Gera um número aleatório e pede palpites, indicando se o valor é maior ou menor que o número secreto.  
Conta o número de tentativas até o acerto.

### 3. Sistema de Login Simples  
Simula um sistema de autenticação com login e senha predefinidos, limitando o número de tentativas.

### 4. Contador de Vogais em Frase  
Lê uma frase completa e conta:
- Total de letras
- Número total de vogais
- Quantidade de cada vogal (A, E, I, O, U)

### 5. Análise de Notas com Vetor  
Lê um conjunto fixo de valores numéricos (notas), calcula a média, identifica o maior e o menor valor.

### 6. Operações com Vetor Utilizando Funções  
Implementa funções para:
- Ler valores em um vetor
- Somar os elementos
- Identificar o maior valor

Observação: este exercício foi pulado na prática.

### 7. Sistema de Gerenciamento de Valores  
Menu interativo que permite:
- Inserir valores
- Exibir valores
- Calcular soma
- Identificar maior e menor valor

### 8. Exercício de Struct: Cadastro de Pessoas  
Cadastro simples de pessoas com:
- nome
- idade
- altura
- gênero

Inclui funções para entrada e exibição dos dados.

### 9. Sistema de Cadastro com Estatísticas  
Expande o exercício anterior adicionando:
- Média de idade
- Média de altura
- Pessoa mais nova
- Pessoa mais velha

---

## Como Compilar

Para compilar qualquer exercício, utilize um compilador C++ (exemplo com `g++`):

```bash
g++ nome_do_arquivo.cpp -o programa.exe

```
## Exemplo
```bash
g++ cadastroPessoas_ComEstatisticas.cpp -o cadastroPessoas_ComEstatisticas.exe
```

```bash
## Observações

Este repositório tem fins educacionais e documenta meu processo de aprendizado em C++.  
Os códigos priorizam clareza e prática dos conceitos, não otimização avançada.
