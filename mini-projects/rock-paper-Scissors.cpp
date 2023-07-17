#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Game
{
private:
    string user_pick;
    string computer_pick;
    string result;

public:
    string get_computer_pick()
    {

        srand(time(NULL));

        int random_number = (rand() % 3) + 1;

        switch (random_number)
        {
        case 1:
            computer_pick = "rock";
            break;
        case 2:
            computer_pick = "paper";
            break;
        case 3:
            computer_pick = "scissors";
            break;

        default:
            break;
        }

        return computer_pick;
    }

    string get_user_pick()
    {

        char user_input;

        cout << "Enter Your Choice(r:Rock, p:Paper, s:scissors)";
        cin >> user_input;

        if(user_input =='r'){
            user_pick = "rock";
        }
        else if(user_input == 'p'){
            user_pick = "paper";
        }
        else if(user_input == 's'){
            user_pick = "scissors";
        }

        return user_pick;
    }
};