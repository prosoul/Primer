#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
    if(beg != end)
    {
        cout << *beg << " ";
        print(++beg,end);
    }
}

void print(vector<int> vec,unsigned index)
{
    unsigned sz = vec.size();

    if(!vec.empty() && index < sz)
    {
        cout << vec[index] << " ";
        print(vec,index + 1);
    }

}

int main()
{
    vector<int> vec;

    for(int i = 0; i != 10; ++i)
        vec.push_back(i);

    print(vec.begin(),vec.end());
    cout << endl;

    print(vec,0);
    cout << endl;

    return 0;
}
