//
// Created by Elias on 05/05/2024.
//

#ifndef TIMEWARRIOR_PLAYER_H
#define TIMEWARRIOR_PLAYER_H


#include "raylib.h"
#include "DrawAbleObject.h"

class Player: public DrawAbleObject
{
public:
    Player(int x, int y, int width, int height);

    int getMovementSpeed();
    void savePosition(int x, int y);
    int getHead();
    int getXPositionAtIndex(int index);
    int getYPositionAtIndex(int index);
    void setHead(int head);
private:
    int movementSpeed = 2;
    int xPositions[10000] = {0};
    int yPositions[10000] = {0};
    int head;
};


#endif //TIMEWARRIOR_PLAYER_H
