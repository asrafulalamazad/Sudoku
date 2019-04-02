#ifndef SUDOKU_H
#define SUDOKU_H
#include <stdio.h>
#include <stdlib.h>

// char POSIBLE = 0x1FF;
extern char POSIBLE;

typedef struct Box{
    struct Box * next;    
}Box;

typedef struct  Square{
    int number;
    char code;
    Box * box;
    int row;
    int column;
}Square;

int ** createPuzzle();
void printPuzzle(int ** puzzle);
Square *** setUpPuzzle(int ** puzzle);

#endif