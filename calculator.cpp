#include <iostream>
using namespace std;
void nums(int x, char op, int y) {
    switch (op) {
        case '+':
            cout << "The sum: " << x << " + " << y << " = " << x + y << endl;
            break;

        case '-':
            cout << "The subtraction: " << x << " - " << y << " = " << x - y << endl;
            break;

        case '*':
            cout << "The multiplication: " << x << " * " << y << " = " << x * y << endl;
            break;

        case '/':
            if (y == 0) {
                cout << "Invalid value: division by zero" << endl;
            } else {
                cout << "The division: " << x << " / " << y << " = " << (double)x / y << endl;
            }
            break;

        case '%':
            if (y == 0) {
                cout << "Invalid value: modulus by zero" << endl;
            } else {
                cout << "The modulus: " << x << " % " << y << " = " << x % y << endl;
            }
            break;

        default:
            cout << "Invalid operator" << endl;
    }
}
int main() {
    int x, y;
    char op;

    cout << "Enter calculation (example: 5 + 3): ";
    cin >> x >> op >> y;

    nums(x, op, y);

    return 0;
}
