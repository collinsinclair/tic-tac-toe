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

/**
 * Takes a input location and player integer and updates the value of that
 * square with the player's integer.
 * 
 * @param grid location (int)
 * @param player integer 
 */
void TicTacToe::PlaceMarker(int loc , int player){
  
  switch(loc){
    case 0:{
      ul_ = player;
      break;
    }
    case 1:{
      um_ = player;
      break;
    }
    case 2:{
      ur_ = player;
      break;
    }
    case 3:{
      ml_ = player;
      break;
    }
    case 4:{
      mm_ = player;
      break;
    }
    case 5:{
      mr_ = player;
      break;
    }
    case 6:{
      ll_ = player;
      break;
    }
    case 7:{
      lm_ = player;
      break;
    }
    case 8:{
      lr_ = player;
      break;
    }
    default:{
      std::cout << "Incorrect location parameter" << std::endl;
    }
  }
}