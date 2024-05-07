//
// Created by Elias on 06/05/2024.
//

#include "PressurePlate.h"

PressurePlate::PressurePlate (int x, int y, int width, int height):
        DrawAbleObject(x,y,width,height, LoadTexture("../Resources/wood.png"))
{
    this->idleTexture = this->getTexture();
    this->activatedTexture = LoadTexture("../Resources/zelda.png");
    this->activated = false;
}

void PressurePlate::activate ()
{
    this->activated = true;
}

void PressurePlate::deactivate ()
{
    this->activated = false;
}
