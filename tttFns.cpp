#include <iostream>
#include <vector>
#include <string>
#include "tttFns.hpp"

void instructions()
{
  system("CLS");
  std::cout << "Welcome to Tic Tac Toe!\n";
  std::cout << "Tic-Tac-Toe is a paper-and-pencil game for \ntwo players, X and O, who take turns marking \nthe spaces in a 3x3 grid. The player who succeeds \nin placing three of their marks in a horizontal, \nvertical or diagonal row wins the game.";
  std::cout << "\n\n";
  std::cout << "Player 1) ✖\n";
  std::cout << "Player 2) ⊙\n\n";
}

bool is_winner(std::vector<char> board)
{
  if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X')
  {
    return true;
  }
  else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X')
  {
    return true;
  }
  else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X')
  {
    return true;
  }
  else if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X')
  {
    return true;
  }
  else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X')
  {
    return true;
  }
  else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X')
  {
    return true;
  }
  else if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X')
  {
    return true;
  }
  else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X')
  {
    return true;
  }

  if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O')
  {
    return true;
  }
  else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O')
  {
    return true;
  }
  else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O')
  {
    return true;
  }
  else if (board[0] == 'O' && board[3] == 'O' && board[6] == 'O')
  {
    return true;
  }
  else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O')
  {
    return true;
  }
  else if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O')
  {
    return true;
  }
  else if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O')
  {
    return true;
  }
  else if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O')
  {
    return true;
  }
  return false;
}

void draw(std::vector<char> board)
{
  std::cout << "     |     |      \n";
  std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
  std::cout << "     |     |      \n";
  std::cout << "\n";
}

void take_turn(bool turn)
{
  if (turn == true)
  {
    std::cout << "Player 1's turn: ";
  }
  else
  {
    std::cout << "Player 2's turn: ";
  }
}

bool change_player(bool turn)
{
  turn == true ? turn = false : turn = true;
  return turn;
}

void end_game(bool is_win, bool turn)
{
  if (is_win == true)
  {
    std::cout << "Player " << (turn == false ? '1' : '2') << " wins!\n";
  }
  else
  {
    std::cout << "It's a tie!\n";
  }

  std::cout << "Game over!\n";
}