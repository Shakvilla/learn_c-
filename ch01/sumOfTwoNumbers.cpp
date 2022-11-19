#include <iostream>

/**
 * main - entry point function
 * 
*/

int main (){

    int num1{0};
    int num2{0};
    int sum{0};

    std::cout << "Enter first number: "; // asks the user for first input
    std::cin >> num1; // accepts the first number input from the user

    std::cout << "Enter second number: ";
    std::cin >> num2;

    sum = num1 + num2;
    std::cout << "Total: " << sum << "\n";


}