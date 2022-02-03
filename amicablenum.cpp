#include <iostream>
using namespace std;

int sumofdivs(int x)  // function to return sum of proper divisors of the number
{
    int sum=0;
    for (int i = 1; i < x; i++)
    {
        if(x%i==0)
        sum+=i;
    }
    // cout << "\n" << sum << "\n";
    return sum;
}

int main()
{
    long n1,n2;
    cout << "\nEnter the 1st number : ";
    cin >> n1;
    cout << "Enter the 2nd number : ";
    cin >> n2;
    if(sumofdivs(n1) == n2 && sumofdivs(n2)==n1)
        cout << n1 << "," << n2 << " are Amicable pairs\n";
    else
        cout << "Not a an amicable pairs\n";
} // end of main