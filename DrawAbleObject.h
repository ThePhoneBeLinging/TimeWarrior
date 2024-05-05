//
// Created by Elias on 06/05/2024.
//

#ifndef TIMEWARRIOR_DRAWABLEOBJECT_H
#define TIMEWARRIOR_DRAWABLEOBJECT_H


#include "raylib.h"

class DrawAbleObject
{
public:
    DrawAbleObject(int x, int y, int width, int height, Texture2D texture);
    int getX () const;

    void setX (int x);

    int getY () const;

    void setY (int y);

    int getWidth () const;

    void setWidth (int width);

    int getHeight () const;

    void setHeight (int height);


private:
    int x;
    int y;
    int width;
    int height;
    Texture2D texture;
public:
    Texture2D getTexture ();

    void setTexture (const Texture2D &texture);
};


#endif //TIMEWARRIOR_DRAWABLEOBJECT_H
