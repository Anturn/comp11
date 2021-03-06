/*******************************************************************************
 * ghost Class Implementation *
 * For Pacman Game (COMP 11 Project 1 | 2016 Spring)                           *
 *****************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

#include "termfuncs.h"
#include "constants.h"
#include "boulder.h"
#include "ghost.h"

Ghost::Ghost() {
        return;
}

// input: two ints
// this function sets up the coordinates of the ghost
void Ghost::set_location(int r, int c) {
        row = r;
        col = c;
}

// input: char the board
// this function sets up the ghost into the board
void Ghost::place_on_board(char board[ROWS][COLS]) {
        board[row][col] = GHOST;
}

// input: char the board and two ints, the coordinates of the pacman
// output: the boolean decides wether the ghost encounter a pacman
bool Ghost::move(char board[ROWS][COLS], int target_r, int target_c) {
        int row_diff = target_r - row;
        int col_diff = target_c - col;
	if (abs(row_diff) <= abs(col_diff)) {
                if (col_diff < 0) {
                        col = col - 1;
                        if (board[row][col] == GHOST) 
                                col = col + 1;
		} else {
                        col = col + 1;
                        if (board[row][col] == GHOST) 
                                col = col - 1;
                }
        } else if (abs(row_diff) > abs(col_diff)) {
                if (row_diff < 0) {
                        row = row - 1;
                        if (board[row][col] == GHOST) {
                                row = row + 1;
                        }
		} else {
                        row = row + 1;
                        if (board[row][col] == GHOST) 
                                row = row - 1;
                }
        }
	if (row == target_r && col == target_c)
                return true;
        else
                return false;
}

