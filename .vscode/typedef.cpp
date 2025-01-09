#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; //Help reduce typo and helps with readablity 
//typedef std::string string_t; // same as ty
//typedef int number_t;
using string_t = std::string;
using number_t = int;

int main(){

    // typedef = reserved keyword used to create additional name
    //           (alias) for another data type.
    //           New identifier for an existing type
    //           Helps with readability and reduces typos
    //           Use when there is a clear benfits
    //           Replaced with 'using' (work better w/ templates)

    string_t name = "Kim";
    number_t age = 21;
    std::cout << "My name is " << name << " I am " << age << " years old. " << '\n';

   

    return 0;
}