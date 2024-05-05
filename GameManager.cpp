//
// Created by Elias on 05/05/2024.
//

#include <iostream>
#include "GameManager.h"

GameManager::GameManager (int screenWidth, int screenHeight, int fps)
{
    this->player = new Player(0,0,50,50);
    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;
    InitWindow(screenWidth,screenHeight,"Time - Warrior");
    SetTargetFPS(fps);

}

void GameManager::gameLoop()
{
    while (!WindowShouldClose())
    {
        handleKeyBoardInput();
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle(player->getX(),player->getY(),player->getWidth(),player->getHeight(),RED);
        DrawText("Hello World",250,250,15,WHITE);
        EndDrawing();
    }

}

void GameManager::handleKeyBoardInput ()
{

    for (int i = 0; i < player->getMovementSpeed(); i++)
    {
        int movementX = 0;
        int movementY = 0;

        if (IsKeyDown(KEY_W)) movementY--;
        if (IsKeyDown(KEY_S)) movementY++;
        if (IsKeyDown(KEY_A)) movementX--;
        if (IsKeyDown(KEY_D)) movementX++;


        //TODO insert collision checks
        if (true) player->setX(player->getX() + movementX);
        if (true) player->setY(player->getY() + movementY);
    }
}
