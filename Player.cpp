//
// Created by Elias on 05/05/2024.
//

#include "Player.h"

Player::Player (int x, int y, int width, int height):DrawAbleObject(x,y,width,height, LoadTexture("../Resources/zelda.png"))
{
    this->head = 0;
}
int Player::getMovementSpeed ()
{
    return this->movementSpeed;
}

void Player::savePosition (int x, int y)
{
    this->xPositions[this->head] = x;
    this->yPositions[this->head] = y;
    this->head++;
}

int Player::getHead ()
{
    return this->head;
}

int Player::getXPositionAtIndex (int index)
{
    return this->xPositions[index];
}

int Player::getYPositionAtIndex (int index)
{
    return this->yPositions[index];
}

void Player::setHead (int head)
{
    this->head = head;
}

