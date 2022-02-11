/**
Authors: Brian Reagan and Collin Sinclair
Programming Exercise 4
This is a simple tic-tac-toe game that 2 player's
can run on a terminal.
Just takes the path to the main file to run
*/
#include "TicTacToe.h"

int main() {
  TicTacToe g; // instantiate a TTT object (g is short for game)
  g.DisplayBoard(); // test DispayBoard() method

  bool player = false; // boolean to switch back and forth between players
  // player 1 = false ; player 2 = true
  int input;

  for (int turn = 1 ; turn <= 9 ; turn++){ // run for 9 turns
    input = g.GetPlayerChoice();

    if(!player){
      // player 1
      g.PlaceMarker(input , -1);
    } else {
      // player 2
      g.PlaceMarker(input , 1);
    }
    player = !player;
    g.DisplayBoard();
  }
}
