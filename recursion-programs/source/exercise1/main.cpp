/**
 * @file   main.cpp
 * @author Morgan Bergen
 * @date   October 24/2021
 * @brief  This file represents exercise 3:  Recursive Parenthesis Checker.  This program takes a sequence of parenthesis from the command line (a string literal), the program will indicate whether or not it's a balanced set of parenthesis, the solution to this problem will be expressed as a recursive solution.
 */

#include <iostream>
#include <string>
#include <algorithm>

bool isBalanced(std::string p_str){
    
    bool yes = true;
    bool no = false;
    
    if (p_str.length() == 2) {
        if (p_str == "()") {
            return(yes);
        } else {
            return(no);
        }
    } else {
        if (p_str[0] == '(') {
            for (int i = 1; i < p_str.length(); i++) {
                if (p_str[i] == ')') {
                    p_str.erase (p_str.begin()+i);
                    break; //exist out of the if statement soley
                }
            }
            p_str.erase(p_str.begin()); //erases the first iterator of the p_str
            return(isBalanced(p_str)); //recurse
        } else if (p_str[0] == ')') {
            return(yes);
        } else {
            return(no);
        }
    }
}

int main(int argc, char* argv[]) {
    
    std::string str = argv[1];
    bool yes = true;
    bool no = false;
    
    if (argc != 2) {
        std::cerr << "incorrect number of parameters." << std::endl;
    } else if (argc == 2) {
        if (isBalanced(str) == yes) {
            std::cout << "The sequence " << str << " is balanced" << std::endl;
        } else if (isBalanced(str) == no) {
            std::cout << "The sequence " << str << " is NOT balanced" << std::endl;
        }
    } else {
        std::cerr << "incorrect number of parameters." << std::endl;
    }
    
    return (0);
}
