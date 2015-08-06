#include <iostream>

using namespace std;

class base
{
public:
    std::string name()
    {
        return basename;
    }

    virtual void print(std::ostream &os)
    {
        os << basename;
    }
private:
    std::string basename = "base\n";
};

class derived:public base
{
public:
    void print(std::ostream &os) override
    {
        base::print(os);
        os << " " << i << std::endl;
    }

private:
    int i = 1;
};

int main()
{
    base bobj;
    base *bp1 = &bobj;
    base &br1 = bobj;

    derived dobj;
    derived *bp2 = &dobj;
    derived &br2 = dobj;

    bobj.print(std::cout);

    dobj.print(std::cout);

    std::cout << bp1->name() << std::endl;
    std::cout << bp2->name() << std::endl;

    br1.print(std::cout);

    br2.print(std::cout);

    bp1->print(std::cout);
    bp2->print(std::cout);
    return 0;
}
