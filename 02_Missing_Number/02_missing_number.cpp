#include <iostream>
#include <string>
#include <sstream>

int main(int argc , char* argv[]){
    std::string input;
    std::stringstream stream;
    
    std::getline(std::cin , input);
    const unsigned long n = std::stoi(input);
    unsigned int* array = new unsigned int[n];
    std::getline(std::cin , input);
    stream << input;
    
    
    for(unsigned long i = 0; i < n - 1; i++) {
        std::string temp;
        std::getline(stream, temp, ' ');
        array[i] = std::stoi(temp);
    }   
    
    unsigned long sum = 0;
    for(unsigned long i = 0; i < n - 1; i++) {
        sum = sum + array[i];
    }
    
    unsigned long shouldbe;
    unsigned long even = n & ~(1);
    shouldbe = (even >> 1) * (even + 1);
    if (n & 1) {
        shouldbe = shouldbe + n;
    }
    
    std::cout << shouldbe - sum << '\n';
        
}
