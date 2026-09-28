#include "bookStore.h"

namespace HanYoonseo2649055
{
    bool compareBook(const book& b1, const book& b2)
    {
        return b1.getID() == b2.getID() && b1.getPrice() == b2.getPrice();
    }
}

int main()
{
    using namespace HanYoonseo2649055;
    bookStore bs1; bs1.print();
    bookStore bs2{book{1, 0}, true}; bs2.print();

    if (compareBook(bs1.getBook(), bs2.getBook()))
        std::cout << "same\n";
    else
        std::cout << "not same\n";
    return 0;
}
