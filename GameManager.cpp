//
// Created by Elias on 05/05/2024.
//

#include <iostream>
#include "GameManager.h"
#include "PressurePlate.h"

GameManager::GameManager (int screenWidth, int screenHeight, int fps)
{
    InitWindow(screenWidth,screenHeight,"Time - Warrior");
    SetTargetFPS(fps);
    this->player = new Player(0,0,50,50);
    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;
    this->runTime = 0;
    DrawAbleObject drawAbleObject = DrawAbleObject(250,250,50,50,true);
    drawAbleObject.setTexture(LoadTexture("../Resources/wood.png"));
    this->drawAbleObjects.push_back(drawAbleObject);
}

void GameManager::gameLoop()
{
    while (!WindowShouldClose())
    {
        drawAndUpdatePlayers();
        BeginDrawing();
        ClearBackground(BLACK);
        drawDrawAbleObjects();
        DrawText(TextFormat("%d",runTime),0,0,15,WHITE);
        if (IsKeyPressed(KEY_ENTER)) resetPlayer();
        this->runTime++;
        EndDrawing();
    }
}

void GameManager::handleMovement ()
{
    for (int i = 0; i < player->getMovementSpeed(); i++)
    {
        int movementX = 0;
        int movementY = 0;

        if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) movementY--;
        if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) movementY++;
        if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) movementX--;
        if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) movementX++;

        int newX = player->getX() + movementX;
        int newY = player->getY() + movementY;
        movePlayerToPos(player,newX,newY);
    }
}

Player *GameManager::getPlayer ()
{
    return this->player;
}

int GameManager::getRunTime () const
{
    return this->runTime;
}

void GameManager::resetPlayer ()
{
    delete this->oldPlayer;
    this->oldPlayer = this->player;
    this->oldPlayer->setHead(0);
    //TODO Set oldPlayer and new player positions to entrance of room
    this->oldPlayer->setX(0);
    this->oldPlayer->setY(0);
    this->player = new Player(0,0,this->oldPlayer->getWidth(),this->oldPlayer->getHeight());
}

void GameManager::drawAndUpdatePlayers ()
{
    player->savePosition(player->getX(),player->getY());
    handleMovement();
    if (this->oldPlayer != nullptr)
    {
        int head = this->oldPlayer->getHead();
        int xPosition = this->oldPlayer->getXPositionAtIndex(head);
        int yPosition = this->oldPlayer->getYPositionAtIndex(head);
        if (xPosition != 0 && yPosition != 0)
        {
            movePlayerToPos(this->oldPlayer,xPosition,yPosition);
        }
        DrawTexture(this->oldPlayer->getTexture(),this->oldPlayer->getX(),this->oldPlayer->getY(),WHITE);
        this->oldPlayer->setHead(this->oldPlayer->getHead() + 1);
    }
    DrawTexture(player->getTexture(),player->getX(),player->getY(),WHITE);
    if (this->player->getHead() == 10000) resetPlayer();
}

void GameManager::drawDrawAbleObjects ()
{
    for (DrawAbleObject drawAbleObject : drawAbleObjects)
    {
        DrawTexture(drawAbleObject.getTexture(),drawAbleObject.getX(),drawAbleObject.getY(),WHITE);
    }
}

void GameManager::movePlayerToPos (Player *player, int newX, int newY)
{
    int oldX = player->getX();
    int oldY = player->getY();
    player->setX(newX);
    player->setY(newY);
    for (DrawAbleObject drawAbleObject : drawAbleObjects)
    {
        if (!drawAbleObject.isCollidable()) continue;
        if (player->getIfColliding(&drawAbleObject))
        {
            player->setX(oldX);
            if (player->getIfColliding(&drawAbleObject))
            {
                player->setX(newX);
                player->setY(oldY);
            }
            else if (player->getIfColliding(&drawAbleObject))
            {
                player->setX(oldX);
                player->setY(oldY);
            }
            return;
        }

    }
    if (newX > 0 && newX + player->getWidth() < screenWidth)
    {
        player->setX(newX);
    }
    if (newY > 0 && newY + player->getHeight() < screenHeight)
    {
        player->setY(newY);
    }
}

