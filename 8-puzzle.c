#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void printEstado(int estado[3][3]);
void deepcopy(int estado[3][3], int copiaEstado[3][3]);
void fs(int m1[3][3], int novaMatriz[3][3], char mov);
int completo(int puzzle[3][3]);
void gerarPuzzle(int puzzle[3][3]);
int ehSolucionavel(int puzzle[3][3]);


int main() {

    int puzzle[3][3];
    char mov;

    gerarPuzzle(puzzle);
    printEstado(puzzle);

    while (!completo(puzzle)) {
        mov = getch();
        fs(puzzle, puzzle, mov);
        printEstado(puzzle);
    }

    printf("\n Parabens! Voce completou o puzzle!\n");
    return 0;
}



void printEstado(int estado[3][3]) {
    system("cls");
    printf("\n------ 8-PUZZLE ------\n\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (estado[i][j] == 0)
                printf("   ");
            else
                printf(" %d ", estado[i][j]);
        }
        printf("\n");
    }
    printf("\nUse W (para cima), S (para baixo), A (para esquerda), D (para direita)\n");
}


void deepcopy(int estado[3][3], int copiaEstado[3][3]) {
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            copiaEstado[i][j] = estado[i][j];
}


void fs(int m1[3][3], int novaMatriz[3][3], char mov) {
    int i0, j0;
    deepcopy(m1, novaMatriz);


    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            if (novaMatriz[i][j] == 0) {
                i0 = i;
                j0 = j;
            }


    switch(mov) {
        case 'w': case 'W':
            if (i0 >0) {
                novaMatriz[i0][j0] = novaMatriz[i0-1][j0];
                novaMatriz[i0-1][j0] = 0;
            }
            break;
        case 's': case 'S':
            if (i0 < 2) {
                novaMatriz[i0][j0] = novaMatriz[i0+1][j0];
                novaMatriz[i0+1][j0] = 0;
            }
            break;
        case 'a': case 'A':
            if (j0 >0) {
                novaMatriz[i0][j0] = novaMatriz[i0][j0-1];
                novaMatriz[i0][j0-1] = 0;
            }
            break;
        case 'd': case 'D':
            if (j0 < 2) {
                novaMatriz[i0][j0] = novaMatriz[i0][j0+1];
                novaMatriz[i0][j0+1] = 0;
            }
            break;
    }
}


int completo(int puzzle[3][3]) {
    int correto[3][3] = {{1,2,3},{4,5,6},{7,8,0}};
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            if (puzzle[i][j] != correto[i][j])
                return 0;
    return 1;
}


int ehSolucionavel(int puzzle[3][3]) {
    int vetor[9];
    int k = 0;
    int inversoes = 0;


    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            vetor[k++] = puzzle[i][j];

    for (int i=0; i<9; i++) {
        for (int j=i+1; j<9; j++) {
            if (vetor[i] && vetor[j] && vetor[i] > vetor[j])
                inversoes++;
        }
    }


    return (inversoes % 2 == 0);
}


void gerarPuzzle(int puzzle[3][3]) {
    int numeros[9] = {0,1,2,3,4,5,6,7,8};
    int temp, pos;
    srand(time(NULL));

    do {

        for (int i=8; i>0; i--) {
            pos = rand() % (i+1);
            temp = numeros[i];
            numeros[i] = numeros[pos];
            numeros[pos] = temp;
        }

        int k = 0;
        for (int i=0; i<3; i++)
            for (int j=0; j<3; j++)
                puzzle[i][j] = numeros[k++];

    } while (!ehSolucionavel(puzzle));
}
