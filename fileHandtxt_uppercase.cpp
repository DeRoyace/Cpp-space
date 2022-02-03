#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    FILE *in, *out;
    char c;

    in=fopen("infile.dat", "r");
    out= fopen("outfile.txt", "a");

    while((c=getc(in))!=EOF)
    {
        putc(toupper(c), out);
    }
    fclose(in);
    fclose(out);
    return 0;
}