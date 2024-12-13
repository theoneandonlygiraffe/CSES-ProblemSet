#include <iostream>
#include <string>

int main(int argc , char* argv[]){
    //std::string input(argv[1]);
    std::string input; std::getline(std::cin , input);
    unsigned long n;
    n = std::stoi(input);
    std::cout << n << ' ';
    
    while (1 != n){
    
        if((n % 2)){ //if odd
            n = (n * 3) + 1;
            std::cout << n << ' ';
            //odd always to even
            n = n / 2;
            std::cout << n << ' ';
        } else {
            n = n / 2;
            std::cout << n << ' ';
        }
    }
    std::cout << '\n';
}
