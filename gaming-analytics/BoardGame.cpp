//BoardGame.cpp

#include <string>
#include <iostream>
#include "BoardGame.h"

BoardGame::BoardGame(){
}

void BoardGame::setName(std::string name){
    tempName = name;
}
void BoardGame::setGibbRating(double gibbRating){
    tempGibbRating = gibbRating;
}
void BoardGame::setPubRating(double pubRating){
    tempPubRating = pubRating;
}
void BoardGame::setTempYear(int year){
    tempYear = year;
}
void BoardGame::setTempMinPlayers(int minPlayers){
    tempMinPlayers = minPlayers;
}
void BoardGame::setTempMinTime(int minTime){
    tempMinTime = minTime;
}

std::string BoardGame::getName(){
    return(tempName);
}
double BoardGame::getGibbRating(){
    return(tempGibbRating);
}
double BoardGame::getPubRating(){
    return(tempPubRating);
}
int BoardGame::getYear(){
    return(tempYear);
}
int BoardGame::getMinPlayers(){
    return(tempMinPlayers);
}
int BoardGame::getMinTime(){
    return(tempMinTime);
}
