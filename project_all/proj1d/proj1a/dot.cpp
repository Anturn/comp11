/*******************************************************************************
 * dot Class Implementation                                                   *
 * For Pacman Game (COMP 11 Project 1 | 2016 Spring)                           *
 *****************************************************************************/
#include <iostream>
using namespace std;

#include "termfuncs.h"
#include "constants.h"
#include "boulder.h"
#include "dot.h"

Dot::Dot() {
        eaten = false;
}

// This function inputs the board
// and randomly generate a location
void Dot::set_random_location(char board[ROWS][COLS]) {
        if (eaten == false) {
                do {
                        row = random_int(0, ROWS - 1);
                        col = random_int(0, COLS - 1);
                } while (board[row][col] != SPACE);
        }
}

// This function inputs the board
// and put the location of the dot
// into the board
void Dot::place_on_board(char board[ROWS][COLS]) {
        board[row][col] = DOT;
}

// ouput: a boolean
// this function return from private
// decideing wether the specific dot is eaten
bool Dot::was_eaten() {
        return eaten;
}

// input: a boolean
// this function sets up a boolean in private
void Dot::set_eaten(bool out_iseaten) {
        eaten = out_iseaten;
}

// input: two ints
// output: a boolean
// this function decides wether a dot is in
// a specific position
bool Dot::is_at(int r, int c) {
        if ((r == row) && (c == col)) {
                eaten = true;
                return eaten;

        } else {
                return eaten;
        }
}
