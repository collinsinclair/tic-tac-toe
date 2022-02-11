#include <vector>
#include <iostream>

#ifndef TIC_TAC_TOE__TICTACTOE_H_
#define TIC_TAC_TOE__TICTACTOE_H_

class TicTacToe {
 public:
  TicTacToe();
  void CreateBoard();
  static char NumToChar(int num);
  static int CharToNum(char choice);
  static int GetPlayerChoice();
  void DisplayBoard() const;
  void PlaceMarker(int, int);
 private:
  /* these nine data members represent the nine squares on a TTT board
   * u = upper, m = middle, l = lower/left, r = right
   * the values these fields hold are ints, where 0 = empty, -1 = X, and 1 = O
   * they could be easily initialized to 0 here, but we must have CreateBoard()
   */
  int ul_{}, um_{}, ur_{},
      ml_{}, mm_{}, mr_{},
      ll_{}, lm_{}, lr_{};
};

#endif //TIC_TAC_TOE__TICTACTOE_H_
