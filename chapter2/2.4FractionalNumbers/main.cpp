#include <iostream>
#include <iomanip>

int main()
{

    // Declare and initialize the variables
    float number1{1.12345678901234567890f};       // 7
    double number2{1.12345678901234567890};       // 17
    long double number3{1.12345678901234567890L}; // 20

    // Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    // Precision
    std::cout << std::setprecision(20);                   // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; // 7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
    std::cout << "number2 is : " << number3 << std::endl; // 15+ digits

    return 0;
}
