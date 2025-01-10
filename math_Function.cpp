#include <iostream>
#include <cmath> // Math header files
//More C++ Math function https://cplusplus.com/reference/cmath/

int main()
{
    const double x = 3.99;
    const double y = 4;
    const double a = 3.33;
    double z;

    z = std::max(x,y);//Max function
    std::cout << "The Max number is: " << z << '\n';

    z = std::min(x,y);//Min function 
    std::cout << "The Min number is: " << z << '\n';

    z = pow(x,y);//Raise to the power function 
    std::cout << x << " to the power of " << y << " is: " << z << '\n';

    z = sqrt(y);
    std::cout << "The square root of " << y << " is " << z << '\n';

    z = abs(-y);
    std::cout << "The Absolute value of -4 is:  " << z << '\n';

    z = round(x); //Round 
    std::cout << z << '\n';

    z = ceil(a); //Round up
    std::cout << z << '\n';

    z = floor(a); //Round Down
    std::cout << a << '\n';
    return 0;
}