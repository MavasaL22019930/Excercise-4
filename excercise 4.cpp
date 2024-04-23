#include <iostream>
using namespace std;


int main() {
    char choice;
    int num1, num2;
    int result;
    float fresult;

    do {
        cout << "MENU\n"
             << "1. Add\n"
             << "2. Subtract\n"
             << "3. Multiply\n"
             << "4. Divide\n"
             << "5. Modulus\n"
             << "Enter your choice (1-5): ";
        int option;
        cin >> option;

        cout << "Enter integer number 1: ";
        cin >> num1;
        cout << "Enter integer number 2: ";
        cin >> num2;

        switch(option) {
            case 1:
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "The second integer is zero, divide by zero" << endl;
                } else {
                    fresult = divide(num1, num2);
                    cout << "Result: " << fresult << endl;
                }
                break;
            case 5:
                result = modulus(num1, num2);
                cout << "Result: " << result << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Press y or Y to continue: ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}


int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

float divide(int num1, int num2) {
    return static_cast<float>(num1) / num2;
}

int modulus(int num1, int num2) {
    return num1 % num2;
}