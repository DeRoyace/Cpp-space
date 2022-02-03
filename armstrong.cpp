#include<iostream>
#include<math.h>
using namespace std;

int sumcubedigits(int x, int p)
{
    if(x<10)
    return pow(x,p);
    else
    return pow(x%10,p) + sumcubedigits(x/10,p);
}

int main()
{
    int n,num,pow=0;
    cout << "\nEnter any number: ";
    cin >> n;
    num=n;
    while(num>0)
    {
        num/=10;
        pow++;
    }
    if(n==sumcubedigits(n,pow))
        cout << "Armstrong number\n";
    else
        cout << "NOT an armstrong number\n";
    return 0;
}
