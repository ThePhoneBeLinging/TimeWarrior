//
// Created by Elias on 05/05/2024.
//

#ifndef TIMEWARRIOR_GAMEMANAGER_H
#define TIMEWARRIOR_GAMEMANAGER_H
#include "raylib.h"


class GameManager
{
public:
    GameManager(int screenWidth, int screenHeight, int fps);
    void gameLoop();
private:
    int screenWidth;
    int screenHeight;
};


#endif //TIMEWARRIOR_GAMEMANAGER_H
