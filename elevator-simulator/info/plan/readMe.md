lab04 files

GIVEN   Node.h
GIVEN   Node.cpp
        StackInterface.h
        Stack.h
        Stack.cpp
        QueueInterface.h
GIVEN   Queue.h
GIVEN   Queue.cpp
        Executive.h
GIVEN   Executive.cpp
        main.cpp
GIVEN   makefile
GIVEN   input.txt

we will make a project that will stub all of our methods first


                stackinterface
                |
                stack class     ->          
node class ->                       executive class ->  main 
                queue class     ->
                |
                queueinterface
             


void Executive::fileIO() {
    
    //declared variables
    std::ifstream inStream;
    std::string command;
    std::string name;
    int total_body_count = 0;
    int dropoff_body_count = 0;
    int inline_body_count = 0;
    Queue<std::string> Line;
    
    inStream.open(file_name);
    if (!inStream.is_open()) {
        throw (std::runtime_error("File was not opened!"));
    } else {
        while (inStream >> command) {
            if (command == "WAIT" ) {
                std::cout << command << " ";
                inStream >> name;
                std::cout << name << std::endl;
                
                Line.enqueue(name);
                inline_body_count++;
                
                try {
                    std::cout << Line.peekFront() << " is at the front of the queue." << std::endl;
                } catch (std::exception &e) {
                    std::cout << e.what() << std::endl;
                }
                
                try {
                    std::cout << Line.peekBack() << " is at the back of the queue." << std::endl;
                } catch (std::exception &e) {
                    std::cout << e.what() << std::endl;
                }
                
                std::cout << "there are " << inline_body_count << " people waiting in line\n";
                std::cout << '\n';
                
            } else if (command == "PICK_UP") {
                std::cout << command << std::endl;
                
            } else if (command == "DROP_OFF") {
                std::cout << command << " ";
                inStream >> dropoff_body_count;
                std::cout << dropoff_body_count << std::endl;
            } else if (command == "INSPECTION") {
                std::cout << command << std::endl;
            }
        }
    }
    inStream.close();
}



