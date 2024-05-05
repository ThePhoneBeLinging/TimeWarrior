//
// Created by Elias on 05/05/2024.
//

#include <iostream>
#include "GameManager.h"

GameManager::GameManager (int screenWidth, int screenHeight, int fps)
{
    InitWindow(screenWidth,screenHeight,"Time - Warrior");
    SetTargetFPS(fps);
    this->player = new Player(0,0,50,50);
    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;
}

void GameManager::gameLoop()
{
    while (!WindowShouldClose())
    {
        handleMovement();
        BeginDrawing();
        ClearBackground(BLACK);
        DrawTexture(player->getTexture(),player->getX(),player->getY(),WHITE);
        EndDrawing();
    }
}

void GameManager::handleMovement ()
{
    for (int i = 0; i < player->getMovementSpeed(); i++)
    {
        int movementX = 0;
        int movementY = 0;

        if (IsKeyDown(KEY_W)) movementY--;
        if (IsKeyDown(KEY_S)) movementY++;
        if (IsKeyDown(KEY_A)) movementX--;
        if (IsKeyDown(KEY_D)) movementX++;

        int totalMovementX = player->getX() + movementX;
        int totalMovementY = player->getY() + movementY;
        if (totalMovementX > 0 && totalMovementX + player->getWidth() < screenWidth) player->setX(totalMovementX);
        if (totalMovementY > 0 && totalMovementY + player->getHeight() < screenHeight) player->setY(totalMovementY);
    }
}
