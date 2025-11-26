# 🧩 8-Puzzle em C

Este projeto implementa o clássico **quebra-cabeça 8-Puzzle**, onde o objetivo é organizar os números de 1 a 8 em ordem crescente, deixando o espaço vazio (0) na última posição.
A solução é totalmente desenvolvida em **C**, com movimentos controlados pelo usuário em tempo real (W, A, S, D).

---

## 🎮 Funcionalidades

* 🔄 **Geração automática** de tabuleiros aleatórios
* ✔️ Puzzle sempre garantido como **solucionável**
* 👀 Interface de console simples e limpa
* 🎹 Movimentação usando:

  * **W** → mover peça para cima
  * **S** → mover peça para baixo
  * **A** → mover peça para esquerda
  * **D** → mover peça para direita
* 🧠 Verificação automática de conclusão
* 🖥️ Re-renderização do tabuleiro a cada jogada

---

## 📂 Estrutura do Projeto

```
📦 8-puzzle-c
├── main.c        # Arquivo principal contendo toda a lógica
└── README.md     # Documentação do projeto
```

---

## 🚀 Como Executar

1. Compile o programa:

```bash
gcc main.c -o puzzle
```

2. Execute:

```bash
./puzzle
```

> Certifique-se de usar Windows ou compilar sem a dependência `conio.h`, caso esteja em Linux (posso adaptar se quiser).

---

## 🧠 Como o programa funciona

### 🔹 1. Geração do Puzzle

A função `gerarPuzzle()` cria aleatoriamente um tabuleiro **solucionável**, usando embaralhamento e checagem de inversões.

### 🔹 2. Movimentação

A função `fs()` recebe o comando do usuário e troca a peça vizinha pelo espaço vazio.

### 🔹 3. Renderização

A função `printEstado()` limpa a tela e exibe o tabuleiro formatado.

### 🔹 4. Condição de Vitória

O jogo termina quando o tabuleiro atinge:

```
1 2 3
4 5 6
7 8 _
```

---

## 📘 Controles

| Tecla | Ação                                |
| ----- | ----------------------------------- |
| **W** | Move o espaço vazio para cima       |
| **S** | Move o espaço vazio para baixo      |
| **A** | Move o espaço vazio para a esquerda |
| **D** | Move o espaço vazio para a direita  |

---

## 🛠️ Funções Principais

* `printEstado()` – exibe o tabuleiro
* `deepcopy()` – copia o estado do puzzle
* `fs()` – executa o movimento
* `completo()` – verifica se o puzzle foi resolvido
* `gerarPuzzle()` – cria tabuleiro aleatório
* `ehSolucionavel()` – garante que o puzzle tenha solução

---

## 🏁 Finalização

Ao resolver o puzzle, o usuário recebe:

```
Parabéns! Você completou o puzzle!
```
---

## 🇺🇸 (English Version)


➡️ **([English Version](README.en.md))**



---

## 👤 Autor

**Felipe Salinas Caodaglio**
