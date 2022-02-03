// ## if a variable is declared within a statement block ( i.e. {...} ), as soon as the control exists that block, the variable will cease to exist. Such a variable is also knowns a local variable is said to hava a block scope. ## 

#include <iostream>
using namespace std;

int main()
{
    int x = 10, i = 0;
    while (i < 3)
    {
        int x = i;
        cout << "\nValue of x inside while loop = " << x;
        i++;
    }
    cout << "\nValue of x outside while loop = " << x << endl;
    return 0;
}