#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    string options[3] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;

    // Seed for random number generator
    srand(time(0));

    cout << "Welcome to Rock-Paper-Scissors Game!" << endl;
    cout << "Enter your choice:" << endl;
    cout << "0 for Rock\n1 for Paper\n2 for Scissors" << endl;
    cout << "Your choice: ";
    cin >> userChoice;

    // Generate computer's choice
    computerChoice = rand() % 3;

    cout << "You chose: " << options[userChoice] << endl;
    cout << "Computer chose: " << options[computerChoice] << endl;

    // Decide the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win! " << endl;
    } else {
        cout << "Computer wins! " << endl;
    }

    return 0;
}
