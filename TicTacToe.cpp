#include "TicTacToe.h"
#include <iostream>

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

/**
 * Converts stored integer values to what the players should see displayed.
 * 
 * @param integer for representing X,O, or empty
 * @return X,O, or an empty character
 */
char IntToSquare(int x){
  char square = ' ';
  switch(x){
    case -1: {
      square = 'X';
      break;
    }
    case 0 : {
      square = ' ';
      break;
    }
    case 1 : {
      square = 'O';
      break;
    }
  }
  return square;
}

/**
 * Displays the board to the user
 */
void TicTacToe::DisplayBoard() {
  std::cout << IntToSquare(ul_) << " | " << IntToSquare(um_) << " | " << IntToSquare(ur_) << std::endl;
  std::cout << std::endl;
  std::cout << IntToSquare(ml_) << " | " << IntToSquare(mm_) << " | " << IntToSquare(mr_) << std::endl;
  std::cout << std::endl;
  std::cout << IntToSquare(ll_) << " | " << IntToSquare(lm_) << " | " << IntToSquare(lr_) << std::endl;
}
