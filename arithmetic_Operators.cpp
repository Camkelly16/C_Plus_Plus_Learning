#include <iostream>

int main(){
    using std::cout;
    //arithemtic operators = return the result of a specific 
    //                         arithmetic operation (+ - * / %)
    //                         Order of Operations: 
    //                         1. Parenthesis
    //                         2. Multiplication & Division
    //                         3. Addition & Subtraction

    int students = 20;

    // Adding
    //students = students + 1;
    //students+=1; //^The same thing
    //students++; //Add one to the variable

    // Subtracting 
    //students = students - 1;
    //students-=1; //^The same thing
    //students--; //Subtract one to the variable

    // Multiplication
    //students = students * 2;
    //students *=2;

    // Division
    //students = students / 2;
    //students /=2;

    // modulo 
    int remainder = students % 2; //Return the remainder of a number
    
    



    cout << "The total number of student is " << students << '\n';
    cout << "The remainder is " << remainder;


    return 0;
}