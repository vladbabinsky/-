#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int userSum = 0;
    int compSum = 0;

    cout << "Welcome to the Dice Game" << endl;

    for (int round = 1; round <= 3; round++) {
        cout << "\nRound " << round << "" << endl;

        int userRoll1 = rand() % 6 + 1;
        int userRoll2 = rand() % 6 + 1;
        int userRoundSum = userRoll1 + userRoll2;
        userSum += userRoundSum;
        cout << "You rolled: " << userRoll1 << " and " << userRoll2
            << " (Round total: " << userRoundSum << ")" << endl;

        int compRoll1 = rand() % 6 + 1;
        int compRoll2 = rand() % 6 + 1;
        int compRoundSum = compRoll1 + compRoll2;
        compSum += compRoundSum;
        cout << "Computer rolled: " << compRoll1 << " and " << compRoll2
            << " (Round total: " << compRoundSum << ")" << endl;
    }

    cout << "\nFinal Scores:" << endl;
    cout << "Your total: " << userSum << endl;
    cout << "Computer's total: " << compSum << endl;

    if (userSum > compSum) {
        cout << "Congratulations, you win" << endl;
    }
    else if (userSum < compSum) {
        cout << "Sorry, the computer wins" << endl;
    }
    else {
        cout << "It's a tie" << endl;
    }

    return 0;
}
