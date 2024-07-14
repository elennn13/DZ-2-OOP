#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>
#include <numeric> // ��� std::gcd

class Fraction {
public:
    // ��������������� �����������
    Fraction(unsigned int numerator, unsigned int denominator, bool is_positive = true);

    // ����������� �� ���������
    Fraction();

    // ����������� �����������
    Fraction(const Fraction& other);

    // ����� ������ ����� � �������
    void print() const;

    // ������ ��������/��������� ����� � ������ ������
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;

    // ������ ��������/��������� ����� � ����� ������
    Fraction add(int integer) const;
    Fraction subtract(int integer) const;

private:
    unsigned int numerator;
    unsigned int denominator;
    bool is_positive;

    // ��������� ����� ���������� �����
    void reduce();
};

#endif // FRACTION_HPP