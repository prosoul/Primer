#include<iostream>

class SalesData
{
private:
    std::string bookNo;
    unsigned unitsSold = 0;
    double sellingPrice = 0.0;
    double salePrice = 0.0;
    double discount = 0.0;
    double revence = 0.0;

public:
    std::string Isbn() const;
    SalesData &combine(const SalesData &rhs);
    double AvgPrice() const;
};

std::string SalesData::Isbn() const
{
    return bookNo;
}

SalesData &SalesData::combine(const SalesData &rhs)
{
    unitsSold += rhs.unitsSold;
    salePrice = (rhs.salePrice * rhs.unitsSold + salePrice * unitsSold)/(rhs.unitsSold+unitsSold);

    if(sellingPrice != 0)
        discount = salePrice / sellingPrice;

    return *this;
}

int main()
{
    SalesData saleData;

    std::cout << "this" << std::endl;
    return 0;
}
