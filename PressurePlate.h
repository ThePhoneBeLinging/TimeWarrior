//
// Created by Elias on 06/05/2024.
//

#ifndef TIMEWARRIOR_PRESSUREPLATE_H
#define TIMEWARRIOR_PRESSUREPLATE_H


#include "DrawAbleObject.h"

class PressurePlate: public DrawAbleObject
{
public:
    PressurePlate(int x, int y, int width, int height);
    void activate();
    void deactivate();
private:
    Texture2D activatedTexture;
    Texture2D idleTexture;
    bool activated;
};


#endif //TIMEWARRIOR_PRESSUREPLATE_H
