#include <iostream>
#include <string>


int main(int argc , char* argv[]){
    std::string input;
    std::getline(std::cin , input);
    
    unsigned int sum = 1;
    unsigned int maxSum = 1;
    char initVal = 0;
    char &lastChar = initVal;
    for(auto const &c : input) {
        if (lastChar == c) {
            sum++;
        } else {
            if (sum > maxSum ) {
                maxSum = sum;
            }
            sum = 1;
        }
        lastChar = c;
    }
    if (sum > maxSum ) {
        maxSum = sum;
    }
    std::cout << maxSum << '\n';
}
