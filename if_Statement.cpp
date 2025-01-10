#include <iostream>

int main()
{
    //if statement = do something if a condition is true.
    //               if not, then don't do it.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

     if(age == 18){
        std::cout << "You are just the right age!";
    }
    else if(age >= 18){
        std::cout << "Welcome to the site!";

    }
    else if(age < 0){
        std::cout << "You are not born yet!";

    }
    
    else{
        std::cout << "You are not old enough for the site!";
    }

    return 0;
}