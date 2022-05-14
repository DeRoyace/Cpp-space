#include<iostream>
using namespace std;

int main()
{
    int n,i;
    char c;
    cout << "\nEnter numbers of ASCIIs to be print: ";
    cin >> n;

    cout << "\nASCII values and their corresponding characters are: \n";
    for(i=0;i<=n;i++)
    {
        c = (char)i;
        cout << i << " = "<< c << endl;
    }
    return 0;
}
