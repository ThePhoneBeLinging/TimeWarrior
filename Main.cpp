//
// Created by Elias on 05/05/2024.
//

#include "raylib.h"
#include <iostream>
void gameLoop();
int main()
{
    int screenHeight = 800;
    int screenWidth = 1200;
    InitWindow(screenWidth,screenHeight,"Time - Warrior");
    SetTargetFPS(60);
    gameLoop();
    std::cout << "Hello world";
    CloseWindow();
    return 0;
}

void gameLoop()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("Hello World",250,250,15,WHITE);
        EndDrawing();
    }

}