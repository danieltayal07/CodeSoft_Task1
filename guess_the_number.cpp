#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>


using namespace std;

int main() {
    srand(time(0));
    int numbertoguess = rand() % 1000 + 1;
    int theguess;
    int totalattempts;

    cout << "Try Guessing a number from the range 1-1000!{HARD}" << endl;

    while (true) {
        cout << "Enter the number you guessed:";
        cin >> theguess;
        totalattempts++;

        int difference = abs(numbertoguess - theguess);

        if (theguess < numbertoguess) {
            if (difference > 100) {
                cout << "You're Way Behind the Number, Try Again." << endl;
            } else if (difference > 50) {
                cout << "Still Behind, Try Again" << endl;
            } else if (difference > 10) {
                cout << "You can see it just ahead of you, Try Again." << endl;
            } else {
                cout << "Very Close, But Still Behind" << endl;
            }
        } else if (theguess > numbertoguess) {
            if (difference > 100) {
                cout << "You are way ahead of the number, Try Again!" << endl;
            } else if (difference > 50) {
                cout << "Still Ahead, Try Again!" << endl;
            } else if (difference > 10) {
                cout << "Turn Around!! You'll See it very close behind you!" << endl;
            } else {
                cout << "Very Close, But Still Ahead" << endl;
            }
        } else {
            cout << "You guessed the number, The Number Was - " << numbertoguess << " | Attempts Taken Were: " << totalattempts << " attempts." << endl;
            break;
        }
    }
}
