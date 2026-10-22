#include <iostream>

int main(){
    int numberIn;
    int total = 0;

    while (numberIn != 0) {
        std::cout << "enter a number: " << std::endl;
        std::cin >> numberIn;
        total = total + numberIn;
        if (numberIn != 0){
            std::cout << "the sum so far is: " << total << std::endl;
        }
        
    }
    return 0;

}