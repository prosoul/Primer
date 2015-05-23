#include<iostream>
using namespace std;

void reset(int &i)
{
    i = 15;
}

int main()
{
    int i = 10;
    cout << "Before calling function reset(),i = " << i << endl;

    reset(i);

    cout << "After calling function reset(),i = " << i << endl;

    return 0;
}
