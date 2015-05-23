#include<iostream>
using namespace std;

void swap(int *p, int *q);

int main()
{
    int i = 0,j = 0;
    cout << "please input tow numbers of int :" << endl;

    while(cin >> i >> j)
    {
        cout << "i = " << i << " j = " << j << " before swapping" << endl;
        swap(&i,&j);
        cout << "i = " << i << " j = " << j << " after swapping" << endl;

        cout << "please input tow numbers of int :" << endl;
    }

    return 0;
}

//swap the value of two ints
void swap(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}
