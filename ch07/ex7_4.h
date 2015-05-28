#include<string>

class Person
{
private:
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
