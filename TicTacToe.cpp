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
 * turns the numerical representation of a square into a character to be displayed
 * @param num the numerical representation of the square to be converted
 * @return the character corresponding to the number
 */
char TicTacToe::NumToChar(int num) {
  switch (num) {
    case -1: return 'X';
    case 0: return ' ';
    case 1: return 'O';
    default: return 'E'; // E for error - this function should not get any other values
  }
}

/**
 * turns a character representation of a square into a character
 * @param choice the character representation of the square to be converted
 * @return the number corresponding to the character
 */
int TicTacToe::CharToNum(char choice) {
  switch (choice) {
    case 'X': return -1;
    case 'O': return 1;
    default: return 2; // this is an error
  }
}

/**
 * Prompts the player to enter the square they'd like to play on
 * @return a number 0-8 corresponding to the square they'd like to play on
 * where 0 is the upper left corner, 1 is upper middle, ... , 8 is the lower right corner
 */
int TicTacToe::GetPlayerChoice() {
  char choice;
  std::cout << "Where would you like to place your marker?" << std::endl;
  std::cout << "Q | W | E" << std::endl;
  std::cout << "--|---|--" << std::endl;
  std::cout << "A | S | D" << std::endl;
  std::cout << "--|---|--" << std::endl;
  std::cout << "Z | X | C" << std::endl;
  std::cin >> choice;

  // validate user input
  while (choice != 'Q' &&
      choice != 'W' &&
      choice != 'E' &&
      choice != 'A' &&
      choice != 'S' &&
      choice != 'D' &&
      choice != 'Z' &&
      choice != 'X'
      && choice != 'C') {
    std::cout << "Invalid choice. Please try again." << std::endl;
    std::cin >> choice;
  }

  switch (choice) {
    case 'Q': return 0;
    case 'W': return 1;
    case 'E': return 2;
    case 'A': return 3;
    case 'S': return 4;
    case 'D': return 5;
    case 'Z': return 6;
    case 'X': return 7;
    case 'C': return 8;
    default: return -1; // error
  }
}

/**
 * displays the current game board
 */
void TicTacToe::DisplayBoard() const {
  std::cout << "  " << NumToChar(ul_) << " | " << NumToChar(um_) << " | " << NumToChar(ur_) << std::endl;
  std::cout << " " << "---+---+---" << std::endl;
  std::cout << "  " << NumToChar(ml_) << " | " << NumToChar(mm_) << " | " << NumToChar(mr_) << std::endl;
  std::cout << " " << "---+---+---" << std::endl;
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
