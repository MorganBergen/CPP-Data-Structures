/**
 * @file    main.cpp
 * @author  Morgan Bergen
 * @date    October 24/2021
 * @brief   This file represents exercise 3:  Good Old Fibonacci.
 */

#include <iostream>
#include <string>

int fib(int n) {
    if (n == 0) {
        return (0);
    } else if (n == 1) {
        return (1);
    } else {
        return (fib(n - 1) + fib (n - 2));
    }
}

bool verify(int number) {
    
    int i = 0;
    bool found = false;
    
    do {
        if (fib(i) == number) {
            found = true;
        }
        i++;
    } while (fib(i) <= number);
    
    return(found);
}


int main(int argc, char* argv[]) {
    
    if (argc != 3) {
        std::cerr << "error incorrect number of parameters." << std::endl;
        return(0);
    } else if (argc == 3) {
        
        std::string tag = argv[1];
        int nth = atoi(argv[2]);
        
        if (tag == "-i") {
            
            std::cout << fib(nth) << std::endl;
            
        } else if (tag == "-v") {
            
            if (verify(nth) == true) {
                std::cout << nth << " is in the sequence" << std::endl;
            } else {
                std::cout << nth << " is not in the sequence" << std::endl;
            }
        }
    }
    return (0);
}
