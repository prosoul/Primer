#include<iostream>
using namespace std;

class Student{
public:
	Student()
	{
		std::cout << "constructor is calling ....." << std::endl;
		name = "your name";
	}
	
	Student(const Student &s)
	{
		name = s.name;
		std::cout << "copy constructor is calling...." << std::endl;
	}
	
	Student& operator=(const Student &rhs)
	{
		name = rhs.name;
		std::cout << "assigment constructor is calling...." << std::endl;
		
		return *this;
	}
private:
	std::string name;	
};

int main()
{
	Student stu1 = Student();
	Student stu2(stu1);
	
	return 0;
}