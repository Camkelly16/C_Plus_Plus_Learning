#include<iostream>

int main(){
    using std::cout;

    // type conversion = conversion a value of one data type to another 
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data (int)

    //double x = (int)3.12; 
    //cout << x;

    //char x = 100;
    //cout << x; //Implicit
    //cout << (char) 100;

    int correct = 8;
    int questions = 10;
    double score = (double)correct/questions * 100;

    cout << score << "%";




    return 0;
}