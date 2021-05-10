///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////OLEG SAVELEV/////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////C++//////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*============================================================
|
| File Name: Q9.cpp
| Purpose: To play a game to guess a number. (OOP Assignment #1 Q-09).
| Documentation: This program is a guessing game in which two
|   players attempt to guess a number. The objects represent 
|   either a human player or a computer player.
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-10-31         Oleg Savelev          created
|
|============================================================*/

////////////////////////////////////////////////////////////////////////////////////////////////////
//#region   PRE-PROCESSOR DIRECTIVES

#include <iostream> // Pre-processor Directives:
#include <iomanip>
#include<cstdlib>

class Player // Player class from the task
{
    public:
        Player()    // Constructor
        {
        }
        
        virtual int getGuess()  // getGuess() function from the task.
        {
            return 0;
        }
};
class HumanPlayer:public Player // HumanPlayer sub-class from the task, derived from Player.
{
    public:
        HumanPlayer()    // Constructor
        {
        }
        virtual int getGuess()  // getGuess() function from the task.
        {
            int guess = 0;
            std::cin >> guess;
            return guess;
        }
};
class ComputerPlayer:public Player // ComputerPlayer sub-class from the task, derived from Player.
{
    public:
        ComputerPlayer()    // Constructor
        {
        }
        
        virtual int getGuess()  // getGuess() function from the task.
        {
            srand(time(NULL));
            return rand()%100;
        }
};

//#endregion
////////////////////////////////////////////////////////////////////////////////////////////////////

//#region   FUNCTIONS

bool checkForWin(int guess, int answer); // Function prototype
void play(Player & player1, Player & player2); // Function prototype from the task

bool checkForWin(int guess, int answer)   // Function from the task
{
    std::cout << "Your guess attempt is " << guess << ".\n";

    if (answer == guess)
    {
        std::cout << "You're right! You win!" << std::endl;
        return true;
    }

    else if (answer < guess)
    {
        std::cout << "Your guess " << guess << " is too high." << std::endl;
        std::cout << std::endl; // Brake a line
    }

    else
    {
        std::cout << "Your guess " << guess << " is too low." << std::endl;
        std::cout << std::endl; // Brake a line
    }

    return false;
}

void play(Player & player1, Player & player2)   // Function from the task.
{
    int answer = 0, guess = 0;

    answer = rand()%100;
    bool win = false;
    while (!win)
    {
        std::cout << "Player 1's turn to guess. Please enter your guessed number (1-100)." << std::endl;
        guess = player1.getGuess();
        win = checkForWin(guess, answer);

        if (win)
            return;

        std::cout << "Player 2's turn to guess. Please enter your guessed number (1-100)." << std::endl;
        guess = player2.getGuess();
        win = checkForWin(guess, answer);
    }
}

//#endregion

////////////////////////////////////////////////////////////////////////////////////////////////////

//#region   MAIN

int main()    // Don't return anything if void main() is specified.
{
    printf("\e[1;1H\e[2J");     // It clears the screen. No special library is required.
    // write(0,"\e[1;1H\e[2J",12); // It can also clear the creen. No special library is required.
    
    std::cout << "-----------------Game Display--------------------\n"<< std::endl; // The program starts below the dashed line.
    
    srand(1);

    HumanPlayer humanPlayer1; // Creates 1st object of the HumanPlayer class.
    HumanPlayer humanPlayer2; // Creates 2nd object of the HumanPlayer class.
    ComputerPlayer compPlayer1; // Creates 1st object of the ComputerPlayer class.
    ComputerPlayer compPlayer2; // Creates 2nd object of the ComputerPlayer class 

    std::cout << "You're playing 'human vs human' mode.\n\n"; // Human vs. human game.
    play(humanPlayer1, humanPlayer2);

    std::cout << "You're playing 'computer vs computer' mode.\n\n";  // Human vs. computer game
    play(humanPlayer1, compPlayer1);

    std::cout << "You're playing 'computer vs human' mode.\n\n";  // Computer vs. computer game
    play(compPlayer1, compPlayer2);

    std::cout << std::endl; // Brake a line
    std::cout << "--------------End of Game-----------------\n"<< std::endl; // The program ends above the dashed line.
}

//#endregion

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////OLEG SAVELEV/////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////C++//////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
