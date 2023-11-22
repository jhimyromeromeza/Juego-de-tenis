#pragma once
#include "pch.h"
#include "iostream"
#include <stdio.h>
#define FILAS 7
#include <windows.h>
#define COLUMNAS 18
using namespace System;
using namespace std;

int matrizPERU[FILAS][COLUMNAS] = {
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},


};

int matrizARGENTINA[FILAS][COLUMNAS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},

};

int matrizPARAGUAY[FILAS][COLUMNAS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}
};

int matrizBRAZIL[FILAS][COLUMNAS] = {
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 4, 4, 4, 3, 3, 3, 3, 3},
    {3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3},
    {3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 4, 4, 4, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}
};

int matrizVENEZUELA[FILAS][COLUMNAS] = {
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 7, 7, 7, 7, 7, 7, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int matrizECUADOR[FILAS][COLUMNAS] = {
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {2, 2, 2, 2, 2, 2, 2, 6, 1, 1, 6, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int matrizBOLIVIA[FILAS][COLUMNAS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}
};

int matrizCOLOMBIA[FILAS][COLUMNAS] = {
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int matrizURUGUAY[FILAS][COLUMNAS] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 2, 2, 2, 2, 0, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

int matrizCHILE[FILAS][COLUMNAS] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7},
    {0, 0, 0, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7},
    {0, 0, 0, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};
void Peru() {
    //imprime bandera del Peru

    printf("Elegir Pais: \n");
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            if (matrizPERU[f][c] == 0) Console::ForegroundColor = ConsoleColor::White;
            if (matrizPERU[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;

            cout << (char)219;
        }
        cout << endl;

    }
    printf("1. Peru\n");
    std::cout << "\033[0m";
}
void Argentina() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(20 + c, 1 + f);
            if (matrizARGENTINA[f][c] == 0) Console::ForegroundColor = ConsoleColor::White;
            if (matrizARGENTINA[f][c] == 1) Console::ForegroundColor = ConsoleColor::Cyan;
            if (matrizARGENTINA[f][c] == 2) Console::ForegroundColor = ConsoleColor::Yellow;

            cout << (char)219;
        }
        cout << endl;
    }
    gotoxi(20, 8);
    printf("2. Argentina\n");
    std::cout << "\033[0m";
}
void Paraguay() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(40 + c, 1 + f);
            if (matrizPARAGUAY[f][c] == 0) Console::ForegroundColor = ConsoleColor::White;
            if (matrizPARAGUAY[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;
            if (matrizPARAGUAY[f][c] == 2) Console::ForegroundColor = ConsoleColor::Blue;

            cout << (char)219;
        }
        cout << endl;
    }
    gotoxi(40, 8);
    printf("3. Paraguay\n");
    std::cout << "\033[0m";
}
void Brazil() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(60 + c, 1 + f);
            if (matrizBRAZIL[f][c] == 3) Console::ForegroundColor = ConsoleColor::Green;
            if (matrizBRAZIL[f][c] == 4) Console::ForegroundColor = ConsoleColor::Yellow;
            if (matrizBRAZIL[f][c] == 5) Console::ForegroundColor = ConsoleColor::Blue;

            cout << (char)219;
        }
        cout << endl;
    }
    gotoxi(60, 8);
    printf("4. Brazil\n");
    std::cout << "\033[0m";
}
void Venezuela() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(80 + c, 1 + f);
            if (matrizVENEZUELA[f][c] == 6) Console::ForegroundColor = ConsoleColor::Yellow;
            if (matrizVENEZUELA[f][c] == 2) Console::ForegroundColor = ConsoleColor::Blue;
            if (matrizVENEZUELA[f][c] == 7) Console::ForegroundColor = ConsoleColor::White;
            if (matrizVENEZUELA[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;

            cout << (char)219;
        }
        cout << endl;
    }
    gotoxi(80, 8);
    printf("5. Venezuela\n");
    std::cout << "\033[0m";
}
void Ecuador() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            if (matrizECUADOR[f][c] == 6) Console::ForegroundColor = ConsoleColor::Yellow;
            if (matrizECUADOR[f][c] == 2) Console::ForegroundColor = ConsoleColor::Blue;
            if (matrizECUADOR[f][c] == 7) Console::ForegroundColor = ConsoleColor::White;
            if (matrizECUADOR[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;

            cout << (char)219;
        }
        cout << endl;
    }
    gotoxi(1, 16);
    printf("6. Ecuador\n");
    std::cout << "\033[0m";
}
void Bolivia() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(20 + c, 9 + f);
            if (matrizBOLIVIA[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;
            if (matrizBOLIVIA[f][c] == 2) Console::ForegroundColor = ConsoleColor::Yellow;
            if (matrizBOLIVIA[f][c] == 3) Console::ForegroundColor = ConsoleColor::Green;

            cout << (char)219;
        }
        cout << endl;

    }
    gotoxi(20, 16);
    printf("7. Bolivia\n");
    std::cout << "\033[0m";
}
void Colombia() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(40 + c, 9 + f);
            if (matrizCOLOMBIA[f][c] == 4) Console::ForegroundColor = ConsoleColor::Yellow;
            if (matrizCOLOMBIA[f][c] == 5) Console::ForegroundColor = ConsoleColor::Blue;
            if (matrizCOLOMBIA[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;

            cout << (char)219;
        }
        cout << endl;

    }
    gotoxi(40, 16);
    printf("8. Colombia\n");
    std::cout << "\033[0m";
}
void Uruguay() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(60 + c, 9 + f);
            if (matrizURUGUAY[f][c] == 0) Console::ForegroundColor = ConsoleColor::White;
            if (matrizURUGUAY[f][c] == 6) Console::ForegroundColor = ConsoleColor::Blue;
            if (matrizURUGUAY[f][c] == 2) Console::ForegroundColor = ConsoleColor::Yellow;

            cout << (char)219;
        }
        cout << endl;
    }
    gotoxi(60, 16);
    printf("9. Uruaguay\n");
    std::cout << "\033[0m";
}
void Chile() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(80 + c, 9 + f);
            if (matrizCHILE[f][c] == 7) Console::ForegroundColor = ConsoleColor::White;
            if (matrizCHILE[f][c] == 0) Console::ForegroundColor = ConsoleColor::Blue;
            if (matrizCHILE[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;

            cout << (char)219;
        }
        cout << endl;
    }
    gotoxi(80, 16);
    printf("10. Chile\n");
    std::cout << "\033[0m";
}