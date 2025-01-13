#include <iostream>

int main(){

//  Length Method will give you the length of a String
//  Empty Method will return if a String is empty or not
//  Clear Method will clear the the String 
//  Append Method will add a String to another String 
//  At Method return a certain character at a certain index
//  insert Method return a character at a certain postion 
    std::string name;

    std::cout << "Enter you name: ";
    std::getline(std::cin, name);

    if(name.length() > 50){
        std::cout << "Your name can't be over 50 characters ";
    }
    else if(name.empty()){
        std::cout << "You didn't enter your name ";
    }
    else{
        std::cout << "Welcome " << name << '\n';
           std::cout << name.at(2);
    }

    // name.clear();
    // std::cout << "Hello " << name;

    // name.append("@gmail.com");
    // std::cout << "Your username is: " << name;

    


    return 0;
}