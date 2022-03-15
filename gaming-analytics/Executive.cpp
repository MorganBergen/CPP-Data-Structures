//Executive.cpp

#include <fstream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include "Executive.h"

void Executive::run(){
	
	do {
		int choice = 0;
		std::cout << "\nPlease Enter one of the following Menu Options\n";
		std::cout << "  1. Print all games (same order as from file)" << std::endl;
		std::cout << "  2. Print all games from a year" << std::endl;
		std::cout << "  3. Print a ranking range" << std::endl;
		std::cout << "  4. The People VS Dr. Gibbons" << std::endl;
		std::cout << "  5. Print based on play time" << std::endl;
		std::cout << "  6. Exit the program" << std::endl;
		std::cout << "Option Number: ";
		std::cin >> choice;
		switch (choice) {
			case 1:
				std::cout << "\nYou chose to print all games (same order as from file):\n" << std::endl;
				option1();
				break;
			case 2:
				std::cout << "\nYou chose to print all games from a year:" << std::endl;
				option2();
				break;
			case 3:
				std::cout << "\nYou chose to print a ranking range:" << std::endl;
				option3();
				break;
			case 4:
				std::cout << "\nYou chose to play The People VS Dr. Gibbons:" << std::endl;
				option4();
				break;
			case 5:
				std::cout << "\nYou chose to print base on play time:" << std::endl;
				option5();
				break;
			case 6:
				exit(1);
				break;
			default:
				if (std::cin.fail()) {
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "\nSorry, your input did not seem to be an int. Try again\n";
				} else {
				}
				break;
		}
		
	} while (!(std::cin.fail()));
	
}

Executive::Executive(std::string fileName){
	
	std::string fileNamed = "";
	fileNamed = fileName;
	std::ifstream inFile;
	
	inFile.open(fileNamed);
	if (inFile.fail()) {
		std::cerr << "input file failed to open.\n";
		exit(1);
	} else if (inFile.is_open()){
		
		std::string tempName;
		double tempGibbRating;
		double tempPubRating;
		int tempYear;
		int tempMinPlayers;
		int tempMinTime;
		
		inFile >> count;
		
		allGames = new BoardGame[count];
		
		for (int i = 0; i < count; i++) {
			inFile >> tempName >> tempGibbRating >> tempPubRating >> tempYear >> tempMinPlayers >> tempMinTime;
			
			allGames[i].setName(tempName);
			allGames[i].setGibbRating(tempGibbRating);
			allGames[i].setPubRating(tempPubRating);
			allGames[i].setTempYear(tempYear);
			allGames[i].setTempMinPlayers(tempMinPlayers);
			allGames[i].setTempMinTime(tempMinTime);
		}
	}
}

Executive::~Executive(){
	
	delete[] allGames;
	
}

void Executive::option1(){
	
	for (int i = 0; i < count; i++) {
		std::cout << allGames[i].getName() << " (" << allGames[i].getYear() << ") " << "[GR=" << allGames[i].getGibbRating() << ", PR=" << allGames[i].getPubRating() << ", MP=" << allGames[i].getMinPlayers() << ", MT=" << allGames[i].getMinTime() << "]" << std::endl;
	}
	
}

void Executive::option2(){
	
	int userInput;
	std::cout << "Please Enter a Year: ";
	std::cin >> userInput;
	std::cout << std::endl;
	int year = 0;
	int counter = 0;
	
	for (int i = 0; i < count; i++) {
		year = allGames[i].getYear();
		if (userInput == year) {
			std::cout << allGames[i].getName() << " (" << allGames[i].getYear() << ") " << "[GR=" << allGames[i].getGibbRating() << ", PR=" << allGames[i].getPubRating() << ", MP=" << allGames[i].getMinPlayers() << ", MT=" << allGames[i].getMinTime() << "]" << std::endl;
			counter++;
		} else {
		}
		year = 0;
	} if (counter == 0) {
		std::cout << "No Games Found from that year." << std::endl;
	}
}

void Executive::option3(){
	
	double upperBound;
	double lowerBound;
	
	std::cout << "\nPlease enter a ranking range (i.e. 1 - 10)";
	std::cout << "\nPlease enter the lower bound: ";
	std::cin >> upperBound;
	std::cout << "Please enter the upper bound: ";
	std::cin >> lowerBound;
	
	double rank = 0;
	int counter = 0;
	std::cout << '\n';
	for (int i = 0; i < count; i++) {
		rank = allGames[i].getGibbRating();
		if (lowerBound >= rank) {
			if (upperBound <= rank) {
				std::cout << allGames[i].getName() << " (" << allGames[i].getYear() << ") " << "[GR=" << allGames[i].getGibbRating() << ", PR=" << allGames[i].getPubRating() << ", MP=" << allGames[i].getMinPlayers() << ", MT=" << allGames[i].getMinTime() << "]" << std::endl;
				counter++;
			} else {
			}
		} else {
		}
	} if (counter == 0) {
		std::cout << "No Games Found within that ranking range\n" << std::endl;
	} else {
	}
}

void Executive::option4(){
	
	double gibbRatingHolder;
	double pubRatingHolder;
	double ratingDifference;
	double ratingInput;
	int counter = 0;
	
	std::cout << "Please enter a Rating: ";
	std::cin >> ratingInput;
	
	std::cout << "All games where the people's rating and Dr. Gibbons rating are separated by " << ratingInput << " or higher:\n";
	
	for (int i = 0; i < count; i++) {
		
		gibbRatingHolder = allGames[i].getGibbRating();
		pubRatingHolder = allGames[i].getPubRating();
		
		ratingDifference = std::abs (gibbRatingHolder - pubRatingHolder);
		
		if (ratingInput <= ratingDifference) {
			std::cout << allGames[i].getName() << " (" << allGames[i].getYear() << ") " << "[GR=" << allGames[i].getGibbRating() << ", PR=" << allGames[i].getPubRating() << ", MP=" << allGames[i].getMinPlayers() << ", MT=" << allGames[i].getMinTime() << "]" << std::endl;
			counter++;
		} else {
		}
	} if (counter == 0) {
		std::cout << "\nNo Games Found at or higher than that value" << std::endl;
	} else {
	}
	
}

void Executive::option5() {
	
	double userInputTime;
	
	std::cout << "Please enter a playtime: ";
	std::cin >> userInputTime;
	std::cout << '\n';
	double time = 0;        //initializes time to 0
	int counter = 0;        //initializes counter to 0
	for (int i = 0; i < count; i++) {
		time = allGames[i].getMinTime();    //feeds each time from the boardgame into the int varibale time within this specific method
		if (userInputTime >= time) {        //if the user inputs 10 minutes for instance then and if the time from the boardgame is less than or equal it will print out the games
			std::cout << allGames[i].getName() << " (" << allGames[i].getYear() << ") " << "[GR=" << allGames[i].getGibbRating() << ", PR=" << allGames[i].getPubRating() << ", MP=" << allGames[i].getMinPlayers() << ", MT=" << allGames[i].getMinTime() << "]" << std::endl; //as you can see here
			counter++;                      //this counter is for tracking how many games happen to be less than or equal to the user's input
		} else {
		}
	} if (counter == 0) {
		std::cout << "No Games Found at or lower than that value\n" << std::endl;          //if the counter never get's incrememented then the user did not input a integer that is less than or equal to the times from the boardgame.
	} else {
	} // hopefully this makes sense, you can also in this if statement put an invalid entry, but it wasnt specific in the assignment so if they put an invalid entry like "][2", then the program will just rerun the menu options again.
}





