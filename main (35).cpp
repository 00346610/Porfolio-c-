#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool runAgain();
int rolldie();
char userResponse;

int main() {
    int totalWins = 0;
    int totalLosses = 0; 
    srand(time(0));

    do {
    int point = 0;
    int sum = 0;
    int r1, r2;

    cout << "Ready to roll? (y or n): ";
    cin >> userResponse;

    if (userResponse == 'n' || userResponse == 'N') {
    break;  }

    r1 = rolldie();
    r2 = rolldie();
    sum = r1 + r2;

    cout << "Die 1: " << r1 << endl;
    cout << "Die 2: " << r2 << endl;
    cout << "Total: " << sum << endl;

    if (sum == 7 || sum == 11) {
    cout << "You win!!" << endl;
        totalWins++;
    }else if (sum == 2 || sum == 3 || sum == 12) {
        cout << "Craps! You lose." << endl;
        totalLosses++; 
    } else {
            point = sum;
            cout << "The point is: " << point << endl;
        }
        
        
        cout << "Play again? (Y/N): "; 
        cin >> userResponse;


    while (point != 0) {
            r1 = rolldie();
            r2 = rolldie();
           sum = r1 + r2;

            cout << "die 1: " << r1 << endl;
            cout << "die 2: " << r2 << endl;
            cout << "Total: " << sum << endl;

    if (sum == point) {
                cout << "You win!" << endl;
                totalWins++;
                break; 
    } else if (sum == 7) {
                cout << "You lose!" << endl;
                totalLosses++; 
                break;
    } else {
                cout << "Roll again" << endl;
            }
        }

cout << "Total wins so far: " << totalWins << endl;
cout << "Total losses so far: " << totalLosses << endl; 
       
    } while (runAgain());

    return 0;
}

int rolldie() {
    return (1 + rand() % 6);
}

bool runAgain() {
    char response;
    cout << "Play again? (Y/N): ";
    cin >> response;
    return (response == 'Y' || response == 'y');
}