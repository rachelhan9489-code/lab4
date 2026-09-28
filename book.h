#pragma once //헤더가드
#include <iostream>

namespace HanYoonseo2649055
{
    class book
    {
    //private:
        int id;     
        int price;  //price: 0~50000 won
        void testID() //id: 1~1000
        {
            if(id < 1 || id > 1000)
            {
                std::cout << "Invalid book id\n";
                std::exit(1);
            }
        }
        void testPrice() //price: 0~50000 won
        {
            if(price < 0 || price > 50000)
            {
                std::cout << "Invalid book price\n";
                std::exit(1);
            }
        }
    public:
        book(int d = 1, int p = 0):id{d}, price{p}
        {
            testID(); testPrice();
        }

        void input()
        {
            std::cout << "Enter book id: ";
            std::cin >> id; testID();
            std::cout << "Enter book price: ";
            std::cin >> price; testPrice();
        }
        void setID(int d){id = d; testID();}
        void setPrice(int p){price = p; testPrice();}
        void print() const
        {
            std::cout << id << "," << price <<"won\n";
        }
        int getID() const {return id;}
        int getPrice() const {return price;}
    };
} 
