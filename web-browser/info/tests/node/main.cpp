#include "Node.h"
#include <iostream>
#include <stdexcept>

int main(int argc, const char* argv[]) {
    
    try {
    
    if (argc < 2) {
        throw (std::runtime_error("incorrect number of parameters."));
    } else {
        
        Node* first = nullptr;
        first = new Node('a');
        Node* second = nullptr;
        second = new Node('b');
        first -> setNext(second);
        
        delete (first);
        delete (second);
    }
    
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    
    
    return(0);

}
