#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int num, denom;
    cout << "Enter num: ";
    cin >> num;
    cout << "Enter denom: ";
    cin >> denom;

    try {
        if (denom == 0)
            throw runtime_error("Division by zero error");

        int ans = num / denom;
        cout << "Result: " << ans << endl;
    }
    catch (const runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }
}
