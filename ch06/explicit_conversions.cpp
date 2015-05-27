#include<iostream>
using namespace std;

int main()
{
    const int constant = 10;
    const int *const_p = &constant;

    int *modifier = const_cast<int *>(const_p);

    *modifier = 9;

    cout << constant  << " " << &constant <<  endl;
    cout << *const_p <<  " " <<  const_p << endl;
    cout << *modifier << " " << modifier << endl;

    return 0;
}
