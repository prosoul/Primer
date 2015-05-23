#include<iostream>
using namespace std;

void print(const char *cp);
void print(const int *beg, const int *end);
void print(const int a[], size_t size);
void print(int (&arr)[6]);
int main()
{
    char a[] = "hello world";
    print(a);

    int b[] = {1,2,3,4,5,6};
    print(begin(b),end(b));

    size_t size = sizeof(b)/sizeof(b[0]);
    print(b,size);

    print(b);
    return 0;
}
//using a marker to specify the extent of array to managing array parameters.
void print(const char *cp)
{
    if(cp)
        while(*cp)
            cout << *cp++ ;

    cout << endl;
}

//using the Standard Library Conventions to managing array parameters.
void print(const int *beg, const int *end)
{
    while(beg != end)
        cout << *beg++ << " ";

    cout << endl;
}

//explicitly passing a size parameter to managing array parameters.
void print(const int a[], size_t size)
{
    for(size_t i = 0; i != size; ++i)
        cout << a[i] << " ";

    cout << endl;
}

//array reference parameter
void print(int (&arr)[6])
{
    for(auto elem : arr)
        cout << elem << " ";

    cout << endl;
}
