#include<iostream>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int value;

    int (*f)(int a,int b);
    typedef int (*fp)(int a, int b);

    f = max;
    fp fa = max;

    value = (*f)(8,10);
    cout << value << endl;

    value = fa(20,30);
    cout << value << endl;

    return 0;
}
