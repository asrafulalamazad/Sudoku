#include "sudoku.h"

Square *** setUpPuzzle(int ** puzzle){
    Square *** sudoku;
    sudoku = (Square***)malloc(sizeof(Square**)*9);
    for(size_t i = 0; i < 9; i++){
        /* code */
        sudoku[i] =(Square***)malloc(sizeof(Square**)*9);
        for(size_t j = 0; j < 9; j++){
            /* code */
            sudoku[i][j] = (Square*)malloc(sizeof(Square)*9);
            sudoku[i][j]->number = puzzle[i][j];
            sudoku[i][j]->row = i;
            sudoku[i][j]->column = j;
            if(sudoku[i][j]->number != 0)
                sudoku[i][j]->code = POSIBLE;
            else
                sudoku[i][j]->code = 0x0;
        }   
    }
}

int ** createPuzzle(){
    int ** puzzle;
    // int i,j;
    int array[9][9] = {3, 4, 0,   0, 0, 0,   0, 7, 0,
                       8, 0, 0,   4, 0, 7,   2, 5, 0,
                       7, 0, 6,   8, 0, 0,   3, 0, 9,

                       0, 1, 3,   0, 0, 6,   4, 0, 0,
                       0, 0, 7,   0, 0, 4,   0, 1, 0,
                       0, 0, 4,   0, 0, 0,   6, 0, 3,
                       
                       0, 7, 9,   6, 5, 0,   1, 0, 2,
                       0, 0, 0,   7, 0, 0,   5, 9, 8,
                       0, 3, 0,   2, 9, 1,   7, 0, 0,};
        
        puzzle = (int**)malloc(sizeof(int*)*9);
        for(size_t i = 0; i < 9; i++){
            puzzle[i] =(int*)malloc(sizeof(int)*9);
            for(size_t j = 0; j < 9; j++){
                puzzle[i][j] = array[i][j];
            }
            
        }
        return puzzle;
}

// print data infor the terminal
void printPuzzle(int ** puzzle){
    printf("+-----------------------------+\n");
    for(size_t i = 0; i < 9; i++){
        /* code */
        printf("|");
        for(size_t j = 0; j < 9; j++){
            /* code */
            printf(" %d ",puzzle[i][j]);
            if(((j +1) %3) == 0){
                printf("|");
            }
        }
        printf("\n");
        if(((i+1) % 3) ==0){
            printf("+-----------------------------+\n");
        }
    }   
}