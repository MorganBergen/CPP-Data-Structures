//BoardGame.h

#ifndef BOARD_GAME_H
#define BOARD_GAME_H

class BoardGame {
    
private:
    std::string tempName;
    double tempGibbRating;
    double tempPubRating;
    int tempYear;
    int tempMinPlayers;
    int tempMinTime;
    
public:
    
    BoardGame();
    void setName(std::string name);
    void setGibbRating(double gibbRating);
    void setPubRating(double pubRating);
    void setTempYear(int year);
    void setTempMinPlayers(int minPlayers);
    void setTempMinTime(int minTime);
    
    std::string getName();
    double getGibbRating();
    double getPubRating();
    int getYear();
    int getMinPlayers();
    int getMinTime();
    
};

#endif
