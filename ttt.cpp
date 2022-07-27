#include <iostream>
#include <vector>
#include <stdlib.h>
#include "tttFns.hpp"

int main()
{
  instructions();

  std::vector<char> board = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  std::vector<char> board1;

  bool turn = true;
  bool is_win = false;
  int counter = 0;

  draw(board);

  while (is_win == false && counter < 9)
  {

    take_turn(turn);

    board1 = set_position(turn, board);

    turn = change_player(turn);

    board = update_board(board1);

    draw(board);

    is_win = is_winner(board);

    counter++;
  }
  end_game(is_win, turn);
}
