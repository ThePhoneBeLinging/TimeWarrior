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

private:
    int movementSpeed = 2;
};


#endif //TIMEWARRIOR_PLAYER_H
