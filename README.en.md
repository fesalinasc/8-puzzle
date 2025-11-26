
---

# 🧩 8-Puzzle in C

This project implements the classic **8-Puzzle game**, where the objective is to arrange the numbers from 1 to 8 in ascending order, leaving the empty space (0) in the last position.
The solution is entirely developed in **C**, with real-time user-controlled movements (W, A, S, D).

---

## 🎮 Features

* 🔄 **Automatic generation** of random boards
* ✔️ Puzzle is always guaranteed to be **solvable**
* 👀 Simple and clean console interface
* 🎹 Movement using:

  * **W** → move tile up
  * **S** → move tile down
  * **A** → move tile left
  * **D** → move tile right
* 🧠 Automatic completion check
* 🖥️ Board re-rendering after every move

---

## 📂 Project Structure

```

📦 8-puzzle-c
├── main.c        \# Main file containing all the logic
└── README.en.md  \# Project documentation

````

---

## 🚀 How to Run

1. Compile the program:

```bash
gcc main.c -o puzzle
````

2.  Execute:

<!-- end list -->

```bash
./puzzle
```

> Ensure you are using Windows or compile without the `conio.h` dependency if you are on Linux (I can adapt if you wish).

-----

## 🧠 How the Program Works

### 🔹 1. Puzzle Generation

The `gerarPuzzle()` function randomly creates a **solvable** board using shuffling and inversion checking.

### 🔹 2. Movement

The `fs()` function receives the user command and swaps the neighboring tile with the empty space.

### 🔹 3. Rendering

The `printEstado()` function clears the screen and displays the formatted board.

### 🔹 4. Win Condition

The game ends when the board achieves:

```
1 2 3
4 5 6
7 8 _
```

-----

## 📘 Controls

| Key | Action |
| :---: | :--- |
| **W** | Moves the empty space up |
| **S** | Moves the empty space down |
| **A** | Moves the empty space to the left |
| **D** | Moves the empty space to the right |

-----

## 🛠️ Main Functions

  * `printEstado()` – displays the puzzle board
  * `deepcopy()` – copies the puzzle state
  * `fs()` – executes the move
  * `completo()` – checks if the puzzle has been solved
  * `gerarPuzzle()` – creates random board
  * `ehSolucionavel()` – guarantees the puzzle has a solution

-----

## 🏁 Finalization

Upon solving the puzzle, the user receives:

```
Congratulations! You completed the puzzle!
```

-----

## 👤 Author

**Felipe Salinas Caodaglio**

```

