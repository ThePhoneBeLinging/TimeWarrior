//
// Created by Elias on 06/05/2024.
//

#include "DrawAbleObject.h"

DrawAbleObject::DrawAbleObject (int x, int y, int width, int height)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

int DrawAbleObject::getX () const
{
    return this->x;
}

void DrawAbleObject::setX (int x)
{
    DrawAbleObject::x = x;
}

int DrawAbleObject::getY () const
{
    return this->y;
}

void DrawAbleObject::setY (int y)
{
    DrawAbleObject::y = y;
}

int DrawAbleObject::getWidth () const
{
    return this->width;
}

void DrawAbleObject::setWidth (int width)
{
    DrawAbleObject::width = width;
    this->texture.width = width;
}

int DrawAbleObject::getHeight () const
{
    return this->height;
}

void DrawAbleObject::setHeight (int height)
{
    DrawAbleObject::height = height;
    this->texture.height = height;
}

Texture2D DrawAbleObject::getTexture ()
{
    return this->texture;
}

void DrawAbleObject::setTexture (const Texture2D &texture)
{
    DrawAbleObject::texture = texture;
    this->texture.height = this->height;
    this->texture.width = this->width;
}

bool DrawAbleObject::getIfColliding (DrawAbleObject* otherObject)
{
    bool isColliding = false;
    if (this->x - otherObject->width < otherObject->x &&
        this->x + this->width > otherObject->x)
    {
        if (this->y - otherObject->y < otherObject->y &&
            this->y + this->height > otherObject->y)
        {
            return true;
        }
    }
    return false;
    return isColliding;
}



