#pragma once
#include "book.h"
namespace HanYoonseo2649055
{
    class bookStore
    {
    // private:
        book b;
        bool available;
    public:
        bookStore(book b0 = book{1,0}, bool a0 = false)
            :b{b0}, available{a0}{}
        //bookStore(int d = 1, int p = 0, bool a = false)
        //   : b{d,p}, available{a}{}
        void print() const //bookStore::print()
        {
            b.print(); //bookStore::print() - id, price
            if (available) std::cout << "available\n";
            else std::cout << "NOT available\n";
        }
        const book& getBook() const { return b; }
        void setBook(const book& b0) { b = b0; }

    };
}