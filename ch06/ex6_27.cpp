#include<iostream>
using namespace std;

int sum(initializer_list<int> lst);

int main()
{
    initializer_list<int> lst = {1,2,3,4,5,6,7,8};
    int value = 0;

    value =sum(lst);
    cout << value << endl;
    return 0;
}

int sum(initializer_list<int> lst)
{
    int sum = 0;

//    for(auto beg = lst.begin(); beg != lst.end(); ++beg)
//        sum += *beg;

    for(const auto elem : lst)
        sum += elem;

    return sum;
}
