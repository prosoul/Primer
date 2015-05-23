#include<iostream>
using namespace std;

void swap(int &i, int &j)
{
    int tmp = i;
    i = j;
    j = tmp;
}

int main()
{
    int i = 0,j = 0;

    cout << "please input two numbers of int" << endl;
    while(cin >> i >> j)
    {
        cout << "Before calling swap(),i = " << i << " j = " << j << endl;
        swap(i,j);
        cout << "After calling swap(),i = " << i << " j = " << j << endl;

        cout << "please input two numbers of int" << endl;
    }

    return 0;
}
