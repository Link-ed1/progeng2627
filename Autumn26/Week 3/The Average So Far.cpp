#include <iostream>

int main(){
    int numberIn = 1;
    double total = 0;
    int totalNo = 0;

    while (numberIn != 0) {
        std::cout << "enter a number: " << std::endl;
        std::cin >> numberIn;
        total = total + numberIn;
        totalNo += 1;
        if (numberIn != 0){
            std::cout << "the average so far is: "  << std::endl;
            std::cout << total / totalNo << std::endl;
        }
        
    }
    return 0;

}