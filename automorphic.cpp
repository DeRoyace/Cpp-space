#include <iostream>
using namespace std;

int isAuto(long x, long i)  // recursive function to check whether the number is automorphic or not.
{
    if (x == (x * x) % i)
        return 1;
    else if (i > x * x)
        return 0;
    else
        return isAuto(x, i * 10);
}

int main()
{
    long num;
    cout << "\nEnter any positive number : ";
    cin >> num;
    cout << "Square of the number is : " << num*num << "\n";
    if (isAuto(num, 10) == 1)
        cout << num << " is an Automorphic number\n";
    else
        cout << "Not a an automorphic number\n";
} // end of main