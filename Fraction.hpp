#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>
#include <numeric> // Для std::gcd

class Fraction {
public:
    // Параметрический конструктор
    Fraction(unsigned int numerator, unsigned int denominator, bool is_positive = true);

    // Конструктор по умолчанию
    Fraction();

    // Конструктор копирования
    Fraction(const Fraction& other);

    // Метод вывода дроби в консоль
    void print() const;

    // Методы сложения/вычитания дроби с другой дробью
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;

    // Методы сложения/вычитания дроби с целым числом
    Fraction add(int integer) const;
    Fraction subtract(int integer) const;

private:
    unsigned int numerator;
    unsigned int denominator;
    bool is_positive;

    // Приватный метод сокращения дроби
    void reduce();
};

#endif // FRACTION_HPP