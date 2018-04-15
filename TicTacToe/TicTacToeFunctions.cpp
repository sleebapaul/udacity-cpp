#include <iostream>

using namespace std;

bool invalidMoveEntry(int move_entry);

void printBlankBoard();


bool invalidMoveEntry(int move_entry)
{
    if (move_entry >= 0 && move_entry < 16)
    {
        return false;
    }
    return true;
}

void printBlankBoard()
{
    //print a blank board, with numbered squares
    for (int i = 0; i < 16; i++)
    {
        std::cout << "| " << i;
        if (i <= 9)
            cout << " ";
        if (i % 4 == 3)
        {
            std::cout << " |\n";
        }
    }
    cout << "\n\n\n";
}