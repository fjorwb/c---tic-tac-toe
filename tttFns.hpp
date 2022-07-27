
void draw(std::vector<char> board);

void instructions();

bool is_winner(std::vector<char> board);

// bool filled_up();
void take_turn(bool turn);

template <typename T>
T set_position(bool turn, T board)
{
  int set_position;
  char mark;

  turn == true ? mark = 'X' : mark = 'O';

  std::cout << "Choose number for your " << mark << "...";
  std::cin >> set_position;
  board[set_position - 1] = mark;
  return board;
}

bool change_player(bool turn);

template <typename T>
T update_board(T board)
{
  return board;
};

void draw();

void end_game(bool is_win, bool turn);