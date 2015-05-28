#include<iostream>
#include<string>

struct Person
{
    std::string name;
    std::string address;
public:
    std::string GetName() const;
    std::string GetAddress() const;
};

std::string Person::GetName() const
{
    return name;
}

std::string Person::GetAddress() const
{
    return address;
}


std::istream &read(std::istream &is, Person &per)
{
    is >> per.name >> per.address;

    return is;
}

std::ostream &print(std::ostream &os, const Person &per)
{
    os << per.GetName() << " " << per.GetAddress();

    return os;
}
