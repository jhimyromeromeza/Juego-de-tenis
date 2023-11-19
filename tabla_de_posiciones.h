#pragma once
#include "pch.h"
#include <iostream>
#include <stdio.h>
#define FILAS 7
#include <windows.h>
#include "Elegir_pais.h"
#define COLUMNAS 18
using namespace System;
using namespace std;

int matriz_PERU[FILAS][COLUMNAS] = {
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},


};

int matriz_ARGENTINA[FILAS][COLUMNAS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},

};

int matriz_PARAGUAY[FILAS][COLUMNAS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}
};

int matriz_BRAZIL[FILAS][COLUMNAS] = {
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 4, 4, 4, 3, 3, 3, 3, 3},
    {3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3},
    {3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 4, 4, 4, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}
};

int matriz_VENEZUELA[FILAS][COLUMNAS] = {
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 7, 7, 7, 7, 7, 7, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int matriz_ECUADOR[FILAS][COLUMNAS] = {
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {2, 2, 2, 2, 2, 2, 2, 6, 1, 1, 6, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int matriz_BOLIVIA[FILAS][COLUMNAS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}
};

int matriz_COLOMBIA[FILAS][COLUMNAS] = {
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
    {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
    {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int matriz_URUGUAY[FILAS][COLUMNAS] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 2, 2, 2, 2, 0, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

int matriz_CHILE[FILAS][COLUMNAS] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7},
    {0, 0, 0, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7},
    {0, 0, 0, 7, 7, 7, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};
void tabla_Peru() {
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
}
void tabla_Argentina() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {

            if (matrizARGENTINA[f][c] == 0) Console::ForegroundColor = ConsoleColor::White;
            if (matrizARGENTINA[f][c] == 1) Console::ForegroundColor = ConsoleColor::Cyan;
            if (matrizARGENTINA[f][c] == 2) Console::ForegroundColor = ConsoleColor::Yellow;

            cout << (char)219;
        }
        cout << endl;
    }

    printf("2. Argentina\n");
}
void tabla_Paraguay() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {

            if (matrizPARAGUAY[f][c] == 0) Console::ForegroundColor = ConsoleColor::White;
            if (matrizPARAGUAY[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;
            if (matrizPARAGUAY[f][c] == 2) Console::ForegroundColor = ConsoleColor::Blue;

            cout << (char)219;
        }
        cout << endl;
    }

    printf("3. Paraguay\n");
}
void tabla_Brazil() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {

            if (matrizBRAZIL[f][c] == 3) Console::ForegroundColor = ConsoleColor::Green;
            if (matrizBRAZIL[f][c] == 4) Console::ForegroundColor = ConsoleColor::Yellow;
            if (matrizBRAZIL[f][c] == 5) Console::ForegroundColor = ConsoleColor::Blue;

            cout << (char)219;
        }
        cout << endl;
    }

    printf("4. Brazil\n");
}
void tabla_Venezuela() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {

            if (matrizVENEZUELA[f][c] == 6) Console::ForegroundColor = ConsoleColor::Yellow;
            if (matrizVENEZUELA[f][c] == 2) Console::ForegroundColor = ConsoleColor::Blue;
            if (matrizVENEZUELA[f][c] == 7) Console::ForegroundColor = ConsoleColor::White;
            if (matrizVENEZUELA[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;

            cout << (char)219;
        }
        cout << endl;
    }

    printf("5. Venezuela\n");
}
void tabla_Ecuador() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(80 + c, 1 + f);
            if (matrizECUADOR[f][c] == 6) Console::ForegroundColor = ConsoleColor::Yellow;
            if (matrizECUADOR[f][c] == 2) Console::ForegroundColor = ConsoleColor::Blue;
            if (matrizECUADOR[f][c] == 7) Console::ForegroundColor = ConsoleColor::White;
            if (matrizECUADOR[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;

            cout << (char)219;
        }
        cout << endl;
    }
    gotoxi(80, 8);
    printf("6. Ecuador\n");
}
void tabla_Bolivia() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(80 + c, 9 + f);
            if (matrizBOLIVIA[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;
            if (matrizBOLIVIA[f][c] == 2) Console::ForegroundColor = ConsoleColor::Yellow;
            if (matrizBOLIVIA[f][c] == 3) Console::ForegroundColor = ConsoleColor::Green;

            cout << (char)219;
        }
        cout << endl;

    }
    gotoxi(80, 16);
    printf("7. Bolivia\n");
}
void tabla_Colombia() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(80 + c, 17 + f);
            if (matrizCOLOMBIA[f][c] == 4) Console::ForegroundColor = ConsoleColor::Yellow;
            if (matrizCOLOMBIA[f][c] == 5) Console::ForegroundColor = ConsoleColor::Blue;
            if (matrizCOLOMBIA[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;

            cout << (char)219;
        }
        cout << endl;

    }
    gotoxi(80, 24);
    printf("8. Colombia\n");
}
void tabla_Uruguay() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(80 + c, 25 + f);
            if (matrizURUGUAY[f][c] == 0) Console::ForegroundColor = ConsoleColor::White;
            if (matrizURUGUAY[f][c] == 6) Console::ForegroundColor = ConsoleColor::Blue;
            if (matrizURUGUAY[f][c] == 2) Console::ForegroundColor = ConsoleColor::Yellow;

            cout << (char)219;
        }
        cout << endl;
    }
    gotoxi(80, 32);
    printf("9. Uruaguay\n");
}
void tabla_Chile() {
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            gotoxi(80 + c, 33 + f);
            if (matrizCHILE[f][c] == 7) Console::ForegroundColor = ConsoleColor::White;
            if (matrizCHILE[f][c] == 0) Console::ForegroundColor = ConsoleColor::Blue;
            if (matrizCHILE[f][c] == 1) Console::ForegroundColor = ConsoleColor::Red;

            cout << (char)219;
        }
        cout << endl;
    }
    gotoxi(80, 40);
    printf("10. Chile\n");
    std::cout << "\033[0m";
}
void pintarLineas() {
    for (int i = 19; i < 42; i++) {
        gotoxi(i, 4); printf("%c", 205);
        gotoxi(i, 12); printf("%c", 205);
        gotoxi(i, 20); printf("%c", 205);
        gotoxi(i, 28); printf("%c", 205);
        gotoxi(i, 36); printf("%c", 205);
    }
    for (int i = 58; i < 80; i++) {
        gotoxi(i, 4); printf("%c", 205);
        gotoxi(i, 12); printf("%c", 205);
        gotoxi(i, 20); printf("%c", 205);
        gotoxi(i, 28); printf("%c", 205);
        gotoxi(i, 36); printf("%c", 205);
    }
    gotoxi(49, 4); printf("vs");
    gotoxi(49, 12); printf("vs");
    gotoxi(49, 20); printf("vs");
    gotoxi(49, 28); printf("vs");
    gotoxi(49, 36); printf("vs");
}