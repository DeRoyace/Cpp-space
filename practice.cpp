#include<iostream>
#include<string> // includes the string library
using namespace std;

int main()
{
    int n;
    string s1="Hello world";
    string s2="Welcome to my CoDing HuB...";
    cout << "Enter a number : ";
    cin >> n;
    cout << "Your number is "<< n << "\n";
    cout << s1.append(" "+ s2) << "\n";
}