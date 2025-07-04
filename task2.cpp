#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter an operator(+,-,*,/): ";
    cin >> op;
    switch (op) {
    case '+':
        cout << "Answer: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Answer: " << num1 - num2 << endl;
        break;

    case '*':
        cout << "Answer: " << num1 * num2 << endl;
        break;

    case '/':
        if (num2 != 0)
            cout << "Answer: " << num1 / num2 << endl;
        else
            cout << "ERROR! Division by 0 not possible" << endl;
        break;
    default:
        cout << "Error! Invalid choice entered." << endl;
    }
    return 0;
}
