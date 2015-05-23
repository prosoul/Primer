#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

//a function that calculates val!.
int fact(int val)
{
    int value = 1;

    while(val > 1)
        value *= val--;

    return value;
}

//a function that counts how many time it is called.
size_t count_calls()
{
    static size_t ctr = 0;
    return ++ctr;
}

//a function to return the absolute of its argument
int abs_value(int val)
{
    if(val < 0)
        return abs(val);

    return val;
}

void print(void)
{
    cout << "this is a empty parameter list in a function" << endl;
}

//a function that returns 0 when it it first called
//and generates numbers in sequence each time when it is called
size_t sequence()
{
    static size_t callCount = 0;

    if(callCount > 0)
    {
        return rand() % 1000;
    }

    ++callCount;

    return 0;
}

//a function that pointer parameter
int reset(int *p)
{
    *p = 0;
    p = 0;

    return 0;
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

string::size_type findChar(const string &s, char c, string::size_type &occurs);

int main()
{
    int value = fact(5);
    cout << value << endl;

    print();

    for(size_t i = 0; i < 10; ++i)
        cout << sequence() << endl;

    cout << abs_value(-144) << endl;

    int val = 8;
    int *p = &val;

//    cout <<  p << endl;
//    reset(p);
//    cout << *p << endl;
//    cout << val << endl;
//    cout <<  p << endl;

    string str;
    char c;
    string::size_type occurs = 0;
    string::size_type ret = 0;

    cout << "input string and  char" << endl;
    while(cin >> str >> c)
    {
        ret = findChar(str,c,occurs);
        cout << ret <<" "<< occurs << endl;

        cout << "input string and  char" << endl;
    }

    return 0;
}

//using reference parameters to return additional information
string::size_type findChar(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;

    for(decltype(s.size()) i = 0; i != s.size(); ++i)
    {
        cout << s[i] << " ";
        if(s[i] == c)
        {
            if(ret == s.size())
                ret = i;
            ++occurs;
        }
    }

    return ret;
}
