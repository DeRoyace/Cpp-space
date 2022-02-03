#include<iostream>
using namespace std;
// #include<conio.h>
void print(char ch='*', int B=1)
{
    for(int i=0;i<B;i++)
    {
        cout << "\t" << ch;
    }
    cout << "\n";
}

int main()
{
    print();
    print('&',2);
    print('%',3);
    print('#',4);
    print('@',5);
    return 0;    
}