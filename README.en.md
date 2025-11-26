# 🧩 8-Puzzle in C

This project implements the classic **8-Puzzle**, where the goal is to arrange the numbers from 1 to 8 in ascending order, leaving an empty space (0) in the last position.

The solution is entirely developed in **C**, with movements controlled by the user in real time (W, A, S, D).

---

## 🎮 Features

* 🔄 **Automatic generation** of random boards
* ✔️ Puzzle always guaranteed to be **solvable**
* 👀 Simple and clean console interface
* 🎹 Movement using:

* **W** → move piece up

* **S** → move piece down

* **A** → move piece left

* **D** → move piece right

* 🧠 Automatic completion check
* 🖥️ Board re-rendering after each move

---

## 📂 Project Structure

```

📦 8-puzzle-c
├── main.c # Main file containing all the logic
└── README.md # Documentation Project


---

## 🚀 How to Run

1. Compile the program:

```bash
gcc main.c -o puzzle

```

2. Run:

```bash
./puzzle

> Make sure you are using Windows or compile without the `conio.h` dependency if you are on Linux (I can adapt it if you want).

---

## 🧠 How the program works

### 🔹 1. Puzzle Generation

The `generatePuzzle()` function randomly creates a **solvable** puzzle board, using shuffling and inversion checking.

### 🔹 2. Movement

The `fs()` function receives the user's command and swaps the neighboring piece with the empty space.

### 🔹 3. Rendering

The `printEstado()` function clears the screen and displays the formatted board.

### 🔹 4. Winning Condition

The game ends when the board reaches:

```
1 2 3
4 5 6
7 8 _
```

---

## 📘 Controls

| Key | Action |

| ----- | ----------------------------------- |

| **W** | Moves the empty space up |

| **S** | Moves the empty space down |

| **A** | Moves the empty space to the left |

| **D** | Moves the empty space to the right |

---

## 🛠️ Main Functions

* `printEstado()` – displays the puzzle board
* `deepcopy()` – copies the puzzle state
* `fs()` – executes the move
* `completo()` – checks if the puzzle has been solved
* `gerarPuzzle()` – creates a random puzzle board
* `ehSolucionavel()` – ensures the puzzle has a solution

---

## 🏁 Completion

Upon solving the puzzle, the user receives:

``` Congratulations! You have completed the puzzle!

```

---

## 👤 Author

**Felipe Salinas Caodaglio**

---
