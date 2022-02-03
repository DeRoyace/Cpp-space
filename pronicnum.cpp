#include<iostream>
using namespace std;

int main()
{
    long num;
    int flag=0;
    cout << "\nEnter any positive number : ";
    cin >> num;
    for (int i = 1; i < (num/2)+1; i++)
    {
        if(i*(i+1)==num)
        {
            cout << i << " x " << i+1 << " = " << num << "\n";
            flag=1;
            break;
        }
    } // end of for loop

    if(flag==1)
    cout << num << " is a Pronic number\n";
    else
    cout << "Not a pronic number\n";    

} // end of main