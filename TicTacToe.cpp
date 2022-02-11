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
char TicTacToe::NumToChar(int num) {
  switch (num) {
    case -1: return 'X';
    case 0: return ' ';
    case 1: return 'O';
    default: return 'E'; // E for error - this function should not get any other values
  }
}
void TicTacToe::DisplayBoard() const {
  std::cout << "  " << NumToChar(ul_) << " | " << NumToChar(um_) << " | " << NumToChar(ur_) << std::endl;
  std::cout << "  " << "---+---+---" << std::endl;
  std::cout << "  " << NumToChar(ml_) << " | " << NumToChar(mm_) << " | " << NumToChar(mr_) << std::endl;
  std::cout << "  " << "---+---+---" << std::endl;
  std::cout << "  " << NumToChar(ll_) << " | " << NumToChar(lm_) << " | " << NumToChar(lr_) << std::endl;
}

