//
// Created by Elias on 05/05/2024.
//

#include "Player.h"

Player::Player (int x, int y, int width, int height):DrawAbleObject(x,y,width,height, LoadTexture("../Resources/zelda.png"))
{
}
int Player::getMovementSpeed ()
{
    return this->movementSpeed;
}

