#include <iostream>
using namespace std;

// Board-to handle the tic-tac-toe board and handle winning /draw logic
// Player-to handle the name of players and symbols they are using
// Game-to handle the game logic

class Board
{

public:
    string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

    void print_board()
    {
        cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
        cout << "------------" << endl;
        cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
        cout << "------------" << endl;
        cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
    }
};

class Player
{
public:
    string name;
    char type;

    void set_info(char type)
    {

        if (type == 'X' || type == 'x'){
            this->type = 'X';

            cout<<""
        }
    }
};

class Game
{
};

int main()
{
    Board b1;

    b1.print_board();

    return 0;
}
