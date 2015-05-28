
#include<iostream>
#include<string>

struct SaleData{
    std::string Isbn() const;
    SaleData &Combine(const SaleData &rhs);
    double AvgPrice() const;

    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0.0;
};

std::string SaleData::Isbn() const
{
    return bookNo;
}

SaleData &SaleData::Combine(const SaleData &rhs)
{
    unitsSold += rhs.unitsSold;
    revenue += rhs.revenue;

    return *this;
}

double SaleData::AvgPrice() const
{
    double price = 0;

    if(unitsSold != 0)
        price = revenue / unitsSold;
    else
        price = 0;
}

SaleData add(const SaleData &lhs, const SaleData &rhs)
{
    SaleData sum = lhs;
    sum.Combine(rhs);

    return sum;
}

std::istream &read(std::istream &is, SaleData &item)
{
    double price = 0;

    is >> item.bookNo >> item.unitsSold >> price;
    item.revenue = price * item.unitsSold;

    return is;
}

std::ostream &print(std::ostream &os, const SaleData &item)
{
    os << item.Isbn() << " " << item.unitsSold << " " << item.revenue << " " << item.AvgPrice();

    return os;
}
