#include <iostream>

int main() {
    // const keyword allow the variable not to be able to change
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";
    return 0;
}