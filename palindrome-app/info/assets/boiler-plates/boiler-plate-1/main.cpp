//  main.cpp

#include "Node.h"
#include "LinkedNode.h"

#include <iostream>

int main(int argc, const char * argv[]) {
    
    LinkedNode* object = nullptr;
    object = new LinkedNode();
    
    object -> add('g');
    object -> add('f');
    object -> add('e');
    object -> add('d');
    object -> add('c');
    object -> add('b');
    object -> add('a');
    
    std::cout << object -> getPointerTo('c') << std::endl;
    object -> printChain('g');
    
    
    
    delete object;
    
    return (0);
}
