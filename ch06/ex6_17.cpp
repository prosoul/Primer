#include<iostream>
#include<cctype>

using namespace std;

bool hasCapitalLetter(const string &s)
{
    for(auto c : s)
    {
        if(isupper(c))
            return true;
    }

    return false;
}

void convertTolower(string &s)
{
    for(auto &c : s)
    {
        if(isupper(c))
            c = tolower(c);
    }
}

int main()
{
    string str = "Happy New DAY!";

    cout << hasCapitalLetter(str) << endl;

    convertTolower(str);
    cout << str << endl;

    return 0;
}
