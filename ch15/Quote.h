#include<string>
using namespace std;

class Quote
{
public:
    Quote() = default;
    Quote(const std::string &book,double sales_price):bookNo(book),price(sales_price){}
    std::string isbn() const
    {
        return bookNo;
    }

    virtual double net_price(std::size_t n) const
    {
        std::cout << "calling base class" << std::endl;
        return n * price;
    }

    virtual double total_price(std::size_t n) const
    {
        return 0;
    }

    virtual void display() const
    {
        std::cout << "bookNo:" << bookNo << std::endl;
        std::cout << "price: " << price << std::endl;
    }

    virtual ~Quote() = default;

private:
    std::string bookNo;

protected:
    double price = 0.0;
};

class Bulk_quote:public Quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book, double p, std::size_t qty, double disc):Quote(book,p),min_qty(qty),discount(disc){}
    double net_price(std::size_t n) const;
    double total_price(std::size_t n) const final
    {
        return 0;
    }
    void display() const override;
    ~Bulk_quote() = default;
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

double Bulk_quote::net_price(std::size_t cnt) const
{
    std::cout << "calling derived class" << std::endl;

    if(cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}
double print_total(ostream &os,const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;

    return ret;
}

void Bulk_quote::display() const
{
    Quote::display();
    std::cout << "min_qty: " << min_qty << std::endl;
    std::cout << "discount: " << discount << std::endl;
}
class Third:public Bulk_quote
{
public:
    //double total_price(std::size_t n) const;
};
