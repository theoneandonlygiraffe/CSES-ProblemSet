#include <iostream>
#include <string>
#include <sstream>

int main(int argc , char* argv[]){
    std::string input;
    std::stringstream stream;
    
    
    std::getline(std::cin , input);
    const unsigned long n = std::stoi(input);
    unsigned long* array = new unsigned long[n];
    std::getline(std::cin , input);
    stream << input;
    
    
    for(unsigned int i = 0; i < n - 1; i++) {
        std::string temp;
        std::getline(stream, temp, ' ');
        array[i] = std::stoi(temp);
        //std::cout << array[i] << '\n';
    }
    
    //std::cout << "--" << '\n';
    
    unsigned long sum = 0;
    for(unsigned int i = 0; i < n - 1; i++) {
        sum = sum + array[i];
        //std::cout << sum << '\n';
    }
    //std::cout << "--" << '\n';
    
    unsigned long shouldbe;
    if( n % 2 == 0){
        shouldbe = (n / 2) * (n + 1); //gaus?
    } else {
        shouldbe = ((n-1) / 2) * ((n-1) + 1);
        shouldbe = shouldbe + n ;
    }
    //std::cout << shouldbe << '\n';
    //std::cout << sum << '\n';
    std::cout << shouldbe - sum << '\n';
        
}
