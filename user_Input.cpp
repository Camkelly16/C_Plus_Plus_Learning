#include <iostream>

// cout << (insertion operator) Character Output 
// cin >> (extraction operator) Character Input 
//getline function allows your input to contains spaces
// std::ws in the getline function will eliminate any new line characters or any white spaces

int main(){
    using std::cout;
    using std::string;

    string name;
    int age;

    cout << "What's your full name: ";
    //std::cin >> name;
    std::getline(std::cin >> std::ws, name);

    cout << "What's your age: ";
    std::cin >> age;

    cout << "Hello " << name << '\n';
    cout << "My age is: " << age;

    return 0; 
}