#include <iostream>

int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}

int main()
{

    int first_number{13}; // statement
    int second_number{7};

    std::cout << "First Number : " << first_number << std::endl; // 13
    std::cout << "Second Number : " << second_number << std::endl; // 7

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; // 20

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl; // 32

    sum = addNumbers(30,54);
    std::cout << "Sum : " << sum << std::endl; // 84

    std::cout << "Sum : " << addNumbers(3,42) << std::endl; // 45


    return 0;
    /*

        Output:
        First Number : 13
        Second Number : 7
        Sum : 20
        Sum : 32
        Sum : 84
        Sum : 45
    */
}