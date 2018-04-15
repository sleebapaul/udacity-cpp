#include "TicTacToeClasses.cpp"
#include "TicTacToeFunctions.cpp"
#include <sstream>

using namespace std;

int main()
{
    User user1;
    User user2;
    TicTacToe Gameboard;

    string name_entry;
    int move_entry;
    int num_plays = 0;
    bool win_status = false;

    cout << "Let's Play TIC-TAC-TOE!!\n\n Here is your board :) \n \n Watch the positions\n\n";
    printBlankBoard();

    // Getting name of player 1

    cout << "\nEnter the name of player 1: ";
    getline(cin, name_entry);
    user1.setName(name_entry);
    cout << "\nEntry character of " << user1.getName() << " is `x`\n\n";

    // Getting name of player 2

    cout << "\nEnter the name of player 2: ";
    getline(cin, name_entry);
    user2.setName(name_entry);
    cout << "\nEntry character of " << user2.getName() << " is `o`\n\n";

    // Game starts

    while (num_plays < 8 && win_status == false)
    {

        cout << "\n"
             << user1.getName() << " your move.\n";
        cout << "\nEnter your x position of move: ";
        cin >> move_entry;

        // If an invalid entry for x for player 1, repeat the entry process

        while (invalidMoveEntry(move_entry))
        {
            cout << "\nInvalid position\n";
            cout << "\nEnter your position of move: ";
            cin >> move_entry;
        }

        while (Gameboard.alreadyTakenPosition(move_entry))
        {
            cout << "\nThat position is already taken, mate :/\n";
            cout << "\n Re-enter the position: ";
            cin >> move_entry;
        }

        Gameboard.setBoardValue(move_entry, 'x');
        Gameboard.printCurrentBoard();

        if (Gameboard.checkRowWin('x') | Gameboard.checkColumnWin('x') | Gameboard.checkDiagonelWin('x'))
        {
            win_status = true;
            cout << user1.getName() << " wins!";
        }

        if (!win_status)
        {

            cout << "\n"
                 << user2.getName() << " your move.\n";
            cout << "\nEnter your position of move: ";
            cin >> move_entry;

            while (invalidMoveEntry(move_entry))
            {
                cout << "\nInvalid position\n";
                cout << "\nEnter your position of move: ";
                cin >> move_entry;
            }

            while (Gameboard.alreadyTakenPosition(move_entry))
            {
                cout << "\nThat position is already taken, mate :/\n";
                cout << "\n Re-enter the position: ";
                cin >> move_entry;
            }

            Gameboard.setBoardValue(move_entry, 'o');

            Gameboard.printCurrentBoard();

            if (Gameboard.checkRowWin('o') | Gameboard.checkColumnWin('o') | Gameboard.checkDiagonelWin('o'))
            {
                win_status = true;
                cout << user1.getName() << " wins!";
            }
        }
        num_plays++;
    }
    cout<<"\nIt is a tie. Congrats "<<user1.getName()<<" and "<<user2.getName();
    return 0;
}
