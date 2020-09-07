#include <iostream>
#include <cmath>
using namespace std;


int main() {

    // Find the square root of 'n' entered by the user.
    cout << "press enter to start..." << endl << endl;
    cin.get();

    float n;

    cout << "Enter n: ";
    cin >> n;

    try {
        if (n < 0) {
            throw "The value of 'n' must be greater than or equal to 0. Please try again.";
        }

        float result = sqrt(n);
        cout << "Result: " << result << endl << endl;
    } catch (const char *msg) {
        cout << msg << endl << endl;
    }


    return 0;
}
