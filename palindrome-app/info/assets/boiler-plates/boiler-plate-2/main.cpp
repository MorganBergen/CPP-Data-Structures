//  main.cpp

#include "StackOfChars.h"

#include <iostream>
#include <string>

bool checkBalance (std::string expression);
bool isPaired(char open, char close);

int main(int argc, const char * argv[]) {
    
    StackOfChars* stack = nullptr;
    stack = new StackOfChars();
    stack -> push('a');
    stack -> push('b');
    stack -> push('c');
    stack -> push('d');
    stack -> push('e');
    stack -> push('f');
    
    std::cout << stack -> peek() << std::endl;
    stack -> pop();
    std::cout << stack -> peek() << std::endl;
    stack -> pop();
    std::cout << stack -> peek() << std::endl;
    stack -> pop();
    std::cout << stack -> peek() << std::endl;
    stack -> pop();
    std::cout << stack -> peek() << std::endl;
    stack -> pop();
    std::cout << stack -> peek() << std::endl;
    stack -> pop();
    
    std::cout << "true = " << true << " false = " << false << std::endl;
    
    std::cout << "is the stack empty?  " << stack -> isEmpty() << std::endl;
    
    std::cout << "are these brackets balanced?  } {  " << isPaired('}', '{') << std::endl;
    
    
    stack -> ~StackOfChars();
    
    return (0);
}

bool isPaired(char open, char close) {
    
    return (open == '{' && close == '}');
}

bool checkBalance (std::string expression) {
    
    StackOfChars* open_delimiter_stack = new StackOfChars();
    int character_count = expression.length();
    bool isBalanced = true; //initialize the state of the expression
    int index = 0;
    char next_character = ' ';
    
    do {
        //USING THE ADT STACK (of characters 08:13) of pearson
        
    } while (isBalanced && (index < character_count));
    
    return(isBalanced);
}
