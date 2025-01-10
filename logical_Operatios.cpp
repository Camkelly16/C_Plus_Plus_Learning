#include <iostream>

int main() {
    int temp = 85;
    bool isRaining = true;
    int humidity = 50;

    // AND operator (&&) 
    std::cout << (temp > 70 && humidity > 40 
                  ? "The temperature is high and the humidity is above 40%." 
                  : "Either the temperature is low or humidity is below 40%.") 
              << std::endl;

    // OR operator (||) 
    std::cout << (temp > 90 || isRaining 
                  ? "It's either too hot or raining, not a good day!" 
                  : "The weather is fine!") 
              << std::endl;

    // NOT operator (!) 
    std::cout << (!isRaining 
                  ? "It's not raining today!" 
                  : "It's raining today.") 
              << std::endl;

    // Comparison operators 
    std::cout << (temp == 85 
                  ? "The temperature is exactly 85 degrees." 
                  : "") 
              << std::endl;

    std::cout << (temp != 90 
                  ? "The temperature is not 90 degrees." 
                  : "") 
              << std::endl;

    std::cout << (temp < 100 
                  ? "The temperature is less than 100 degrees." 
                  : "") 
              << std::endl;

    std::cout << (temp > 60 
                  ? "The temperature is greater than 60 degrees." 
                  : "") 
              << std::endl;

    std::cout << (temp >= 80 
                  ? "The temperature is greater than or equal to 80 degrees." 
                  : "") 
              << std::endl;

    std::cout << (temp <= 90 
                  ? "The temperature is less than or equal to 90 degrees." 
                  : "") 
              << std::endl;

    return 0;
}
