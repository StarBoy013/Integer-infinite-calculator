#include<iostream>
using namespace std; 

int main()
{
    int a;
    char operator1;
    cout << "Enter how many number calculation you want : ";
    cin >> a;
    if (a <= 1)
    {
        cout << "Invalid number of inputs. Minimum two required.";
        return 0;
    }
    cout << "Enter which arthemetic operation you want to do : ";
    cin >> operator1;

    double result;
    if (operator1 == '*' || operator1 == '/' || operator1 == '+' || operator1 == '-')
    {
        cout << "Enter base number: ";
        cin >> result;
        double b;
        switch (operator1)
        {
        case '+': 
            for (int i = 0; i < a - 1; i++) {
                cout << "Enter number you want to add " << result << " in: "; 
                cin >> b; 
                result = result + b;
            }    
            break;
        case '-':
            for (int i = 0; i < a - 1; i++) {
                cout << "Enter number you want to subtract " << result << " in: "; 
                cin >> b;
                result = result - b;
            }
            break;

        case '*':
            for (int i = 0; i < a - 1; i++) {
                cout << "Enter number you want to multiply " << result << " with: ";
                cin >> b;
                result = result * b;
            }
            break;

        case '/':
            for (int i = 0; i < a - 1; i++) {
                cout << "Enter number you want to divide " << result << " with: ";
                cin >> b;
                if (b == 0) {
                    cout << "Division by zero not supported";
                    return 0;
                }
                result = result / b;
            }

        default:
            cout << "Invalid operator used";
            return 0;
        }
    }
    cout << result;
    return 0; 
}