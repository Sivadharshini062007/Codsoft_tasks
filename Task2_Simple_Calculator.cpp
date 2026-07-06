#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    int choice;

    cout << "============================" << endl;
    cout << "      SIMPLE CALCULATOR" << endl;
    cout << "============================" << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Result = " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Result = " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Result = " << num1 * num2 << endl;
            break;

        case 4:
            if(num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Division by zero is not allowed!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}
