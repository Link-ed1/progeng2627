#include <iostream>

int main(){
    int divisor;
    int dividend;
    int quotient = 0;

    
    std::cout << "Enter a dividend: ";
    std::cin >> dividend;
    std::cout << "Enter a divisor: ";
    std::cin >> divisor;

    while (dividend >= divisor){
        std::cout << dividend << " is greater than " << divisor 
        << "so we subtract " << divisor << " from " << dividend << std::endl;
        quotient += 1;
        dividend -= divisor;
        std::cout << "we get " << dividend << std::endl;
    }
    
    if (dividend < divisor){
        std::cout << dividend << " is not greater than " << divisor << " so we terminate the loop" << std::endl;
        std::cout << "the quotient is the number of subtrations (" << quotient << ")" << std::endl;
        std::cout << "the remainder is the number we have left at the end (" << dividend << ")";
    }

    return 0;

    

}