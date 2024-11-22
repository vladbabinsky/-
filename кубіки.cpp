#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int userSum = 0, compSum = 0;

    cout << "Dice Game" << endl;

    for (int round = 1; round <= 3; round++) {
        cout << "\nRound " << round << ":" << endl;

        int userRoll1 = rand() % 6 + 1;
        int userRoll2 = rand() % 6 + 1;
        userSum += userRoll1 + userRoll2;
        cout << "You: " << userRoll1 << " + " << userRoll2 
             << " = " << userRoll1 + userRoll2 << endl;

        int compRoll1 = rand() % 6 + 1;
        int compRoll2 = rand() % 6 + 1;
        compSum += compRoll1 + compRoll2;
        cout << "Computer: " << compRoll1 << " + " << compRoll2 
             << " = " << compRoll1 + compRoll2 << endl;
    }

    cout << "\nFinal Score: You = " << userSum 
         << ", Computer = " << compSum << endl;

    if (userSum > compSum)
        cout << "You win" << endl;
    else if (userSum < compSum)
        cout << "Computer wins" << endl;
    else
        cout << "It's a tie" << endl;
}
