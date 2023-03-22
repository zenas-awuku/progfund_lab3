#include <iostream>

using namespace std;

void calculate(double, double, char);

int main() {
    int operand1, operand2;
    char op;

    cout << "Please input 2 operands: ";
    cin >> operand1 >> operand2;

    cout << "Please input an operator: ";
    cin >> op;

    calculate(operand1, operand2, op);
}

void calculate(double operand1, double operand2, char op) {
    switch (op)
    {
    case '+':
        cout << "Adding " << operand1 << " and " << operand2 << " = " << operand1 + operand2 << endl;
        break;
    case '-':
        cout << "Subtracting " << operand2 << " from " << operand1 << " = " << operand1 - operand2 << endl;
        break;
    case '/':
        if(operand2 == 0) cout << "Denominator can not be zero" << endl;
        else cout << "Dividing " << operand1 << " by " << operand2 << " = " << operand1 / operand2 << endl;
        break;
    case '*':
        cout << "Multiplying " << operand1 << " and " << operand2 << " = " << operand1 * operand2 << endl;
        break;
    default:
        break;
    }
}