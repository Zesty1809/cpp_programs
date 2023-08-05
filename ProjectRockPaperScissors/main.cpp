#include <iostream>

// Constant variables
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

using namespace std;

char getComputerOption()
{
    srand(time(0));
    // Random number
    int num = rand() % 3 + 1;

    if (num == 1)
        return 'r';
    else if (num == 2)
        return 'p';
    else //number must be 3
        return 's';
}

char getUserOption()
{
    char c;
    cout << "Rock, Paper and Scissors Game!" << endl;
    cout << "Choose one of the following options" << endl;
    cout << "-----------------------------------" << endl;
    cout << "(r) for rock" << endl
         << "(p) for paper" << endl
         << "(s) for scissors" << endl;
    cin >> c;

    while (c != 'r' && c != 'p' && c != 's')
    {
        cout << "Please enter on of the following options only. " << endl;
        cout << "(r) for rock" << endl
             << "(p) for paper" << endl
             << "(s) for scissors" << endl;
        cin >> c;
    }

    return c;
}

void showSelectedOption(char option)
{
    if (option == 'r')
        cout << "Rock" << endl;
    if (option == 'p')
        cout << "Paper" << endl;
    if (option == 's')
        cout << "Scissors" << endl;
}

void chooseWinner(char uChoice, char cChoice)
{
    if (uChoice == ROCK && cChoice == PAPER)
    {
        cout << "Computer wins! Paper wraps Rock." << endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS)
    {
        cout << "Computer wins! Scissors cut paper." << endl;
    }
    else if (uChoice == SCISSORS && cChoice == ROCK)
    {
        cout << "Computer wins! Rock smashes scissors." << endl;
    }
    else if (uChoice == ROCK && cChoice == SCISSORS)
    {
        cout << "You win! Rock smashes scissors." << endl;
    }
    else if (uChoice == PAPER && cChoice == ROCK)
    {
        cout << "You win! Paper wraps Rock." << endl;
    }
    else if (uChoice == SCISSORS && cChoice == PAPER)
    {
        cout << "You win! Scissors cut paper." << endl;
    }
    else
    {
        cout << "Tie. Play again win the game." << endl;
    }
}

int main()
{
    // User's choice
    char uChoice;
    // Computer's choice
    char cChoice;

    uChoice = getUserOption();
    cout << "Your choice is : " << endl;
    showSelectedOption(uChoice);

    cout << "Computer's choice is : " << endl;
    cChoice = getComputerOption();
    showSelectedOption(cChoice);

    chooseWinner(uChoice, cChoice);

    return 0;
}