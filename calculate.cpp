#include <iostream>
#include <cmath> // imports math functions
using namespace std;

void choice(int a, int b)
{
    char ch;
    cout << "\nEnter your operator: ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << "\nSummation is " << a + b << "\n";
        break;

    case '-':
        cout << a << " - " << b << " = " << a - b << "\n";
        break;

    case '*':
        cout << a << " x " << b << " = " << a * b << "\n\n";
        break;

    case '/':
        cout << "\nQuotient: " << a << " / " << b << " = " << a / b << "\n";
        break;

    case '%':
        cout << "remainder = " << a << " % " << b << " = " << a % b << "\n";
        break;

    case '^':
        cout << a << " ^ " << b << " = " << pow(a,b) << endl; 
        break;
        
    default:
        cout << "Invalid choice. Enter again...\n";
        choice(a, b);
        // break;
    }
} // end of choice()


int ask_user()
{
    char ask;
    cout << "Do you want to continue ? ( enter 'y' - YES or 'n' - NO ) \n";
    cin >> ask;
    if (ask == 'y' || ask == 'Y')
        return 1;
    else if (ask == 'n' || ask == 'N')
        exit(0);
    else
    {
        cout << "Invalid input\n";
        return ask_user();
    }
} // end of ask_user()

int main()
{
    int n1, n2;
    cout << "\nEnter 1st number : ";
    cin >> n1;
    cout << "Enter 2nd number : ";
    cin >> n2;
    cout << "Your numbers are : " << n1 << ", " << n2;
    // cout << "\nSmaller number is " << min(n1,n2) << "\n";
    choice(n1, n2);
    if (ask_user()==1)
        main();
    return 0;
} // end of main