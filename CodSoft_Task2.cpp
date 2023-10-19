#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //Calculator functionality
    double num1;
    double num2;
    char op;
    bool choice;

    cout << "Enter 1st number:";
    cin >> num1;

    cout << "Enter 2nd number:";
    cin >> num2;

    cout << "Enter Operator:";
    cin >> op;

    // Conditions to check the operator
    if (op == '+')
        cout << "Result:" << num1 + num2;
    else if (op == '-')
        cout << "Result:" << num1 - num2;
    else if (op == '*')
        cout << "Result:" << num1 * num2;
    else if (op == '/')
        cout << "Result:" << num1 / num2;
    else
        cout << "Invalid Operator";

    cout << endl;

    // Loop to perform any other operation
    do
    {
        cout << "\nEnter 1 to perform any other operation and 0 to Quit:";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thanks for using my calculator\n";
        case 1:
            cout << "Enter 2nd number:";
            cin >> num2;

            cout << "Enter Operator:";
            cin >> op;

            // Conditions to check the operator
            if (op == '+')
                cout << "Result:" << num1 + num2;
            else if (op == '-')
                cout << "Result:" << num1 - num2;
            else if (op == '*')
                cout << "Result:" << num1 * num2;
            else if (op == '/')
                cout << "Result:" << num1 / num2;
            else
                cout << "Invalid Operator";
        }
    } while (choice);

    cout << endl;
    return 0;
}

// Thank You:)