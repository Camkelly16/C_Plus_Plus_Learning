#include <iostream>

    // Namespace = provides a solution for preventing name conflicts
    //             in a large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities.
    //             as long as the namespaces are different. 

namespace first{

     int x = 1; 

    }

namespace second{
        int x = 5; 

    }

int main() {
    using namespace second; // You can state the nameplace, so you can use it varable without stating it later.
    using std::cout; // You can state std here, to save time typing
    using std::string; // The same thing ^
    //int x = 9;

    cout << x << '\n';
    cout << first::x  << '\n'; // You have to state the name of the namespace to use it's variable
    cout <<second::x  << '\n';
    string name = "Ann";
    cout << name;
    

    return 0; 
}