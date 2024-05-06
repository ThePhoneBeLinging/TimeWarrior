//
// Created by Elias on 05/05/2024.
//

#ifndef TIMEWARRIOR_GAMEMANAGER_H
#define TIMEWARRIOR_GAMEMANAGER_H
#include "raylib.h"
#include "Player.h"


class GameManager
{
public:
    GameManager(int screenWidth, int screenHeight, int fps);
    void gameLoop();
    Player* getPlayer();
    int getRunTime () const;
private:
    int screenWidth;
    int screenHeight;
    Player* player = nullptr;
    Player* oldPlayer = nullptr;
    void handleMovement();
    int runTime;
};


#endif //TIMEWARRIOR_GAMEMANAGER_H
