# POO_Atividade1

Trabalho da disciplina de Programação Orientada a Objetos em C++.

Este repositório contém a implementação de três Tipos Abstratos de Dados (TADs), conforme solicitado na atividade.

---

## Questão 1 — TAD CONTA

Implementação de um tipo abstrato de dados que representa uma conta bancária.

### Funcionalidades:

* Criar conta com nome e saldo
* Consultar saldo e titular
* Realizar depósito
* Realizar saque (sem permitir saldo negativo)
* Transferência entre contas

### Como executar:

```bash
g++ conta.cpp -o conta
./conta
```

---

## Questão 2 — TAD FRAÇÃO

Implementação de um tipo abstrato de dados para representar frações.

### Funcionalidades:

* Soma
* Subtração
* Multiplicação
* Divisão

As operações podem ser realizadas entre:

* Duas frações
* Uma fração e um número inteiro

### Como executar:

```bash
g++ fracao.cpp -o fracao
./fracao
```

---

## Questão 3 — TAD LISTA

Implementação de uma lista de inteiros utilizando duas abordagens:

### Lista com Array:

* Inserção no final
* Remoção por posição
* Verificação se está vazia
* Busca de elementos

### Lista com Ponteiros (Lista Encadeada):

* Inserção dinâmica
* Percurso da lista
* Busca de elementos

### Como executar:

```bash
g++ lista.cpp -o lista
./lista
```

---

## Organização do projeto

```text
POO_Atividade1/
├── questao1/
├── questao2/
├── questao3/
├── README.md
└── .gitignore
```

---
