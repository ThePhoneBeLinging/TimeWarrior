//
// Created by Elias on 06/05/2024.
//

#include "PressurePlate.h"

PressurePlate::PressurePlate (int x, int y, int width, int height):
        DrawAbleObject(x,y,width,height,false)
{
    this->idleTexture = LoadTexture("../Resources/wood.png");
    this->activatedTexture = LoadTexture("../Resources/zelda.png");
    this->deactivate();
}

void PressurePlate::activate ()
{
    this->activated = true;
    this->setTexture(this->activatedTexture);
}

void PressurePlate::deactivate ()
{
    this->activated = false;
    this->setTexture(this->idleTexture);
}
