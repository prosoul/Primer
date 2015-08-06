#include<iostream>

using namespace std;

class numbered{
	private:
		static int seq;
		
	public:
		
		//13.14
		numbered()
		{
			mysn = seq++;			
		}	
		
		//13.15
		numbered(const numbered &n)
		{
			mysn = n.mysn + 1;
		}
		
		int mysn;
};

int numbered::seq = 0;

//13.16
void f(const numbered &s)
{
	std::cout << s.mysn << std::endl;
}

int main()
{
	numbered a, b = a, c = b;
	f(a);
	f(b);
	f(c);
	
	return 0;
}