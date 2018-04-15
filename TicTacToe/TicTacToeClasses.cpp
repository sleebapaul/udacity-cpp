#include <iostream>
using namespace std;

class TicTacToe
{
    char board[16];

  public:
    TicTacToe();
    void setBoardValue(int position, char entry);
    char getBoardValue(int position);
    bool alreadyTakenPosition(int position);
    bool checkRowWin(char entry);
    bool checkColumnWin(char entry);
    bool checkDiagonelWin(char entry);
    void printCurrentBoard();
};

TicTacToe::TicTacToe()
{
    for (int i = 0; i < 16; i++)
    {
        board[i] = '_';
    }
}

void TicTacToe::setBoardValue(int position, char entry)
{
    board[position] = entry;
}

char TicTacToe::getBoardValue(int position)
{
    return board[position];
}

bool TicTacToe::alreadyTakenPosition(int position)
{
    if (board[position] == '_')
    {
        return true;
    }
    return false;
}

bool TicTacToe::checkRowWin(char a)
{

    for (int i = 0; i < 16; i += 4)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (board[j + i] == a)
            {
                count++;
            }
        }
        if (count == 4)
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::checkColumnWin(char a)
{

    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        for (int j = i; j < 16; j++)
        {
            if (board[i + j] == a)
            {
                count++;
            }
        }
        if (count == 4)
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::checkDiagonelWin(char a)
{
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < 16; i += 5)
    {

        if (board[i] == a)
        {
            count1++;
        }
    }
    if (count1 == 4)
    {
        return true;
    }
    for (int i = 3; i < 15; i += 3)
    {

        if (board[i] == a)
        {
            count2++;
        }
    }
    if (count2 == 4)
    {
        return true;
    }

    return false;
}

void TicTacToe::printCurrentBoard()
{
    //print board, with numbered squares
    cout << "\n\n";
    for (int i = 0; i < 16; i++)
    {
        cout << "| " << board[i]<<" ";
        if (i % 4 == 3)
        {
            cout << " |\n";
        }
    }
    cout << "\n\n";
}

class User
{
    string name;
    char input;

  public:
    User();
    void setName(string nameIn);
    string getName();
    char getInput();
};

User::User()
{
    name = "Unknown";
}

void User::setName(string nameIn)
{
    name = nameIn;
}

string User::getName()
{
    return name;
}
