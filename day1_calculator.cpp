#include<iostream>
using namespace std;

int main() {
    char op;
    double num1;
    double num2;
    double result;

    cout << "----------CALCULATOR-----------\n";

    cout << "Enter choice (+,-,*,/,=): ";
    cin >> op;

    cout << "Enter values" << '\n';
    cin >> num1;
    cin >> num2;

    switch (op) {
        case '+':
        result = num1 + num2;
        cout << "result: " << result << '\n';
        break;
        case '-':
        result = num1 - num2;
        cout << "result: " << result << '\n';
        break; case '*':
        result = num1 * num2;
        cout << "result: " << result << '\n';
        break; case '/':
        result = num1 / num2;
        cout << "result: " << result << '\n';
        break;
        default:  
        cout << "INVALID" << '\n';
    }
}