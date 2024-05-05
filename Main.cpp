//
// Created by Elias on 05/05/2024.
//

#include "raylib.h"
#include "GameManager.h"
#include <iostream>
int main()
{
    int screenHeight = 800;
    int screenWidth = 1200;
    int targetFPS = 144;
    GameManager gameManager = GameManager(screenWidth,screenHeight,targetFPS);
    gameManager.gameLoop();
    CloseWindow();
    return 0;
}