//
// Created by Elias on 05/05/2024.
//

#include "Player.h"

Player::Player (int x, int y, int width, int height):DrawAbleObject(x,y,width,height, LoadTexture("../Resources/zelda.png"))
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}
int Player::getMovementSpeed ()
{
    return this->movementSpeed;
}

