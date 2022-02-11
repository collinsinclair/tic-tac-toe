#include "TicTacToe.h"

TicTacToe::TicTacToe() {
  CreateBoard();
}
/**
 * "Creates" the board by setting all nine square values to 0 (representing
 * empty) This could be done in a constructor, but this is the requirement so
 * instead the constructor just calls this function!
 */
void TicTacToe::CreateBoard() {
  ul_ = 0;
  um_ = 0;
  ur_ = 0;
  ml_ = 0;
  mm_ = 0;
  mr_ = 0;
  ll_ = 0;
  lm_ = 0;
  lr_ = 0;
}
