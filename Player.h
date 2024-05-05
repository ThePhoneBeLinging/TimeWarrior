//
// Created by Elias on 05/05/2024.
//

#ifndef TIMEWARRIOR_PLAYER_H
#define TIMEWARRIOR_PLAYER_H


#include "raylib.h"

class Player
{
public:
    Player(int x, int y, int width, int height);
private:
    int x;
public:
    int getX () const;

    void setX (int x);

    int getY () const;

    void setY (int y);

    int getWidth () const;

    void setWidth (int width);

    int getHeight () const;

    void setHeight (int height);

    int getMovementSpeed();

private:
    int y;
    int width;
    int height;
    int movementSpeed = 2;
};


#endif //TIMEWARRIOR_PLAYER_H
