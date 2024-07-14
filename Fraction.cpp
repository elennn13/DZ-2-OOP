#include "Fraction.hpp"

// ��������������� �����������
Fraction::Fraction(unsigned int numerator, unsigned int denominator, bool is_positive)
    : numerator(numerator), denominator(denominator), is_positive(is_positive) {
    reduce();
}

// ����������� �� ���������
Fraction::Fraction() : Fraction(1, 1, true) {}

// ����������� �����������
Fraction::Fraction(const Fraction& other) : Fraction(other.numerator, other.denominator, other.is_positive) {}

// ����� ������ ����� � �������
void Fraction::print() const {
    std::cout << (is_positive ? "" : "-") << numerator << "/" << denominator << std::endl;
}

// ������ ��������/��������� ����� � ������ ������
Fraction Fraction::add(const Fraction& other) const {
    unsigned int new_numerator = numerator * other.denominator + other.numerator * denominator;
    unsigned int new_denominator = denominator * other.denominator;
    bool new_is_positive = is_positive == other.is_positive;
    return Fraction(new_numerator, new_denominator, new_is_positive);
}

Fraction Fraction::subtract(const Fraction& other) const {
    unsigned int new_numerator = numerator * other.denominator - other.numerator * denominator;
    unsigned int new_denominator = denominator * other.denominator;
    bool new_is_positive = is_positive == other.is_positive;
    return Fraction(new_numerator, new_denominator, new_is_positive);
}

// ������ ��������/��������� ����� � ����� ������
Fraction Fraction::add(int integer) const {
    unsigned int new_numerator = numerator + integer * denominator;
    return Fraction(new_numerator, denominator, is_positive);
}

Fraction Fraction::subtract(int integer) const {
    unsigned int new_numerator = numerator - integer * denominator;
    return Fraction(new_numerator, denominator, is_positive);
}

// ��������� ����� ���������� �����
void Fraction::reduce() {
    unsigned int gcd = std::gcd(numerator, denominator);// �� ������ ������ ��� �� ����������������(((((((((((((((((((((
    numerator /= gcd;
    denominator /= gcd;
}