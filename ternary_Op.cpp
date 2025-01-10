#include <iostream>

int main(){
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

   int grade;
     std::cout << "What is your grade: ";
     std::cin >> grade;

    /* 
    if(grade >= 60){
        std::cout << "You passed " << '\n';
    }
    else{
        std::cout << "You failed " << '\n';
    }
   */

    grade > 100 ? std::cout << "Impossible, you cheated " : grade == 100 ? std::cout << "You got a perfect score " : grade >= 60 ? std::cout << "You passed " : std::cout << "You failed "; 
    return 0;
}