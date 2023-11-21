#pragma once
#include "pch.h"
#include "iostream"
#include <stdio.h>
#define FILAS 30
#include <windows.h>
#define COLUMNAS 100
using namespace System;
using namespace std;


int campo[FILAS][COLUMNAS] = {
    {7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,7,7,7,7,7,7,7,7,7,7,4},
    {7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,6,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,8,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,1,1,1,1,1,1,1,8,1,1,4,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,4,6,4,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,4,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,4,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,4,6,4,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,4,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,1,1,1,1,1,1,1,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,1,1,1,1,1,1,1,8,1,1,1,1,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,4,7,4,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,4,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}

};

void mostrarcampo() {
    system("cls");
    for (int f = 0; f < FILAS; f++)
    {
        for (int c = 0; c < COLUMNAS; c++)
        {
            if (campo[f][c] == 4) Console::ForegroundColor = ConsoleColor::White;
            if (campo[f][c] == 1) Console::ForegroundColor = ConsoleColor::Green;
            if (campo[f][c] == 2) Console::ForegroundColor = ConsoleColor::Blue;
            if (campo[f][c] == 10) Console::ForegroundColor = ConsoleColor::DarkRed;
            if (campo[f][c] == 0) Console::ForegroundColor = ConsoleColor::Black;
            if (campo[f][c] == 3) Console::ForegroundColor = ConsoleColor::DarkYellow;
            if (campo[f][c] == 9) Console::ForegroundColor = ConsoleColor::Cyan;
            if (campo[f][c] == 8) Console::ForegroundColor = ConsoleColor::DarkBlue;
            if (campo[f][c] == 7) Console::ForegroundColor = ConsoleColor::DarkGray;
            if (campo[f][c] == 6) Console::ForegroundColor = ConsoleColor::Red;
            cout << (char)219;
        }
        cout << endl;

    }
}