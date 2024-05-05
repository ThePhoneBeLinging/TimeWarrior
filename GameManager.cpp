//
// Created by Elias on 05/05/2024.
//

#include "GameManager.h"

void GameManager::gameLoop()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("Hello World",250,250,15,WHITE);
        EndDrawing();
    }

}

GameManager::GameManager (int screenWidth, int screenHeight, int fps)
{
    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;
    InitWindow(screenWidth,screenHeight,"Time - Warrior");
    SetTargetFPS(fps);
}
