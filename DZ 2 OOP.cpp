#include "Fraction.hpp"

int main() {
    Fraction frac1(6, 8);
    Fraction frac2(3, 4, false);

    frac1.print();
    frac2.print();

    Fraction result = frac1.add(frac2);
    result.print();

    result = frac1.subtract(frac2);
    result.print();

    result = frac1.add(2);
    result.print();

    result = frac1.subtract(1);
    result.print();

    return 0;
}
