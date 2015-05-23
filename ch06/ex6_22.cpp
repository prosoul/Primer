#include<iostream>
using namespace std;

//swap two int pointers.
void swap(int* &p, int* &q)
{
    int *tmp;
    tmp = p;
    p = q;
    q = tmp;
}

int main()
{
    int a = 0, b = 0;
    int *p = &a, *q = &b;
    while(cin >> a >> b)
    {
        p = &a;
        q = &b;

        swap(p,q);

        cout << "*p = " << *p << " *q = " << *q << endl;
    }

    return 0;
}
