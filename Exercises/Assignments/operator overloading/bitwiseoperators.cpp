#include <iostream>
using namespace std;


class Number {
private:
    int value;

public:
    Number() : value(0) {}
    Number(int val) : value(val) {}

    // Bitwise AND operator '&'
    Number operator&(const Number& other) const {
        return Number(value & other.value);
    }

    // Bitwise OR operator '|'
    Number operator|(const Number& other) const {
        return Number(value | other.value);
    }

    // Bitwise XOR operator '^'
    Number operator^(const Number& other) const {
        return Number(value ^ other.value);
    }

    // Bitwise NOT operator '~'
    Number operator~() const {
        return Number(~value);
    }

    // Overload the stream insertion operator '<<' for printing
    friend ostream& operator<<(ostream& os, const Number& obj) {
        os << obj.value;
        return os;
    }
};

int main() {
    Number a(5); // Binary: 0101

    Number result_not = ~a;
    cout << "~a = " << result_not <<endl; // Expected output: -6 (Binary: 11111111111111111111111111111010)

    Number b(3); // Binary: 0011

    Number result_and = a & b;
    Number result_or = a | b;
    Number result_xor = a ^ b;

    cout << "a & b = " << result_and << endl; // Expected output: 1 (Binary: 0001)
    cout << "a | b = " << result_or << endl;  // Expected output: 7 (Binary: 0111)
    cout << "a ^ b = " << result_xor << endl; // Expected output: 6 (Binary: 0110)

    return 0;
}
