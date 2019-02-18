/**
 * Tic-Tac-toe game
 *
 * Missing functionality, TODO
 *
 * 1. When computer plays first, it should choose middle or corner
 * 2. playPerson() should ask for valid input from user
 *      - Check input was a number, using cin.good()
 *      - Use cin.clear(); cin.ignore(10000, '\n'); to reset input stream
 * 3. Game should finish if 3 in a row for X or O and print "X has won"
 * 4. Clever computer: if there is a location that will make 3-in-a-row,
 * computer should take it
 * 5: Clever computer: if there is no location to make a 3-in-a-row
 * for the computer, computer should see if there is a 3-in-a-row for person.
 * If there is, computer should block it
 * 6. Computer does not always get to start, coin toss instead
 * 7. (Hard) Very clever computer: If there is no 3-in-a-row to win, and no blocking
 * move, computer should look for a move that will make 2 set of 2-in-a-row
 * which will guarantee a win in the next turn. For example, in the board below,
 * computer should play 'X' at location 0
 *   |   | O
 *   |   |
 * X | O | X
 *
 */

#ifndef TICTACTOE_TICTACTOE_H
#define TICTACTOE_TICTACTOE_H

#include <iostream>

class TicTacToe {

 public:
  // constructor
  TicTacToe();

  // play the full game
  void startGame();

  // computer makes a random play
  void playComputer();

  // person makes a random play
  void playPerson();

  // clear the board
  void clear();

  // draw the board
  void draw() const;

 private:
  // board has 9 spaces
  char board[9];

  // true if computer's turn
  bool computerTurn;

  // empty space on board
  static const char EMPTY = ' ';

  // X on board
  static const char XSYM = 'X';

  // O on board
  static const char OSYM = 'O';
};

#endif // TICTACTOE_TICTACTOE_H
