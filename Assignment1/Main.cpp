#include <iostream>

int divide(const int num, const int den) {
    return num/den;
}

    int main(void) {
    int a = 7; // definite the integer a as 7
    int b = 3; // definte the integer b as 3

    int c = divide(a, b); // define the integer c as a/b
    std::cout << a << "/" << b << "=" << c << std::endl;
    return 0;
}
