#include<iostream>
using namespace std;
int sod(int x) // recursive function to compute sum of digits of the number
{
    if(x<10)
    return x;
    else
    return x%10 + sod(x/10);
}

int main()
{
    int num;
    cout << "Enter any positive number : ";
    cin >> num;

    cout << "Sum of its digits = " << sod(num) << "\n";
    return 0;
} // end of main