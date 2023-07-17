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
        while (1)
        {
            cout << "Enter Your Choice(r:Rock, p:Paper, s:scissors) : ";
            cin >> user_input;

            user_input = tolower(user_input);

            if (user_input == 'r')
            {
                user_pick = "rock";
                break;
            }
            else if (user_input == 'p')
            {
                user_pick = "paper";
                break;
            }
            else if (user_input == 's')
            {
                user_pick = "scissors";
                break;
            }
        }
        return user_pick;
    }

    string get_result(string user_pick, string computer_pick)
    {

        if (user_pick == computer_pick)
        {
            return "draw";
        }
        else if (user_pick == "paper" && computer_pick == "rock")
        {
            return "win";
        }
        else if (user_pick == "rock" && computer_pick == "scissors")
        {
            return "win";
        }
        else if (user_pick == "scissors" && computer_pick == "paper")
        {
            return "win";
        }
        else
        {
            return "lose";
        }
    }
};

int main()
{
    Game g1;
    while (1)
    {
        char play_again;
        string usr_pick = g1.get_user_pick();
        string comp_pick = g1.get_computer_pick();
        string result = g1.get_result(usr_pick, comp_pick);

        cout << "User Pick: " << usr_pick << endl;
        cout << "Computer Pick: " << comp_pick << endl;
        cout << "You " << result << endl;

        cout<<"Do you want to play again?(y/n): ";
        cin>>play_again;

        if(play_again != 'y'){
            break;
        }
    }

    return 0;
}