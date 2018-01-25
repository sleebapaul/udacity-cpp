/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters -1  or guesses the target number to end 
**the program.
*/

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int guess = -1;
    int target = 55;
    std::cout << "Guess a number between 0 and 100: ";
    std::cin >> guess;
    std::cout << guess << "\n";
    while (guess!= -1)
    {
        if (guess > 55)
        {
            cout<<"Target is less than guess. Enter new guess: \n";
            std::cin >> guess;
            std::cout << guess << "\n";
        }
        else if (guess < 55)
        {
            cout<<"Target is greater than guess. Enter new guess: \n";
            std::cin >> guess;
            std::cout << guess << "\n";
        }
        else
        {
            cout<<"Correct Guess";
            break;
        }
    }
    return 0;
}
