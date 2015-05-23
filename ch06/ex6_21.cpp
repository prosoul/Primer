#include<iostream>
using namespace std;

int getLarger(const int a, const int *p)
{
    /*
    if(a > *p)
        return a;
    else
        return *p;
    */

    return a > *p ? a : *p;
}

int main()
{
    int b = 20;
    int value = 0;

    value = getLarger(25,&b);
    cout << value << endl;

    return 0;
}
