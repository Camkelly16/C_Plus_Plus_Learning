#include <iostream>

int main() {

    // integer (whole number)
    // int x ; //declaration 
    // x = 5; //assignment 
    int x = 5; 
    int y = 7;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // double (number including decimal)
    double price = 12.99;
    double weight = 235;
    double miles = 5.5;

     std::cout << price << '\n' ;
     std::cout << weight << '\n';
     std::cout << miles << '\n';

     // single character 
    char grade = 'A';
    char initial = 'B';
    char currency = 'S';

    std::cout << grade << '\n' ;
    std::cout << initial << '\n';
    std::cout << currency << '\n';

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    std::cout << student << '\n';
    std::cout << power << '\n';
    std::cout << forSale << '\n';

    // string (objects that reprensents a sewuence of text)
    std::string name = "John";
    std::string day = "Friday";
    std::string food = "fries";
    std::string address = "123 address";

    std::cout << name << '\n';
    std::cout << day << '\n';
    std::cout << food << '\n';   
    std::cout << "Hello there, my address is " << address;





    return 0;
}