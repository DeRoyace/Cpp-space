#include <iostream>
#include <cstdarg>
#include <string>
// #include<stdio.h>

using namespace std;
void func(int i, ...)
{
    va_list start;
    va_start(start, i);

    string st = va_arg(start, char*); //accessing the second argument
    double d = va_arg(start, double);  //accessing the third argument
    int ii = va_arg(start, int);       //Accessing the fourth argument
    char c = va_arg(start, int);       //the fifth argument type is accepted as int type

    cout << st << d << ii << c << endl;

    va_end(start);
}

int main()
{
    func(1, "Hello" , 34.567, 23, 'B' );

    cin.get();
    return 0;
}