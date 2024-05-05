//
// Created by Elias on 05/05/2024.
//

#include "Player.h"

Player::Player (int x, int y, int width, int height)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

int Player::getX () const
{
    return x;
}

void Player::setX (int x)
{
    Player::x = x;
}

int Player::getY () const
{
    return y;
}

void Player::setY (int y)
{
    Player::y = y;
}

int Player::getWidth () const
{
    return width;
}

void Player::setWidth (int width)
{
    Player::width = width;
}

int Player::getHeight () const
{
    return height;
}

void Player::setHeight (int height)
{
    Player::height = height;
}

int Player::getMovementSpeed ()
{
    return this->movementSpeed;
}
