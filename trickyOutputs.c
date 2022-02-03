#include<stdio.h>

int main()
{
    int a=22,b=33,c=44;

    //Code1:
    if(a=b>c)
    {
        a++;
        c++;
    }
    b++;

    // //code2:
    // if(a=b)
    //     c++;

    printf("a= %d ,  b= %d , c= %d\n",a,b,c);
    return 0;
}