/**
 * The game of Tic-Tac-Toe
 */

#include <iostream>
#include "tictactoe.h"

using namespace std;

// constructor
TicTacToe::TicTacToe() : computerTurn{true} {
  cout << "new Tic-Tac-Toe board, computer plays X" << endl;
  clear();
}

// clear the board
void TicTacToe::clear() {
  for (int i = 0; i < 9; ++i) {
    board[i] = EMPTY;
  }
}

// draw the board
void TicTacToe::draw() const {
  cout << "Current Board:" << endl;
  cout << board[0] << " | " << board[1] << " | " << board[2] << endl;
  cout << board[3] << " | " << board[4] << " | " << board[5] << endl;
  cout << board[6] << " | " << board[7] << " | " << board[8] << endl;

}

// computer makes a random play
void TicTacToe::playComputer() {
  int loc = rand() % 9;
  while (board[loc] != EMPTY) {
    loc = rand() % 9;
  }
  board[loc] = XSYM;
}

// person makes a random play
void TicTacToe::playPerson() {
  int loc = rand() % 9;
  while (board[loc] != EMPTY) {
    loc = rand() % 9;
  }
  board[loc] = OSYM;
}

// play the full game
void TicTacToe::startGame() {
  int turn = 1;
  while (turn < 10) {
    cout << "Turn: " << turn;
    cout << (computerTurn ? " computer plays" : " your turn")  << endl;
    if (computerTurn) {
      playComputer();
    } else {
      playPerson();
    }
    draw();
    computerTurn = !computerTurn;
    ++turn;
  }
}

