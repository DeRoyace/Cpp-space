#include<iostream>
using namespace std;

int main()
{
    int arr[10],brr[10],i;
    cout << "\nEnter array elements: \n";
    for(i=0;i<10;i++)
    {
        cin >> arr[i];
    }
    cout << "\nReversed Array elemets: \n";
    for(i=0;i<10;i++)
    {
        brr[i]=arr[9-i];
        cout << brr[i] << ", ";
    }
    cout << "\n";
    return 0;
}