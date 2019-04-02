#include "sudoku.h"

char POSIBLE = 0x1FF;

int main(){
    int ** puzzle;
    Square *** sudoku;

    puzzle = createPuzzle();
    printPuzzle(puzzle);
    sudoku = setUpPuzzle(puzzle);

    return 0;

}